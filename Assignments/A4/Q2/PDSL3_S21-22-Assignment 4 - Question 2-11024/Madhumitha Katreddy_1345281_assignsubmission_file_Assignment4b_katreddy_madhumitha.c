#include <stdio.h>
int count = 0;
void func(int n, int k, int m)
{
	if (k == 0)
	{
		count++;
		return;
	}
	if (n == 0 && k != 0)
	{
		return;
	}
	for (int i = 1; i <= m; i++)
	{
		func(n - 1, k - i, m);
	}
}
int main()
{
    int n, m, k;
    printf("Enter number of Days : ");
    scanf("%d", &n);
    printf("Number of items in your room : ");
    scanf("%d", &k);
    printf("Maximum number of items per trip : ");
    scanf("%d", &m);
    func(n, k, m);
    printf("Trips : %d",count);
}
