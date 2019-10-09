/*Crystian Alonso Chavez Jimenez,1AV6 ejercicio 7*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main (void){
    int n1,n2,n3;
    printf("\ndame el primer numero \t"); scanf("%d",&n1);
    printf("\ndame el segundo numero \t"); scanf("%d",&n2);
    printf("\ndame el tercer numero \t"); scanf("%d",&n3);
    if(n1>n2 && n1>n3){
        printf("\nel primer valor es mayor a los demas ");
    }
    else{
        if(n2>n3){
            printf("\nel segundo valor es mayor a los demas ");
        }
        else{
            if(n3>n1){
                 printf("\nel tercer valor es mayor a los demas ");
            }
            else{
            printf("hay dos o mas valores son iguales");
            }
        }
    }
}
