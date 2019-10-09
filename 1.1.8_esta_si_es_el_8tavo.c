#include<stdio.h>
#include<math.h>
int main()
{
	float n,k;
	int a,b,c,d,e,f,g,h,i,j;
     while(n!=0){
     	printf("Dame la cantidad a enlistar \t"); scanf("%f",&n);
		a=n/1000;
		n=fmod(n,1000);
		printf("\n %d billetes de $1000 ",a);
		b=n/500;
		n=fmod(n,500);
		printf("\n %d billetes de $500",b);
		c=n/200;
		n=fmod(n,200);
		printf("\n %d billetes de $200",c);
		d=n/100;
		n=fmod(n,100);
		printf("\n %d billetes de $100",d);
		e=n/50;
		n=fmod(n,500);
		printf("\n %d billetes de $50",e);
		f=n/20;
		n=fmod(n,20);
		printf("\n %d billetes de $20",f);
		g=n/10;
		n=fmod(n,10);
		printf("\n %d monedas de $10",g);
		h=n/5;
		n=fmod(n,5);
		printf("\n %d monedas de $5",h);
		i=n/2;
		n=fmod(n,2);
		printf("\n %d monedas de $2",i);
		j=n/1;
		n=fmod(n,1);
		printf("\n %d monedas de $1",j);
		k=n;
		n=fmod(n,n);
		printf("\n %.2f centavos ",k);
	}
}
