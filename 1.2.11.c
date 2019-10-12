/*Crystian Alonso Chavez Jimenez,1AV6 ejercicio 11*/
#include<stdio.h>
#include<conio.h>
int main(void){
float n,max=0,min=(n*n),i,c=0,m;
printf("Maximo,minimo y media de una lista de 10 numeros.\n");
for(i=1;i<=10;i++){
  printf("digita el valor\t");
  scanf("%f",&n);
  if(n>max){
  max=n;
  }
  if(n<min){
  min=n;
  }
  c=c+n;
 }
m=c/10;
printf("El numero mayor es %f y el menor es %f.\nLa media es: %f.",max,min,m);
}
