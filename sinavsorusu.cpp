#include<stdio.h>

int main(){
	
	int i,j,k,*ptrj,*ptrk;
	ptrj=&j;
	ptrk=&k;
	
	for(i=0;i<5;i++){
		for(*ptrj=i+1;j<3;j++){
			for(*ptrk=*ptrj+1;k<5;k++){
				if(*ptrj<*ptrk)
					printf("%2d\n",*ptrk);
				printf("\n");
			}
		}
	}
}
