/******************************************************************************

Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e
calcular a altura do prédio

*******************************************************************************/
#include <stdio.h>

int main()
{
    float altura_pessoa, altura_predio, sombra_pessoa, sombra_predio;
    printf("Digite os seguintes dados: seu tamanho, o tamanho de sua sombra e o tamanho da sombra do prédio: \n");
    scanf("%f", &altura_pessoa);
    scanf("%f", &sombra_pessoa);
    scanf("%f", &sombra_predio);
    
    altura_predio=(altura_pessoa/sombra_pessoa)*sombra_predio;
    printf("Altura do prédio: %.1f",altura_predio);

    return 0;
}
