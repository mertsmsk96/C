#include<stdio.h>

void tekCift(int sayi){
	if(sayi%2==0)
		printf("Sayi cifttir.");
	else
		printf("Sayi tektir.");
}

int main(){
	
	int sayi;
	printf("Sayiyi girin:");
	scanf("%d",&sayi);
	tekCift(sayi);
}
