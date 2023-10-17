#include "pico/stdlib.h"

int main(){
    gpio_init(25);
    gpio_set_dir(25,GPIO_OUT);

    while (1)
    {
        /* code */
    }
    
}