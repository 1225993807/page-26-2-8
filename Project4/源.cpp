#include<stdio.h>
#include<time.h>
int main()
{
	const  int mod = 1000000;
	int n, s = 0, i, j;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int factorial = 1;
		for (j = 1; j <= i; j++)
		{
			factorial = (factorial*j%mod);
		}
		s = (s + factorial) % mod;
	}
	printf("%d\n", s);
	printf("time used=%.2f\n", (double)clock() / CLOCKS_PER_SEC);
	return 0;
}