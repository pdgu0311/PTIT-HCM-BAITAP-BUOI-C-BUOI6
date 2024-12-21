#include <stdio.h>

int main(){
	
	int number;
	int sole;
	printf("yeu cau nguoi dung nhap vao 5 so nguyen\n");
	
	for(int i = 0; i < 5; i++){
		printf("vui long nhap so nguyen: ", i + 1);
	    scanf("%d", &number);
	    
	    if(number % 2 != 0){
	    	sole += number;
		}
	}
	
	printf("tong cac so le la: %d\n", sole);
	
	return 0;
}
