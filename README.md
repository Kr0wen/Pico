#include <iostream>
#include "pico/stdlib.h"

int main()
{
    stdio_init_all();
    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while(true)
    {

        gpio_put(LED_PIN,1);
        std::cout<<"LED IN"<<std::endl;
        sleep_ms(1000);
        gpio_put(LED_PIN, 0);
        std::cout<<"LED OFF"<<std::endl;
        sleep_ms(1000);
    }
}
