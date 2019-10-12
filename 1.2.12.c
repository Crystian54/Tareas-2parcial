/*Crystian Alonso Chavez Jimenez,1AV6 ejercicio 12*/
#include<stdio.h>
#include<conio.h>
int main(void){
    int n,i,j;
    printf("Dame el numero a llegar en la piramide\t"); scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
