/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
float peso; 
float altura;  

    printf("Ingrese el peso en kg: ");
    scanf("%f",&peso);
     printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);
     float idc=peso/(altura*altura);
     printf("Su índice de masa corporal es: %.2f\n\nÍndice | Condición\n-----------------------------\n<18.5 | Bajo peso\n18.5 a 24.9 | Normal\n25.0 a 29.9 | Sobrepeso\n>=30| Obesidad",idc);

    return 0;
}
