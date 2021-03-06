#include "fw/src/mgos.h"
bool mgos_MAX17043_init(void);   // Required - initialisation function

#ifndef CS_MOS_LIBS_ARDUINOLIB_MAX17043_SRC_MGOS_ARDUINO_BME280_H_
#define CS_MOS_LIBS_ARDUINOLIB_MAX17043_SRC_MGOS_ARDUINO_BME280_H_

#include "MAX17043.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "Arduino.h"

#ifndef _MAX17043_H
#define _MAX17043_H

#define MAX17043_ADDRESS	0x36

#define VCELL_REGISTER		0x02
#define SOC_REGISTER		0x04
#define MODE_REGISTER		0x06
#define VERSION_REGISTER	0x08
#define CONFIG_REGISTER		0x0C
#define COMMAND_REGISTER	0xFE


MAX17043 *mgos_MAX17043_create();

#endif
