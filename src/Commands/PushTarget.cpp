#include "PushTarget.h"

PushTarget::PushTarget() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	//this will require the linear actuator/servo
}

// Called just before this Command runs the first time
void PushTarget::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void PushTarget::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool PushTarget::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void PushTarget::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PushTarget::Interrupted() {

}
