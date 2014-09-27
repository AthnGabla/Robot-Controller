#pragma config(Motor,port2,rightLarge,tmotorNormal,openLoop, reversed)
#pragma config(Motor,port3,rightSmall,tmotorNormal,openLoop, reversed)
#pragma config(Motor,port4,servoMotorA,tmotorNormal,openLoop)
#pragma config(Motor,port5,servoMotorB,tmotorNormal,openLoop)
#pragma config(Motor,port6,servoMotorC,tmotorNormal,openLoop)
#pragma config(Motor,port7,servoMotorD,tmotorNormal,openLoop)
#pragma config(Motor,port8,leftSmall,tmotorNormal,openLoop)
#pragma config(Motor,port9,leftLarge,tmotorNormal,openLoop)

//protip: set a motor speed or a servo position by setting the object of the motor array at that position
//to either a value from -127 to 127
//get a controller's value with the function "vexRT(channel);"

int a = 0;
int speedMultiplier = 1;

task main(){

	if(vexRT(Ch1) > 10){
		motor[servoMotorA] = 127;
	}
	else if(vexRT(Ch1) < -10){
		motor[servoMotorA] = -127;
	}

//	motor[leftLarge] = 127;
//	motor[rightLarge] = 127;

	startTask(main);
}
