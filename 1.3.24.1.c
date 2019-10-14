/*Crystian Alonso Chavez Jimenez,1AV6 ejercicio 24.1*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main (void){
    int op;
    printf("aigne un valor (1-4)\t"); scanf("%d",&op);
    switch(op)
    {
    case 1:
        printf("\ncalor");
        break;
    case 2:
        printf("\ntemplado");
        break;
    case 3:
        printf("\nfrio");
        break;
    case 4 :
        printf("\nfuera de rango");
        break;
    default:
        printf("\nsi te estan diciendo del uno al cuatro por que tecleas otra cosa?");
        break;
    }
}
