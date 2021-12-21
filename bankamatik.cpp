#include<stdio.h>

int main(){
	
	double bakiye = 1500;
	int secim;
	double yatirilan,cekilen;
	double yeniBakiye;
	
	printf("1-Bakiye sorma\n2-Para cekme\n3-Para yatirma\nHangi islemi yapmak istersiniz?: ");
	scanf("%d",&secim);
	
	switch(secim){
		
		case 1:
			printf("Bakiyeniz: %.2lf",bakiye);
			break;
		
		case 2:
			printf("Ne kadar para cekeceksiniz?:");
			scanf("%lf",&cekilen);
			if(cekilen>bakiye)
				printf("Yetersiz bakiye!");
			else{
				yeniBakiye=bakiye-cekilen;
				printf("Yeni bakiyeniz: %.2lf",yeniBakiye);
			}
			break;
			
		case 3:
			printf("Yatirmak istediginiz miktar: ");
			scanf("%lf",&yatirilan);
			yeniBakiye=bakiye+yatirilan;
			printf("Yeni bakiyeniz:%.2lf ",yeniBakiye);
			break;
		
		default:
			printf("Hatali islem!!!\nCikiliyor...");
	}
}
