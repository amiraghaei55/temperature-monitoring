#include "sensor.h"
#include <stdlib.h>

// Simulating initialization of the sensor
void init_sensor(void) {
    // Here you could initialize actual hardware, but we simulate it
}

// Simulating a temperature sensor reading
float read_temperature(void) {
    // Return a random temperature between 0 and 40 for simulation
    return (float)(rand() % 4000) / 100;
}
