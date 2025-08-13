/******************************************************************************

Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre
(fica verde), os veículos que nele estavam parados tendem a encontrar os próximos
semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam
abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre
eles. Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade
permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para
percorrer essa distância. Para que encontre o próximo semáforo aberto, este deve abrir
um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um
algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes
informações:
a. a distância desde o semáforo anterior
b. a velocidade permitida da via
c. a aceleração típica dos carros

v = v₀ + at
t=v−v₀/a
s(t) = s₀ + v₀t + (at²)/2
S = S₀ + vt
t=S-S₀/v


*******************************************************************************/
#include <stdio.h>


float calcular_tempo_ate_velocidade_maxima(float velocidade, float velocidade_inicial, float aceleracao){
    return (velocidade-velocidade_inicial)/aceleracao;
}

float calcular_distancia_velocidade_maxima(float posicao_inicial, float tempo, float velocidade_inicial, float aceleracao){
    return posicao_inicial+velocidade_inicial*tempo+(aceleracao*(tempo*tempo))/2;
}

float calcular_tempo_total(float posicao_inicial, float posicao_final, float velocidade){
    return (posicao_final-posicao_inicial)/velocidade;
}

int main()
{
    float distancia[2], velocidade, aceleracao, tempo[2];
    printf("Informe os seguintes valores\n");
    printf("distancia: ");
    scanf("%f",&distancia[1]);
    printf("velocidade: ");
    scanf("%f",&velocidade);
    printf("aceleracao: ");
    scanf("%f",&aceleracao);
    tempo[0]=calcular_tempo_ate_velocidade_maxima(velocidade, 0, aceleracao);
    distancia[0]=calcular_distancia_velocidade_maxima(0, tempo[0], 0, aceleracao);
    tempo[1]=calcular_tempo_total(distancia[0], distancia[1], velocidade);
    printf("O semáforo deve abrir em %.1f segundos.", tempo[0]+tempo[1]);
    return 0;
}
