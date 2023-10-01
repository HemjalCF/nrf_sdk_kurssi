# nrf_sdk_kurssi

### Cheat sheet for nrf sdk:

sleep: k_msleep(ms)

To interact with the GPIO peripheral,USE API <zephyr/drivers/gpio.h>

Get the GPIO pin INIT and READY:

struct gpio_dt_spec led = GPIO_DT_SPEC_GET(DT_NODELABEL(led0), gpios);
if (!device_is_ready(led.port)) {
	return;
}



Configure GPIO PIN: 
gpio_pin_configure_dt(&led, GPIO_OUTPUT);
SET PIN LOW:
gpio_pin_configure_dt(&led, GPIO_OUTPUT | GPIO_ACTIVE_LOW);

OR gpio_pin_set_dt(&led, 1);

OR Toogle it: gpio_pin_toggle_dt(&led);

OR READ:
uint8_t val = gpio_pin_get_dt(&led);

SET INT MODE:
gpio_pin_interrupt_configure_dt(&button,GPIO_INT_EDGE_TO_ACTIVE); 

Get the UART node ready:

const struct device *dev;
dev = DEVICE_DT_GET(DT_NODELABEL(uart0));

if (!device_is_ready(dev)) {
    return;
}

### I2C:

set config: CONFIG_I2C=y
call driver: #include <zephyr/drivers/i2c.h>