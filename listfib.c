#include<stdio.h>
int main() {
	int list[10];
	int a=1;
	int c;
	int b=0;
	for (int i = 0 ; i < 10 ; i++) {
		c = a+b ;
		list[i] = c;
		a = b ;
		b = c ;
	}
	for (int i = 0 ; i < 10 ; i++) {
		printf("%d ) " ,i+1);
		printf("%d\n" ,list[i]);
	} 	
return 1 ;
}
