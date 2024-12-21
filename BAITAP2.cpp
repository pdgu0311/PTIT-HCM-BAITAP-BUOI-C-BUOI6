#include <stdio.h>

int main(){
	int n,i,number;
	int sole = 0;
	int sochan = 0;
	
	printf("vui long nhap cac so nguyen ");
	scanf("%d", &n);
	
	printf("nhap %d so nguyen: \n", n);
	for(i = 0; i < n; i++){
		scanf("%d", &number);
		
		if (number % 2 == 0){
			sochan++;
		} else {
			sole++;
		}
	}
		printf("cac so chan la: %d \n",sochan);
		printf("cac so le la: %d ",sole);
	
	return 0;
}
