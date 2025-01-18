#include <stdio.h>
#include "pico/stdlib.h"
#include <string.h>

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


 int main(){
    stdio_init_all();
    char resposta[10];
    //inicializar o buzzer e leds apagados, e iniciar eles como apagados/desligados
    
    while (true) {
        scanf(" %s", resposta);
        if(strcmp(resposta,"green")==0){}
            //led verde
        else
            if(strcmp(resposta,"blue")==0){}
                //led azul
        else
            if(strcmp(resposta,"red")==0){}
                //led vermelho
        else
            if(strcmp(resposta,"white")==0){}
                //tres leds
        else
            if(strcmp(resposta,"buzzer")==0){}
                //apaga os leds e liga o buzzer
            

        sleep_ms(200);
    }
}
