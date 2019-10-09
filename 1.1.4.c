/*Crystian Alonso Chavez Jimenez,1AV6 ejercicio 4*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main (void){
float h,pr,e;
printf("cual es tu estatura \ndigitelo en centimetro \t"); scanf("%f",&h);
printf("\ncual es tu edad  \t"); scanf("%f",&e);
pr=((h-100)+(e/100))*.9;
printf("\n tu peso recomendado es alrededor de %f  ",pr);
}
