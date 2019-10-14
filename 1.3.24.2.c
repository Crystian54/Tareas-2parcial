/*Crystian Alonso Chavez Jimenez,1AV6 ejercicio 24.2*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
int conv(char op,int a);
char op;
int a;
int main (void){
    system("color 70");
    printf("dame una letra entre estas\n(V,v,A,a,R,r )\t"); scanf("%c",&op);
    int a1=conv(op,a);
    switch(a1)
    {
    case 1:
        system("color 40");
        printf("\nRojo");
        break;
    case 2:
        system("color 20");
        printf("\nVerde");
        break;
    case 3:
        system("color 10");
        printf("\nAzul");
        break;
    default:
        system("color 0F");
        printf("\n NEGRO");
        break;
    }
}
int conv(char op,int a){
    if(op=='A'||op=='a'){
        a=3;
    }
    else{
         if(op=='V'||op=='v'){
                a=2;
         }
         else {
            if(op=='R'||op=='r'){
                    a=1;
            }
         else{
            a=4;
         }
         }
    }
    return a;
}
