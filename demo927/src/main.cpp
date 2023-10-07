/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       sky                                                       */
/*    Created:      2023/9/27 20:19:11                                        */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here


int main() {
    vex::motor motor1(0);
    vex::motor motor2(9);

    int t=0;

    while(1)
    {

        motor1.spin(vex::directionType::fwd, 20, vex::velocityUnits::rpm);
        motor2.spin(vex::directionType::rev, 50, vex::velocityUnits::rpm);
        this_thread::sleep_for(16000);

        motor1.spin(vex::directionType::fwd, 50, vex::velocityUnits::rpm);
        motor2.spin(vex::directionType::rev, 50, vex::velocityUnits::rpm);
        this_thread::sleep_for(1000);

        motor1.spin(vex::directionType::fwd, 50, vex::velocityUnits::rpm);
        motor2.spin(vex::directionType::rev, 20, vex::velocityUnits::rpm);
        this_thread::sleep_for(18000);

        break;
  
    }
        motor2.spin(vex::directionType::fwd, 0, vex::velocityUnits::rpm);
        motor1.spin(vex::directionType::rev, 0, vex::velocityUnits::rpm);
    return 0;
    
       
}
