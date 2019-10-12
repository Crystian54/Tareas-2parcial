/*Crystian Alonso Chavez Jimenez,1AV6 ejercicio 14*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void){
    int v;
    char n,o;
    do{
    printf("\nEscribe una letra, cual sea\t"); scanf("%c",&n);
    if('a'==n || 'A'==n || 'e'==n || 'E'==n || 'i'==n || 'I'==n || 'o'==n || 'O'==n || 'u'==n || 'U'==n){
        v=1;
    }
    else{
        v=2;
    }
    if(v==1){
        printf("\nLa letra es vocal");
    }
    else{
        printf("\nLa letra es consonante");
    }
    printf("\nDeseas llevar a acabo otra comparacion\t");
    printf("\n S-SI\n N-NO\n"); scanf("%c",&o);
    o=getch();
    }while('s'==o||'S'==o);
}
