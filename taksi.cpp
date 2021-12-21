#include<stdio.h>

int main(){
	
	float para;
	int saat;
	char baglanti=' ';
	printf("tipi gir");
	scanf("%c",&baglanti);
	printf("saati gir :");
	scanf("%d",&saat);
	if(baglanti=='T'){
		para=saat*2;
		printf("para %d",para);
	}
	if(baglanti=='M'){
		
		para=saat*3;
		printf("para %d",para);
	
	
}
    if(baglanti=='K'){
	
		para=saat*3.5;
		printf("para :%f",para);
}}
