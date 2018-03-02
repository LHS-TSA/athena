
/** @file auto.c
 * @brief File for autonomous code
 *
 * This file should contain the user autonomous() function and any functions related to it.
 *
 * Any copyright is dedicated to the Public Domain.
 * http://creativecommons.org/publicdomain/zero/1.0/
 *
 * PROS contains FreeRTOS (http://www.freertos.org) whose source code may be
 * obtained from http://sourceforge.net/projects/freertos/files/ or on request.

*/
#include "main.h"

/*
 * Runs the user autonomous code. This function will be started in its own task with the default
 * priority and stack size whenever the robot is enabled via the Field Management System or the
 * VEX Competition Switch in the autonomous mode. If the robot is disabled or communications is
 * lost, the autonomous task will be stopped by the kernel. Re-enabling the robot will restart
 * the task, not re-start it from where it left off.
 *
 * Code running in the autonomous task cannot access information from the VEX Joystick. However,
 * the autonomous function can be invoked from another task if a VEX Competition Switch is not
 * available, and it can access joystick information if called in this way.
 *
 * The autonomous task may exit, unlike operatorControl() which should never exit. If it does
 * so, the robot will await a switch to another mode or disable/enable cycle.
 */
 void autonomous() {
    encoderReset(left); encoderReset(right);
/*
      // 10pt auton - left
    if(analogRead(POT_AUTON) <= 1900)
    {

      motorSet(LIFT_LT, -70);
      motorSet(LIFT_LB,  70);
      motorSet(LIFT_RT,  70);
      motorSet(LIFT_RB, -70);

      delay(350);

      motorSet(LIFT_LT, 0);
      motorSet(LIFT_LB, 0);
      motorSet(LIFT_RT, 0);
      motorSet(LIFT_RB, 0);

      while(analogRead(POT_MOGO) > 1820){
        motorSet(MOGO_L,  70);
        motorSet(MOGO_R, -70);
      }

      delay(100);

      motorSet(MOGO_L, 0);
      motorSet(MOGO_R, 0);

      drivePID(49);
      while(analogRead(POT_MOGO) < 4055){
        motorSet(MOGO_L, -70);
        motorSet(MOGO_R,  70);
      }

      motorSet(MOGO_L, 0);
      motorSet(MOGO_R, 0);

      drivePID(-45);


      motorSet(LIFT_LT,  70);
      motorSet(LIFT_LB, -70);
      motorSet(LIFT_RT, -70);
      motorSet(LIFT_RB,  70);

      delay(250);

      motorSet(LIFT_LT, 0);
      motorSet(LIFT_LB, 0);
      motorSet(LIFT_RT, 0);
      motorSet(LIFT_RB, 0);

      motorSet(ROLLER_CLAW, -70);
      delay(400);
      motorSet(ROLLER_CLAW, 0);

      delay(250);

      turnPID(1, 135);

      delay(100);
      drivePID(6);
      delay(100);
      turnPID(1, 100);

      drivePID(5);

      motorSet(LIFT_LT, -70);
      motorSet(LIFT_LB,  70);
      motorSet(LIFT_RT,  70);
      motorSet(LIFT_RB, -70);

      delay(350);

      motorSet(LIFT_LT, 0);
      motorSet(LIFT_LB, 0);
      motorSet(LIFT_RT, 0);
      motorSet(LIFT_RB, 0);


      while(analogRead(POT_MOGO) > 1825){
        motorSet(MOGO_L, 115);
        motorSet(MOGO_R, -115);
      }
      motorSet(MOGO_L, 0);
      motorSet(MOGO_R, 0);

      drivePID(-9);
    }

    //10pt Auto - Right
    if(analogRead(POT_AUTON) <= 1900)
    {

      motorSet(LIFT_LT, -70);
      motorSet(LIFT_LB,  70);
      motorSet(LIFT_RT,  70);
      motorSet(LIFT_RB, -70);

      delay(350);

      motorSet(LIFT_LT, 0);
      motorSet(LIFT_LB, 0);
      motorSet(LIFT_RT, 0);
      motorSet(LIFT_RB, 0);

      while(analogRead(POT_MOGO) > 1820){
        motorSet(MOGO_L,  70);
        motorSet(MOGO_R, -70);
      }

      delay(100);

      motorSet(MOGO_L, 0);
      motorSet(MOGO_R, 0);

      drivePID(49);
      while(analogRead(POT_MOGO) < 4055){
        motorSet(MOGO_L, -70);
        motorSet(MOGO_R,  70);
      }

      motorSet(MOGO_L, 0);
      motorSet(MOGO_R, 0);

      drivePID(-45);


      motorSet(LIFT_LT,  70);
      motorSet(LIFT_LB, -70);
      motorSet(LIFT_RT, -70);
      motorSet(LIFT_RB,  70);

      delay(250);

      motorSet(LIFT_LT, 0);
      motorSet(LIFT_LB, 0);
      motorSet(LIFT_RT, 0);
      motorSet(LIFT_RB, 0);

      motorSet(ROLLER_CLAW, -70);
      delay(400);
      motorSet(ROLLER_CLAW, 0);

      delay(250);

      turnPID(0, 135);

      delay(100);
      drivePID(6);
      delay(100);
      turnPID(0, 100);

      drivePID(5);

      motorSet(LIFT_LT, -70);
      motorSet(LIFT_LB,  70);
      motorSet(LIFT_RT,  70);
      motorSet(LIFT_RB, -70);

      delay(350);

      motorSet(LIFT_LT, 0);
      motorSet(LIFT_LB, 0);
      motorSet(LIFT_RT, 0);
      motorSet(LIFT_RB, 0);


      while(analogRead(POT_MOGO) > 1825){
        motorSet(MOGO_L, 115);
        motorSet(MOGO_R, -115);
      }
      motorSet(MOGO_L, 0);
      motorSet(MOGO_R, 0);

      drivePID(-9);
    }

    //5pt Auton
*/
    if(analogRead(POT_AUTON) <= 1900)
    {

      motorSet(LIFT_LT, -70);
      motorSet(LIFT_LB,  70);
      motorSet(LIFT_RT,  70);
      motorSet(LIFT_RB, -70);

      delay(350);

      motorSet(LIFT_LT, 0);
      motorSet(LIFT_LB, 0);
      motorSet(LIFT_RT, 0);
      motorSet(LIFT_RB, 0);

      while(analogRead(POT_MOGO) > 1820){
        motorSet(MOGO_L,  70);
        motorSet(MOGO_R, - 70);
      }

      delay(100);

      motorSet(MOGO_L, 0);
      motorSet(MOGO_R, 0);

      drivePID(49);
      while(analogRead(POT_MOGO) < 4055){
        motorSet(MOGO_L, -70);
        motorSet(MOGO_R,  70);
      }

      motorSet(MOGO_L, 0);
      motorSet(MOGO_R, 0);

      drivePID(-42);


      motorSet(LIFT_LT,  70);
      motorSet(LIFT_LB, -70);
      motorSet(LIFT_RT, -70);
      motorSet(LIFT_RB,  70);

      delay(250);

      motorSet(LIFT_LT, 0);
      motorSet(LIFT_LB, 0);
      motorSet(LIFT_RT, 0);
      motorSet(LIFT_RB, 0);

      motorSet(ROLLER_CLAW, -70);
      delay(400);
      motorSet(ROLLER_CLAW, 0);

      delay(250);

      turnPID(1, 180);

      delay(100);
      drivePID(6);

      motorSet(LIFT_LT, -70);
      motorSet(LIFT_LB,  70);
      motorSet(LIFT_RT,  70);
      motorSet(LIFT_RB, -70);

      delay(350);

      motorSet(LIFT_LT, 0);
      motorSet(LIFT_LB, 0);
      motorSet(LIFT_RT, 0);
      motorSet(LIFT_RB, 0);


      while(analogRead(POT_MOGO) > 1825){
        motorSet(MOGO_L, 115);
        motorSet(MOGO_R, -115);
      }
      motorSet(MOGO_L, 0);
      motorSet(MOGO_R, 0);

      drivePID(-9);
    }
/*
  //Standing Goal Auton

  if(analogRead(POT_AUTON) <= 1900)
  {

    motorSet(LIFT_LT, -70);
    motorSet(LIFT_LB,  70);
    motorSet(LIFT_RT,  70);
    motorSet(LIFT_RB, -70);

    delay(500);

    motorSet(LIFT_LT, 0);
    motorSet(LIFT_LB, 0);
    motorSet(LIFT_RT, 0);
    motorSet(LIFT_RB, 0);

    drivePID(12);

    motorSet(ROLLER_CLAW, -70);
    delay(400);
    motorSet(ROLLER_CLAW, 0);

  }
  */
}
