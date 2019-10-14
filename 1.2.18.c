#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main (void){
int i=2,n,s=0;
printf("Suma de cada tercer numero cuando i=2.\n");
for(n=1;n<100;n++){
 printf("%d+%d=",s,i);
 s=s+i;
 i+=3;
 printf("%d\n",s);
 }
printf("El resultado de la suma es:%d\n",s);
}
