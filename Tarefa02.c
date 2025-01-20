#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/bootrom.h"

const uint Buzzer = 21;
const uint led_G = 11;
const uint led_B = 12;
const uint led_R = 13;
#define Tempo_led 1000

//acender e apagar led verde
void acionar_led_verde() { 
    gpio_put(led_R, 0);
    gpio_put(led_B, 0);
    gpio_put(led_G, 1);
    sleep_ms(Tempo_led);
    gpio_put(led_G, 0);
}
//acender e apagar led vermelho
void acionar_led_vermelho() { 
    gpio_put(led_R, 1);
    gpio_put(led_B, 0);
    gpio_put(led_G, 0);
    sleep_ms(Tempo_led);
    gpio_put(led_R, 0);
}
//acender e apagar led azul
void acionar_led_azul() { 
    gpio_put(led_R, 0);
    gpio_put(led_B, 1);
    gpio_put(led_G, 0);
    sleep_ms(Tempo_led);
    gpio_put(led_B, 0);
}
//acender e apagar todos os leds
void acionar_todos() { 
    gpio_put(led_R, 1);
    gpio_put(led_B, 1);
    gpio_put(led_G, 1);
    sleep_ms(Tempo_led);
    gpio_put(led_R, 0);
    gpio_put(led_B, 0);
    gpio_put(led_G, 0);
}
//ativar o buzzer por 2 segundos
void acionar_buzzer()
{
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
}
// inicializa bootsel
void boot_mode(){
        printf("Entrando em modo bootsel em 3s!!\n");
        //pisca led vermelho
        for( int i=0;i<3;i++){
            gpio_put(led_R, 1);
            sleep_ms(Tempo_led);
            gpio_put(led_R, 0);
            sleep_ms(Tempo_led);
        }
        reset_usb_boot(0, 0);
    }

int main(){
    //inicialização das portas com os pinos e o buzzer
stdio_init_all();  
 gpio_init(led_G);
 gpio_set_dir(led_G, GPIO_OUT);
 gpio_init(led_B);
 gpio_set_dir(led_B, GPIO_OUT);
 gpio_init(led_R);
 gpio_set_dir(led_R, GPIO_OUT);
 gpio_init(Buzzer);
 gpio_set_dir(Buzzer, GPIO_OUT);

while(true){
 
 // rotina dos leds e do buzzer
acionar_led_verde();
acionar_led_azul();
acionar_led_vermelho();
acionar_todos();
acionar_buzzer();
boot_mode();
}

}