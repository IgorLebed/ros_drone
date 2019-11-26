#!/usr/bin/env python
from time import time
from time import sleep
from flyt_python import api
import cv2
import pexif
import sys, os

#drone = api.navigation(timeout=120000)  # instance of flyt droneigation class
drone = api.navigation()
sleep(5)

cam = -1
#cam = "http://localhost:8080/stream?topic=/flytsim/flytcam/image_capture&width=320&height=240&type=ros_compressed"
stream = cv2.VideoCapture(cam)

def condition_for_end_photo():
    drone_mode = drone.get_vehicle_mode()
    condition = drone_mode == 'LAND' or drone_mode == 'API|LAND'
    return condition
    
def link_path():
    #path = "/home/flytos/Documents/photo_from_drone/photo"
    path = "/flyt/photo/photo_without"
    return path

def link_photo():
    #link_photo_without_geo = "/home/flytos/Documents/photo_from_drone/photo/"
    link_photo_without_geo = "/flyt/photo/photo_without/"
    return link_photo_without_geo


def link_geo_photo():
    #link_photo_with_geo = "/home/flytos/Documents/photo_from_drone/photo_with_geo/"
    link_photo_with_geo = "/flyt/photo/photo_with/"
    return link_photo_with_geo

def position():
    # Poll data
    gpos = drone.get_global_position()
    la = gpos.lat
    lo = gpos.lon
    al = gpos.alt
    return la, lo, al

def photo_pose(RUN=True, last_time=time(), img_counter=0):
    def make_photo(last_time, now):
        if now - last_time > 1.5:
            return True

    while RUN:
        ending_condition = condition_for_end_photo()
        ret, img = stream.read()
        now = time()
        pose_v = position()
        path = link_path()
        if make_photo(last_time, now):
            # f_name = str(img_counter) + ".jpg"
            f_name = str(now) + ".jpg"
            cv2.imwrite(os.path.join(path, f_name), img)
            img_set = pexif.JpegFile.fromFile(str(link_photo()) + str(now) + ".jpg")
            img_set.set_geo(float(pose_v[0]), float(pose_v[1]), float(pose_v[2]))
            img_set.writeFile(str(link_geo_photo()) + str(now) + "_with_geo.jpg")
            img_counter += 1
            last_time = now
            # print(f_name + " has been saved at " + str(now))
        if (ending_condition):
            print "Ending photo task"
            drone.disconnect()
            RUN = not RUN
            

photo_pose()