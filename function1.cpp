#include<stdio.h>

void sayiSirala(int s1,int s2){
	
	if(s1<s2){
		printf("%d < %d",s1,s2);
	}
		
	else if(s2<s1){
		printf("%d < %d",s2,s1);
	}
		
	else{
		printf("%d = %d",s1,s2);
	}
		
}

int toplama(int s1,int s2){
	int sonuc= s1+s2;
	printf("toplam= %d",sonuc);
}

int cikarma(int s1,int s2){
	int sonuc=s1-s2;
	printf("fark= %d",sonuc);
}




int main(){
	
	int sayi1;
	int sayi2;
	
	printf("sayi1: ");
	scanf("%d",&sayi1);
	printf("sayi2: ");
	scanf("%d",&sayi2);
	
	sayiSirala(sayi1,sayi2);
	printf("\n");
	toplama(sayi1,sayi2);
	printf("\n");
	cikarma(sayi1,sayi2);
}
