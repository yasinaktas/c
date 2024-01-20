#include <stdio.h>

int ebob (int a, int b);
int ebob (int a, int b){
	int ebob=0;
	int n=1;
	
	for(n=1; n <=a && n <=b; n++){
		if(a%n==0 && b%n==0){
			ebob = n;
		}
	}
	return ebob;
}


int main(){
	int x1,x2;
	printf("Lutfen birinci sayiyi giriniz: ");
	scanf("%d", &x1);
	
	printf("Lutfen ikinci sayiyi giriniz: ");
	scanf("%d", &x2);
	
	printf("Girilen sayilarin ekoku: %d", (x1*x2)/ebob(x1,x2));
}
