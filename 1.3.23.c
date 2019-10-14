/*Crystian Alonso Chavez Jimenez,1AV6 ejercicio 23*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int cfor(int i,int c,int a);
int cwhile(int i,int c,int a);
int cdowhile(int i,int c,int a);
int i,c=0,a=2;
int main (void){
    printf("Sumatoria de i+3, donde i inicia en 2.\n");
    int d= cfor(i,c,a);
    printf("El resultado de la suma es:%d\n",d);
    int e= cwhile(i,c,a);
    printf("El resultado de la suma es:%d\n",e);
    int f= cdowhile(i,c,a);
    printf("El resultado de la suma es:%d\n",f);


}
int cfor(int i,int c,int a){
    for(i=0;i<100;i++){
        printf("%d + %d =",c,a);
        c=c+a;
        a+=3;
        printf("\t %d \n",c);
    }
    return c;
}
int cwhile(int i,int c,int a){
    i=0;
    while(i<100){
        printf("%d + %d =",c,a);
        c=c+a;
        a+=3;
        printf("\t %d \n",c);
        i++;
    }
    return c;
}
int cdowhile(int i,int c,int a){
    i=0;
    do{
      printf("%d + %d =",c,a);
        c=c+a;
        a+=3;
        printf("\t %d \n",c);
        i++;
    }while(i<100);
    return c;
}
