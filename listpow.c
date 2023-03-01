#include<stdio.h>
#include<math.h>
int main () {
	int list[10];
	for ( int i = 0 ; i < 10 ; i++) {
		int p = pow(2, i);
		list[i] = p;
	}
	for ( int i = 0 ; i < 10 ; i++) {
		printf(" %d ) " , i+1);
		printf("%d\n", list[i]);
	}
return 1;
}
