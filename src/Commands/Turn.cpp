#include "Turn.h"

Turn::Turn(double inAngle) : angle(inAngle) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	//will require gyro
	//not sure about the inAngle part... that needs to be fixed
}

// Called just before this Command runs the first time
void Turn::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Turn::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool Turn::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void Turn::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Turn::Interrupted() {

}
