#include <stdio.h>

int ekok(int a, int b);
int ekok(int a, int b){
	
	int i,c,ekok;
	
	if(a>b){
		c=a;
	}
	else if( a<b){
		c=b;
	}
	else{
		c=a;
	}
	
	for(i=c; i<=a*b; i++){
		if(i%a==0 && i%b==0){
			ekok = i;
			break;
		}
	}
	return ekok;
}

int main(){
	
	int x,y;
	
	printf("Ekok'u alinacak sayilari giriniz: ");
	scanf("%d %d", &x, &y);
	
	printf("Sayilarin ekoku; %d", ekok(x,y));
	
}
