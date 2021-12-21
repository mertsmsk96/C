#include<stdio.h>

struct calisanBilgi{
	char isim[20];
	int maas;
};

struct calisanBilgi maasOrt(struct calisanBilgi para[3]){
	int ort;
	int toplam=0;
		
	for(int i=0;i<3;i++){
		toplam += para[i].maas;	
	}
	ort=toplam/3;
	return ort;
	
		
}

int main(){
	struct calisanBilgi calisan[3];
	int i;
	for(i=0;i<3;i++){
		printf("%d. calisanin adi:",i+1);
		scanf("%s",&calisan[i].isim);
		printf("maasi:");
		scanf("%d",&calisan[i].maas);
	}
	int ortalama;
	ortalama=maasOrt(calisan[3]);
	
	printf("ortalama=%d",ortalama);
	
}
