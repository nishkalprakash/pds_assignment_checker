/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code 
Assignment class:- 6
*/
#include<stdio.h>
#include<stdlib.h>

int n;

int max(int *p)//takes the address of the array and returns the maximum value
{
    int maxValue=0;
    for (int i = 0; i < n; i++)
    {
        if (p[i]>maxValue)
        {
            maxValue=p[i];
        }        
    }
    return maxValue;
}

int EachIntervalCount(int * p, int intervalLen)//returns the number of element in each interval
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (p[i]<=intervalLen)
        {
            count++;
        }        
    }
    return count;
}

void ArrangeBin(int *p, int bin[], int intervalLen, int lastIntervalLen)//Arranges the bin
{
    for (int i = 0; i < n; i++)
    {
        static int j;
        if ((p[i]<=intervalLen)&&(p[i]>lastIntervalLen))
        {
            bin[j]=p[i];
            j++;
        }        
    }    
}

int main()
{
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    int *p;
    p=(int *)malloc(n*sizeof(int));
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    int interval;
    printf("Enter the number of interval\n");
    scanf("%f", &interval);
    int intervalLen=max(p)/interval;//this determines the length of each interval
    int lastIntervalLen=0;
    int i=1;
    do
    {
    int elementCount=EachIntervalCount(p, intervalLen);
    int bin[elementCount];
    ArrangeBin(p, bin, intervalLen, lastIntervalLen);
    printf("bin %d is :-\n", i);
    for (int j = 0; j < elementCount; j++)
    {
        printf("%d, ", bin[j]);
    }
    printf("\n");
    lastIntervalLen=intervalLen;
    intervalLen+=intervalLen;
    i++;
    } while (intervalLen>max(p));    
    free(p);
    return 0;
}