#include <stdio.h>
#include "pico/stdlib.h"


const uint Buzzer = 10;
const uint led_G = 11;
const uint led_B = 12;
const uint led_R = 13;
#define Tempo_led = 500;

//acender e apagar led verde



//acender e apagar led vermelho



//acender e apagar led azul



//acender e apagar todos os leds



//ativar o buzzer por 2 segundos
void acionar_buzzer(){
    // tempo de acionamento do buzzer
    int time =2000;
    // executa enquanto o contador não zeroa
    while(time>0){
        //ativa o buzzer
        gpio_put(Buzzer,1);
        // fica ativo por 1 ms
        sleep_ms(1);
        // decrementa contador
        time-=1;
        //desativa o buzzer
        gpio_put(Buzzer,0);
        // fica desativado por 3 ms
        sleep_ms(3);
        // decrementa contador
        time-=3;
    }


int main(){
    //inicialização das portas com os pinos e o buzzer


  

while(true){
 
 // rotina dos leds e do buzzer


}


}