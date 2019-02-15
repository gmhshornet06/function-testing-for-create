#include <kipr/botball.h>

void drive_forward(int ticks, int speed);
void drive_backward(int ticks, int speed);
void turn_right(int degrees, int speed);
void turn_left(int degrees, int speed);
void arm_up;
void arm_down;
void claw_open;
void claw_close;
void follow_line;

int main
{
	create_connect();
	drive_forward(500, 250);
	drive_backward(500, 250);
	turn_right(90, 250);
	turn_left(90, 250);
	create_disconnect();
}

void drive_forward(int ticks, int speed)
{
	set_create_distance(0);
	while(abs(get_create_distance)) < ticks)
	{
		create_drive_direct(speed, speed);
		msleep(10);
	}
	create_stop();
}

void drive_backward(int ticks, int speed)
{
	set_create_distance(0);
	while(abs(get_create_distance)) < ticks)
	{
		create_drive_direct(-speed, -speed);
		msleep(10);
	}
	create_stop();
}

void turn_right(int degrees, int speed)
{
	set_create_total_angle(0);
	while(get_create_total_angle() < degrees)
	{
		create_drive_direct(speed, -speed);
		msleep(10);
	}
	create_stop();
}

void turn_left(int degrees, int speed)
{
	set_create_total_angle(0);
	while(get_create_total_angle() < degrees)
	{
		create_drive_direct(-speed, speed);
		msleep(10);
	}
	create_stop();
}
