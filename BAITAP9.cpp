#include <stdio.h>

int main(){
    int a,b,c,tong;
	
	for(int number = 100; number <= 999; number++){
		a = number / 100;
		b = (number / 10) % 10;
		c = number % 10;
		
	tong = (a * a * a)+(b * b * b)+(c * c * c);
	
	if (tong == number){
		printf("%d\n", number);
	  }
	}
	
	return 0;		
}
