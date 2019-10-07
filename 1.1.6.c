#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main (void){
    int e;
    printf("introduzca el numero entero \t"); scanf("%d",&e);
    if((e%=2)==0){
        printf("\n el numero es par");
    }
    else{
        printf("\n el numero no es par \n\n");
    }
}
