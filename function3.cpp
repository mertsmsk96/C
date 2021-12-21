#include<stdio.h>

int usHesapla(int sayi,int us){
	int sonuc=1;
	for(int i=0;i<us;i++){
		sonuc*=sayi;
	}
	return sonuc;
}


int main(){
	
	int sayi,us;
	printf("sayi:"),
	scanf("%d",&sayi);
	printf("us:");
	scanf("%d",&us);
	printf("%d sayisinin %d. kuvveti = %d",sayi,us,usHesapla(sayi,us));
	
}
