#include "ch.h"
#include "hal.h"

int main(void)
{
	halInit();
	chSysInit();

	palSetPadMode(GPIOD, 12, PAL_MODE_OUTPUT_PUSHPULL);
	while(1)
	{
		palSetPad(GPIOD, 12);
		chThdSleepMilliseconds(100);
		palClearPad(GPIOD, 12);
		chThdSleepMilliseconds(50);
	}
}
