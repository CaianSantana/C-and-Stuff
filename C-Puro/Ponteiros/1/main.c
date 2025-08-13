/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c;
    int *p, *q;
    scanf("%d", &a);
    scanf("%d", &b);
    p = &a;
    q = &b;
    c = *p + *q;
    printf("%d", c);

    return 0;
}