/*Crystian Alonso Chavez Jimenez,1AV6 ejercicio 10*/
#include<stdio.h>
#include<conio.h>
int main (void){
    int l,c,d;
    printf("Pon los litros gatados de agua\t"); scanf("%d",&l);
        if(l>=0&&l<50){
        printf("la cuota aciende 0 pesos");
        }
        else{
        if(l>=50 && l<=200){
        d=l-50;
        c=d*10;
        printf("la cuota aciende %d pesos",c);
        }
        else{
        if(l>200){
        d=l-200;
        c=(d*20)+1500;
        printf("la cuota aciende %d pesos",c);
        }
        }
        }
    if(c<200){
       printf("\nla cuota minima real es de 200 pesos");
    }
    else{
        printf("\nla cuota se respeta en %d pesos",c);
    }
 return 0;
}
