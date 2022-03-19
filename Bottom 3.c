#include <stdio.h>

int n, A[100], i;
int c;

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);
	c = 1;
	for (i = 0; i < n / 2; i++)
		if (A[i] != A[n - 1 - i])
			c = 0;
	printf("\nOUTPUT:\n");
	printf("%d", c);
	getch();
	return 0;
}


//test github
