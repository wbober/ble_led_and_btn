#ifndef LBTS_H
#define LBTS_H

#include <device.h>
#include <drivers/gpio.h>

/* Custom Service Variables */
#define BT_UUID_CUSTOM_SERVICE_VAL \
	BT_UUID_128_ENCODE(0x12345678, 0x1234, 0x5678, 0x1234, 0x56789abcdef0)


int lbts_init(void);
int lbts_indicate(int state);

#endif