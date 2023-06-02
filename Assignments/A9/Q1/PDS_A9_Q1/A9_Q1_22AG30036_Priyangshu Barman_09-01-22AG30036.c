#include<stdio.h>
#include<math.h>
int isPositive(int num)
{
    int s = 0;
    while(s * s <= num)
    {
    if(s * s == num)
    {
        return 1;
    }
    s++;
    }
    return 0;
}

int isFibo(int num)
{
    return isPositive(5 * num * num + 4) || isPositive(5 * num * num - 4);
}
int nearFibo(int num)
{
    int x = 0;
    int y = 1;
    int z = 1;
    while(z <= num)
    {
        x = y;
        y = z;
        z = x + y;
    }
    if(num - y <= z - num)
    {
        return y;
    }
    else
    {
        return z;
    }

}
int main()
{
    int num;
    scanf("%d", &num);
    printf("Value of n: %d\n",num);
    if(num < 0)
    {
        printf("Please give positive number",num);
    }
    else
    {
        if(isFibo(num))
        {
            printf("%d is a Fibonacci number \n",num);

        }
        else
        {
            int nf = nearFibo(num);
        printf("Nearest Fibonacci number: %d", num, nf);
        }
        return 0;
    }
}