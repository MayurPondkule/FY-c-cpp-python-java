#include <stdio.h>
int max(int x, int y){

	if (x > y)
	return x;
	else
	return y;
}
int main(void)
{
	int a = 10, b = 20;

	// Calling above function to find max of 'a' and 'b'
	int m = max(a, b);

	printf("m is %d", m);
	return 0;
}
