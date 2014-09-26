#pragma config(Motor,motor1,leftMotor,tmotorVexIQ, openLoop, encoder)
#pragma config(Motor,motor6,rightMotor,tmotorVexIQ, openLoop, reversed, encoder)

//int a = 0;
//int speedMultiplier = 1;

task main(){
//	a = getBumperValue(port2
/*
	if(a == 0){
		setMotorSpeed(leftMotor, 127);
		setMotorSpeed(rightMotor, 127);
	}
*/
	setMotorSpeed(leftMotor,  (getJoystickValue(ChA) + getJoystickValue(ChB))/2);  	// (y - x)/2
	setMotorSpeed(rightMotor, (getJoystickValue(ChA) - getJoystickValue(ChB))/2);  	// (y + x)/2
startTask(main);
}
