#include <stdio.h>
#include "sensor.h"
#include "led.h"

// Define temperature thresholds
#define TEMP_THRESHOLD_HIGH 30
#define TEMP_THRESHOLD_LOW  10

int main(void) {
    // Initialize sensor and LED
    init_sensor();
    init_led();

    // Infinite loop (typical in embedded systems)
    while (1) {
        // Read the temperature from the sensor
        float temperature = read_temperature();

        // Display the temperature value
        printf("Current Temperature: %.2f°C\n", temperature);

        // Control the LED based on temperature thresholds
        if (temperature > TEMP_THRESHOLD_HIGH) {
            turn_on_led();
            printf("LED is ON (Temperature above threshold).\n");
        } else if (temperature < TEMP_THRESHOLD_LOW) {
            turn_off_led();
            printf("LED is OFF (Temperature below threshold).\n");
        } else {
            printf("Temperature is within normal range.\n");
        }

        // Add a delay (e.g., to simulate sampling period)
        for (volatile int i = 0; i < 1000000; i++);  // Simulated delay
    }

    return 0;
}
