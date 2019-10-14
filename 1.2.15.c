/*Crystian Alonso Chavez Jimenez,1AV6 ejercicio 15*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main (void){
    int n,i;
    float s,sf=0;
    printf("vamos a realizar la sumatoria prpuesta\n");
    printf("sumatoria definida entre i=1, hasta n %cdefine el valor de n%c",40,41);
    printf("\n %c i%c +1%c\n  ______\n     i\n n= ",40,253,41); scanf("%d",&n);
    while(n==0){
			printf("b no puede ser 0 dame otro valor de b \n"); scanf("%d",&n);
			}
    for(i=1;i<(n+1);i++){
       s=(pow(i,2)+1)/i;
       sf=sf+s;
    }
       printf("El resultado de la sumatoria es:%.2f",sf);

}
