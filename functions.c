#include <kipr/botball.h>

void driveForward(int ticks, int speed);
void driveBackward(int ticks, int speed);
void turnRight(int degrees, int speed);
void turnLeft(int degrees, int speed);
void armUp;
void armDown;
void clawOpen;
void clawClose;
void followLine;

int main()
{
	create_connect();
	driveForward(1000, 250);
	driveBackward(1000, 250);
	turnRight(90, 250);
	turnLeft(90, 250);
	create_disconnect();
	return 0;
}

void driveForward(int ticks, int speed)
{
	set_create_distance(0);
	while(abs(get_create_distance()) < ticks)
    {
		create_drive_direct(speed, speed);
		msleep(10);
	}
	create_stop();
}

void driveBackward(int ticks, int speed)
{
	set_create_distance(0);
	while(abs(get_create_distance()) < ticks)
	{
		create_drive_direct(-speed, -speed);
		msleep(10);
	}
	create_stop();
}

void turnRight(int degrees, int speed)
{
	set_create_total_angle(0);
	while(abs(get_create_total_angle()) < degrees)
	{
		create_drive_direct(speed, -speed);
		msleep(10);
	}
	create_stop();
}

void turnLeft(int degrees, int speed)
{
	set_create_total_angle(0);
	while(abs(get_create_total_angle()) < degrees)
	{
		create_drive_direct(-speed, speed);
		msleep(10);
	}
	create_stop();
}
