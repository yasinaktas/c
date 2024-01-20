#include <stdio.h>

int main(){
	int a,n,sr;
	sr=0;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &a);
	
	for(n=1; n<=a; n++){
		if(n*n==a){
			printf("Karekok = %d", n);
			break;
		}
		sr=n;
	}
	if(sr==a){
		printf("Girilen sayi tam kare degil");
	}
}
