#include <stdio.h>

int main(){
	
	//2.dereceden denklem oluþtur
	
	int sayix,sayiy,sayiz;
	
	
	printf("x katsayýsý:");
	scanf("%d",&sayix);
	printf("y katsayýsý:");
	scanf("%d",&sayiy);
	printf("z katsayýsý:");
	scanf("%d",&sayiz);
		
	char denklem[]={sayix,"x","+",sayiy,"+","sayiz"};
	printf("denklem: %s",denklem);
