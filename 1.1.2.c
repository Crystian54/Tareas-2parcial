/*Crystian Alonso Chavez Jimenez,1AV6 ejercicio 2*/

#include<stdio.h>
#include<conio.h>
int main (void){
int n=2,m=5,a,b,c,d;
a=(n+m)==2;
b=(n>m)==!(m==5);
c=(m%n)>5;
d=((m-n)*10)%4==1;
if(a==0){
 printf("La operacion (n+m)==2 es falsa.\n");
 }
else{
printf("La operacion (n+m)==2 es verdadera.\n");
}
if(b==0){
 printf("La operacion (n>m)==!(m==5) es falsa.\n");
 }
else{
printf("La operacion (n>m)==!(m==5) es verdadera.\n");
}
if(c==0){
 printf("La operacion (el modulo de m con respecto a n)>5 es falsa.\n");
 }
else{
printf("La operacion (el modulo de m con respecto a n)>5 es verdadera.\n");
}
if(d==0){
 printf("La operacion (el modulo de (m-n)*10) con respecto a 4==1 es falsa.\n");
 }
else{
printf("La operacion (el modulo de (m-n)*10) con respecto a 4==1 es verdadera.\n");
}
}
