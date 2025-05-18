/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   float peso;
    float altura;
    printf("ingrese el peso en kg:\n");
    scanf("%f",&peso);
    printf("ingrese la altura en metros:\n");
    scanf("%f",&altura);
    float idc=peso/(altura*altura);
    
    if(idc<18.5){                                      //bajo peso
        printf("Su indice de masa corporal es: %.2f",idc);
        
    }   
     if(idc<24.9 && idc>18.5 ){                      //normal                     
        printf("Su indice de masa corporal es: %.2f",idc);
         
     }
     if(idc<29.9 && idc>25){                        //sobrepeso
        printf("Su indice de masa corporal es: %.2f",idc);
         
     }
     if(idc>=30){                                   //obecidad
        printf("Su indice de masa corporal es: %.2f",idc);
    }
    return 0;
}