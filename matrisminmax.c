#include <stdio.h>

int main(){
	
	int min,max,i,j;
	int m,n;
	
	printf("Matris MxN boyutundadir. M degerini giriniz: ");
	scanf("%d", &m);
	
	printf("Matris MxN boyutundadir. N degerini giriniz: ");
	scanf("%d", &n);
	int matris[m][n];
	
	for(i=0; i<m; i++){
		
		for(j=0; j<n; j++){
			
			printf("%d. Matrisin %d. elemanini giriniz: ", i+1, j+1);
			scanf("%d", &matris[i][j]);
			
		}
	}
	
	min=matris[0][0];
	max=matris[0][0];
	for(i=0; i<m; i++){
		
		for(j=0; j<n; j++){
			
			if(min > matris[i][j]){
				min=matris[i][j];
			}
			
		}
	}
	
	for(i=0; i<m; i++){
		
		for(j=0; j<n; j++){
			
			if(max < matris[i][j]){
				max=matris[i][j];
			}
			
		}
	}
	
	printf("En buyuk deger: %d, en kucuk deger: %d", max,min);
}
