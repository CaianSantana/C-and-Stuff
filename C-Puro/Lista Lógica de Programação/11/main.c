/******************************************************************************

Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida
pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por
2 notas de provas. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int semestral, bimestrais[2], provas[2];
    for(int i=0; i<2;i++){
        printf("%dº bimestre: \n", i+1);
        for(int j=0;j<2;j++){
            printf("Digite a nota da %d prova: \n", j+1);
            scanf("%d", &provas[j]);
        }
        bimestrais[i]=(provas[0]+provas[1])/2;
    }
    semestral=(bimestrais[0]+bimestrais[1])/2;
    printf("Nota semestral: %d", semestral);

    return 0;
}
