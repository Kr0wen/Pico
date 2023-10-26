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

        gpio_put(LED_PIN,1); //set high : allow current to flow 
        std::cout<<"LED IN"<<std::endl;
        sleep_ms(1000);
        gpio_put(LED_PIN, 0); // set low : do not allow current to flow
        std::cout<<"LED OFF"<<std::endl;
        sleep_ms(1000);
    }
}
