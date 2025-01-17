#include <stdio.h>
#include "pico/stdlib.h"


const uint Buzzer = 21;
const uint led_G = 11;
const uint led_B = 12;
const uint led_R = 13;
#define Tempo_led = 500;

//acender e apagar led verde

void controle_led_verde(bool acender) { 
    gpio_put(led_R, 0);
    gpio_put(led_G, acender ? 1 : 0);
    gpio_put(led_B, 0); 
}

//acender e apagar led vermelho



//acender e apagar led azul



//acender e apagar todos os leds



//ativar o buzzer por 2 segundos



int main(){
    //inicialização das portas com os pinos e o buzzer


  

while(true){
 
 // rotina dos leds e do buzzer


}


}