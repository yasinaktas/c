#include <stdio.h>

int main(){
	
	int x,y,m,n;

	printf("Matris MxN boyutunda olacaktir. M degerini giriniz: ");
	scanf("%d", &m);
	
	printf("Matris MxN boyutunda olacaktir. N degerini giriniz: ");
	scanf("%d", &n);
	
	int matris1[m][n];
	int matris2[m][n];
	int matris3[m][n];
	
	for(x=0; x<m; x++){
		
		for(y=0; y<n; y++){
			
			printf("Lutfen 1. Matrisin %d. satirinin %d. sutununu giriniz: ", x+1, y+1);
			scanf("%d", &matris1[x][y]);
		}
		
		
	}
	
	for(x=0; x<m; x++){
		
		for(y=0; y<n; y++){
			
			printf("Lutfen 2. Matrisin %d. satirinin %d. sutununu giriniz: ", x+1,y+1);
			scanf("%d", &matris2[x][y]);
		}
		
		
	}
	
	for(x=0; x<m; x++){
		
		for(y=0; y<n; y++){
			matris3[x][y]= matris1[x][y] + matris2[x][y];
		}
		
		
	}
	
	for(x=0; x<m; x++){
		
		for(y=0; y<n; y++){
			
			printf("%3d", matris3[x][y]);
		}
		
		printf("\n");
	}
}
