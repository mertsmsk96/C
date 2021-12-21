#include<stdio.h>
#include<string.h>
int main(){
	
	char isim[10];
	char sifre[5];
	char isimveri[]={"Mert"};
	char sifreveri[]={"12345"};
	printf("isminiz:");
	scanf("%s",&isim);
	printf("sifreniz:");
	scanf("%s",&sifre);
	
	if(strcmp(isim,isimveri)==0 && strcmp(sifre,sifreveri)==0){
		printf("Bilgiler dogru");
	}
	else{
		printf("Bilgiler yanlis!");
	}
	return 0;
}
