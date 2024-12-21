#include <stdio.h>
#include <string.h>

int main(){
	char password[20] = "123789";
	char nguoinhap[20];
	
	printf("nhap mat khau: ");
	scanf("%s", nguoinhap);
	
    if (strcmp(password, nguoinhap) == 0) {
        printf("Mat khau dung!\n");
    } else {
        printf("Sai mat khau!\n");
    }
    return 0;
}
