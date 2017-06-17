#include <stdio.h>
#include <pigpio.h>

#define LEDAZUL 02
#define LEDVERDE 03

int main (int argc, char *argv[])
{
	if (gpioInitialise()<0)  return -1;
	gpioSetMode(LEDVERDE,PI_OUTPUT);
	gpioSetMode(LEDAZUL,PI_OUTPUT);
	gpioWrite(LEDAZUL,1);
	gpioWrite(LEDVERDE,0);
	sleep(5);
	gpioTerminate();
	return 0;
}
