#include <stdio.h>

int main()
{
	int num1 = 0;
	int size;
	size = sizeof num1;	//char: 1, short: 2, int: 4, long: 4, long long: 8
	printf("num1ÀÇ Å©±â: %d\n", size);
	return 0;
}