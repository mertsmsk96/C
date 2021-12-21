#include<stdio.h> 
#include<conio.h> 
#include<ctype.h> 
main() 
{
char kelime[10];          
FILE *dosya;     
dosya=fopen("bilgi.txt","w");     
printf("Kelimeyi giriniz :");     
scanf("%s",kelime);     
fprintf(dosya,"%s",kelime);       
dosya=fopen("deneme.txt","w");     
fgets(kelime,10,dosya);     
printf("girilen yazi=%s\n",kelime);     
for(int i=0;i<10;i++)     
{
      if(isdigit(kelime[i]))      
{
       printf("%c\n",kelime[i]);  

}     
}     
fclose(dosya); 

} 
