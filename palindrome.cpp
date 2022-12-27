#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	
	char kelime[100];
	printf("\n kelime giriniz : ");
	gets(kelime);
	int n;
	printf("\nKacinci harften itibaren kontrol edilecek");
	scanf("%d",&n);
	int uzunluk;
	uzunluk=strlen(kelime);
	int baslangic=n-1;
	int son=uzunluk-n;
	char tersten[100];
	int index=0;
	
	while(kelime[index]!='\0'){
		tersten[index]=kelime[uzunluk-index-1];
		index++;
	}
	printf("\n uzunluk:%d",uzunluk);
	printf("\n %s  ve tersi :%s",kelime,tersten);
	
	
	bool uygunmu=true;
	for(int i=baslangic;i<=son;i++){
		if(kelime[i]!=tersten[i]){
			uygunmu=false;
			break;
		}
	}
	
	
	if(uygunmu==true){
		
		printf("\n polindrom saglanir.");
		
	}
	else{
	printf("\n polindrom saglanmaz.");
	}
	
	

	
	
	
	
}
