#include<stdio.h>

int main(){
	
	int matris[3][4];
	int i,j;
	int carpim=1;
	int kare=0;
	int toplam=0;
	
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("[%d][%d] matris :",i+1,j+1);
			scanf("%d",&matris[i][j]);
			
		}
	}
	
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			
			printf("%d ",matris[i][j]);

		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			
			carpim=carpim*(matris[i][j]);
			
		}
		if(carpim<0){
			for(j=0;j<4;j++){
				toplam=toplam+matris[i][j];
			}
			printf("toplam: %d\n",toplam);
			toplam=0;
			}
		
		else{
			for(j=0;j<4;j++){
				
				kare=kare+matris[i][j]*matris[i][j];
			}
			printf("kare :%d\n",kare);
			kare=0;
		}
		carpim=1;
	}
	
	
	
}
