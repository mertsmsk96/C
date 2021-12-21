#include <stdio.h>
int main(){
	
	int intDegisken;
	float floatDegisken;
	double doubleDegisken;
	char charDegisken;
	
	//%d yada ld kullanýlýr.
	printf("int degiskenin degeri: %ld",sizeof(intDegisken));
	printf("\nfloat degiskenin degeri: %ld",sizeof(floatDegisken));
	printf("\ndouble degiskenin degeri: %ld",sizeof(doubleDegisken));
	printf("\nchar degiskenin degeri: %ld",sizeof(charDegisken));
	return 0;
}
