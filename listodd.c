#include<stdio.h>
int main() {
	int list[10];
	for (int i = 0 ; i < 10 ; i++) {
		list[i] = (i+1)+i;
	}
	for (int i = 0 ; i < 10 ; i++) {
		printf("%d ) " ,i+1);
		printf("%d\n" ,list[i]);
	}
return 1 ;
}
