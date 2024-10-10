#include <stdio.h>

int main(){
	int x;
	printf("masukkan bilangan : ");
	scanf("%d", &x);
	if (x&2==0) {
		printf("%d adalahbilangan genap\n\n", x);
	}else{
		printf("%d adalah bilangan ganjil\n\n", x);
	}
	
	return 0;
	
}
