/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int troca_valores(int *a, int *b){
    int aux=*a;
    *a=*b;
    *b=aux;
}

int main()
{
    int a=2, b=3;
    printf("a: %d, b: %d\n", a, b);
    troca_valores(&a,&b);
    printf("a: %d, b: %d\n", a, b);
    return 0;
}
