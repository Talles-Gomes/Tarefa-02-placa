#include <stdio.h>
#include "pico/stdlib.h"


const uint Buzzer = 21;
const uint led_G = 11;
const uint led_B = 12;
const uint led_R = 13;
#define Tempo_led 500

// define os pinos do teclado com as portas GPIO
uint columns[4] = {4, 3, 2, 14};    // colunas (C1 a C4)
uint rows [4] = {8, 7, 6, 5};    // linhas (R1 a R4)

// Mapa das teclas 
char KEY_MAP[16] = {
    '1', '2', '3', 'A',
    '4', '5', '6', 'B',
    '7', '8', '9', 'C',
    '*', '0', '#', 'D'
};

// Inicializa os GPIOs 
void init_gpio() {
    for (int i = 0; i < 4; i++) {
        gpio_init(rows[i]); // Inicializa GPIO da linha
        gpio_set_dir(rows[i], GPIO_OUT);  // Configura como saída
        gpio_put(rows[i], 1);  // Define estado inicial como alto
    }

    for (int i = 0; i < 4; i++) {
        gpio_init(columns[i]); // Inicializa GPIO da coluna
        gpio_set_dir(columns[i], GPIO_IN); // Configura como entrada
        gpio_pull_up(columns[i]); // Ativa resistor pull-up
    }
}

//acender e apagar led verde

void acionar_led_verde() { 
    gpio_put(led_R, 0);
    gpio_put(led_B, 0);
    gpio_put(led_G, 1);
    sleep_ms(Tempo_led);
    gpio_put(led_G, 0);
}

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