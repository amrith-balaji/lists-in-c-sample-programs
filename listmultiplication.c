#include<stdio.h>
#include<math.h>
int main () {
	int list[10];
	for ( int i = 0 ; i < 10 ; i++) {
		list[i] = 22 - ((i+1)*2);
	}
	for ( int i = 0 ; i < 10 ; i++) {
		printf(" %d ) " , i+1);
		printf("%d\n", list[i]);
	}
return 1;
}
