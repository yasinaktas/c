#include <stdio.h>

int main(){
	int a,n,i;
	printf("Lutfen bir sayi giriniz. ");
	scanf("%d",&a);
	for(n=0; n<a; n++){
		for(i=0; i<a-n-1; i++){
			printf(" ");
		
		}
		for(i=0; i<n*2+1;i++){
			printf("*");
		}
		printf("\n");
	}
}
