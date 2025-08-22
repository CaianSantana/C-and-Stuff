

/*

uint32_t *GPIO_ENABLE_REG = (uint32_t*)0x3FF44020;
uint32_t *GPIO_FUNC2_OUT_SEL_CFG_REG = (uint32_t*)0x3FF44538;
uint32_t *GPIO_OUT_W1TS_REG = (uint32_t*)0x3FF44008;
uint32_t *GPIO_OUT_W1TC_REG = (uint32_t*)0x3FF4400C;

// habilitar o pino

*GPIO_ENABLE_REG |= (1 << 2);

// configurar o pino 2 como simple GPIO Output

*GPIO_FUNC2_OUT_SEL_CFG_REG = 0x100;

// para ligar o led:

*GPIO_OUT_W1TS_REG = 1<<2;

// para desligar o led:

*GPIO_OUT_W1TS_REG = 1<<2;

*/

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp32_gpio_regs.h"
#include <stdint.h>

GPIO_DEV_t                            * const GPIO    = (GPIO_DEV_t*)0x3FF44000;
GPIO_FUNCn_OUT_SEL_CFG_REG_t volatile * const FUNC2   = (GPIO_FUNCn_OUT_SEL_CFG_REG_t*)0x3FF44538;


void setup();
void piscar_led();
void pisca_n_espera(uint8_t);


void app_main(void)
{
    setup();
    while(1){
        pisca_n_espera(1);
        pisca_n_espera(3);
}
    }
       

void setup(){
    GPIO->ENABLE_W1TS.pin.PIN_2 = 1;
    FUNC2->GPIO_FUNCn_OUT_SEL = 0x100;
}

void piscar_led(){
    GPIO->OUT_W1TS.pin.GPIO_OUT_DATA_2 = 1;
    vTaskDelay(250 / portTICK_PERIOD_MS);
    GPIO->OUT_W1TC.pin.GPIO_OUT_DATA_2 = 1;
    vTaskDelay(250 / portTICK_PERIOD_MS);
}

void pisca_n_espera(uint8_t n){
    for(uint8_t i = 0; i<n; i++)
        piscar_led();
     vTaskDelay(1000 / portTICK_PERIOD_MS);
}