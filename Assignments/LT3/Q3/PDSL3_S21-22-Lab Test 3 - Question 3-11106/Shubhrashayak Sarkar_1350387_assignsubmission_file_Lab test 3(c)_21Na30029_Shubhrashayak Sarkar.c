/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter two digits:");
    int c, d;
    scanf("%d %d", &c, &d);//reads two digits from user
    int arr[32][5];
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < 5; j++)
            arr[i][j] = 0;
    }
    for (int i = 0; i < 32; i++)
    {
        int pos = 0;
        int x = i;
        while (x != 0)
        {
            int f = x % 2;
            arr[i][4 - pos] = f;
            pos++;
            x /= 2;
        }
    }
    printf("The numbers are: \n");
    for (int i = 0; i < 32; i++)
    {
        int num = 0;
        for (int j = 4; j >= 0; j--)
        {
            if (arr[i][j] == 1)
                num += d * pow(10, 4 - j);
            else
                num += c * pow(10, 4 - j);
        }
        if ((num) % (c + d) != 0)
            printf("%d ", num);
    }
    return 0;
    return 0;
}