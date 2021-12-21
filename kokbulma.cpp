// ax^2+bx+c denkleminin köklerini bulan program

#include<stdio.h>
#include<math.h>
main(){
	float a,b,c,x1,x2,delta;
	printf("a,b,c degerlerini girin: ");
	scanf("%f %f %f",&a,&b,&c);
	delta=b*b-4.0*a*c;
	if(delta>0){
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("x1=%f\n",x1);
		printf("x2=%f",x2);
	}
	else if(delta<0){
		printf("gercel kok yoktur!");
	}
	else{
		x1=-b/(2*a);
		printf("kokler esit.\n");
		printf("x1=x2=%f",x1);
	}
}
