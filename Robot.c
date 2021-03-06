#pragma config(Motor, port2, rightLarge, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor, port3, rightSmall, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor, port4, servoMotorA,tmotorServoStandard, openLoop)
#pragma config(Motor, port5, servoMotorB,tmotorServoStandard, openLoop)
#pragma config(Motor, port6, servoMotorC,tmotorServoStandard, openLoop)
#pragma config(Motor, port7, servoMotorD,tmotorServoStandard, openLoop)
#pragma config(Motor, port8, leftSmall,  tmotorServoContinuousRotation, openLoop)
#pragma config(Motor, port9, leftLarge,  tmotorServoContinuousRotation, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//protip: set a motor speed or a servo position by setting the object of the motor array at that position
//to either a value from -127 to 127
//get a controller's value with the function "vexRT(channel);"

//if it breaks again, change servos from 3 wire servos to 3 wire motors NOTE

// int speedMultiplier = 1;

task main()
{

	motor[leftLarge] = vexRT[Ch3] * -1;
	motor[rightLarge] = vexRT[Ch2];
	//arcadeControl(verticalJoystick, horizontalJoystick, threshold);      This is here if we want to switch to Arcade Style controls instead of Tank Style.
	tankControl(Ch2, Ch3, 4);

// These next few lines are the arm parts

//Arm Motor (String)
	if(vexRT[Btn6U] == 1) //button is a placeholder
	{
		motor[leftSmall] = 127;
		wait1Msec(250);
	}
	else if(vexRT[Btn6U] == 0)
	{
		motor[leftSmall] = 0;
		wait1Msec(250);
	}

//Arm Motor (String)(Reversed)
	if(vexRT[Btn6D] == 1) //button is a placeholder
	{
		motor[leftSmall] = -127;
		wait1Msec(250);
	}
	else if(vexRT[Btn6D] == 0)
	{
		motor[leftSmall] = 0;
		wait1Msec(250);
	}

//Arm Motor
	if(vexRT[Btn5U] == 1) //button is a placeholder
	{
		motor[rightSmall] = 127;
		wait1Msec(250);
	}
	else if(vexRT[Btn5U] == 0)
	{
		motor[rightSmall] = 0;
		wait1Msec(250);
	}

//Claw Servo
	if(vexRT[Btn8D] == 1) //button is a placeholder
	{
		motor[servoMotorA] = 127;
		wait1Msec(250);
	}

	//Bucket Control

	if(vexRT[Btn8R] == 1) //button is a placeholder
	{
		motor[servoMotorD] = -127;
		wait1Msec(250);
	}


	//If broken, remove else loop and if else loops
/*	else
	{
	motor[servoMotorA] = 0;     // Ignore these
  motor[servoMotorB] = 0;     //    |
	motor[servoMotorC] = 0;     //    |
	wait1Msec(250);    //            \ /
	}  */



	motor[leftLarge] = 127;     //Motor Speed for Left Wheel
	motor[rightLarge] = 127;    // Motor Speed for Right Wheel


	startTask(main);
}
