/*Crystian Alonso Chavez Jimenez,1AV6 ejercicio 16*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main (void){
    int a=9,i;
    for (i=0;i<100;i++){
            if((a==a%4)||(i%2)==0){
                printf("%d %d\n",a,i);
            }
    }

}
