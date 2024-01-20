#include <stdio.h>

int main(){
	char ad[100];
	char soyad[100];
	printf("Lutfen adini giriniz: ");
	scanf("%s", &ad);
	
	printf("Lutfen soyadinizi giriniz: ");
	scanf("%s", &soyad);
	
	printf("Ad: %s Soyad: %s",ad,soyad);
}
