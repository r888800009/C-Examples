#include <stdio.h>
#include <stdlib.h>
#define sub2(x,y) x-y
const int a = 5;
int add2(int, int);
int main()
{
	printf("%d\n",add2(6,7));
	printf("%d\n", sub2(7,6));
	system("PAUSE");  
	return 0;
}

int add2(int a, int b) {
	return a + b;
}