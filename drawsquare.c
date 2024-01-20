#include <stdio.h>

int main(){
	int a,i,j;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &a);
	
	for(i=0; i<a; i++){
		if(!(i==0 || i==a-1)){
			printf("*");
			for(j=0; j<a-2; j++){
				printf(" ");
			}
			printf("*");
		}
		for(j=0; j<a; j++){
			
			if(!(i==0 || i==a-1)){
				continue;
			}
			printf("*");
			
		}
		printf("\n");
	}
}
