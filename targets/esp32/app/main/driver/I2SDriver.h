#ifndef EUPH_I2SDRIVER_H
#define EUPH_I2SDRIVER_H
#include "driver/i2s.h"
#include <driver/gpio.h>
#include <memory>
#include "BerryBind.h"

void i2sInstall(int sampleRate, int bitsPerSample, int channelFormatInt, int commFormat, int mclk);
void i2sSetPins(int mck, int bck, int ws, int dataOut);
void InternalDACInstall(int channelFormatInt, int sampleRate);

void i2sDelete();

void i2sEnableMCLK();

void exportI2SDriver(std::shared_ptr<berry::VmState> berry);

#endif
