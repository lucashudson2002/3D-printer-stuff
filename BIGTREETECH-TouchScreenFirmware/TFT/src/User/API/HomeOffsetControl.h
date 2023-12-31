#ifndef _HOME_OFFSET_CONTROL_H_
#define _HOME_OFFSET_CONTROL_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>

// Enable home offset
void homeOffsetEnable(float shim);

// Disable home offset
void homeOffsetDisable(void);

// Get home offset status
bool homeOffsetGetStatus(void);

// Set Z offset value
float homeOffsetSetValue(float value);

// Get current Z offset value
float homeOffsetGetValue(void);

// Reset Z offset value to default value
float homeOffsetResetValue(void);

// Update Z offset value
float homeOffsetUpdateValue(float unit);

#ifdef __cplusplus
}
#endif

#endif
