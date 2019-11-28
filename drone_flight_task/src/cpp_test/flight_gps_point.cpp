#include <cpp_api/navigation_bridge.h>
#include <iostream>

int main(int argc, char *argv[])
{
    Navigation nav;

    //Taking Off
    std::cout<<"\nSending TakeOff command to vehicle\n";
    if(nav.take_off(3.0)){
        std::cout<<"\nTakeOff Failed.. exiting\n";
        if(nav.land(false)){
            std::cout<<"\nLanding Failed.. disarm";
            
            if(!nav.disarm()){
                std::cout<<"\nSystem Disarmed";
            }
            else
                std::cout<<"Disarmed Failed";
        }
    }

    //Sending Position Setpoints
    std::cout<<"\nSending Position Setpoint(59.944300771843466, 30.467877857393773) command to vehicle\n";
    if(nav.position_set_global(59.944300771843466, 30.467877857393773, 5.0, 0.12, 2.0, false, true)){
        std::cout<<"\nFailed to reach position setpoint.. exiting\n";
        nav.rtl();
    }

    std::cout<<"\nSending RTL mode command to vehicle\n";
    nav.rtl();
}
