#include <stdio.h>
#include <stdbool.h>
#include "freertos/FreeRTOS.h" // Necessário para o FreeRTOS
#include "freertos/task.h"     // Necessário para vTaskDelay

// A função principal do seu aplicativo deve ser app_main
void app_main(void) {
    while (true) {
        // Imprime o tamanho de cada tipo de dado
        // Dica: Adicione '\n' para quebrar a linha e use '%zu' para sizeof, que é o correto.
        printf("Size of char: %zu\n", sizeof(char));
        printf("Size of short: %zu\n", sizeof(short));
        printf("Size of int: %zu\n", sizeof(int));
        printf("Size of long: %zu\n", sizeof(long));
        printf("Size of long long: %zu\n", sizeof(long long));
        printf("Size of float: %zu\n", sizeof(float));
        printf("Size of double: %zu\n", sizeof(double));
        printf("----------------------------------\n");

        // Adiciona um delay de 2 segundos para não sobrecarregar o processador
        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }
}