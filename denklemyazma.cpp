#include <stdio.h>

int main(){
	
	//2.dereceden denklem olu�tur
	
	int sayix,sayiy,sayiz;
	
	
	printf("x katsay�s�:");
	scanf("%d",&sayix);
	printf("y katsay�s�:");
	scanf("%d",&sayiy);
	printf("z katsay�s�:");
	scanf("%d",&sayiz);
		
	char denklem[]={sayix,"x","+",sayiy,"+","sayiz"};
	printf("denklem: %s",denklem);
