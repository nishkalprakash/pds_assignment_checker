/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>

void repitition(int temp[],int a[],int x,int l,int s,int e) //main function that prints all combination of numbers
{
    int i,c=0;
    if(x==l) //since index has become l, it is ready to be printed
    {
        for (i=0;i<l;i++)
        {
            printf("%d",a[temp[i]]);
        }
        printf("\n");
        return;
    }
    for (i=s;i<=e;i++)
    {
        temp[x]=i;
        repitition(temp,a,x+1,l,i,e); //recursive calling
    }
}

void combi(int a[],int n,int l) //main function to call the recursive function
{
    int temp[l+1];
    repitition(temp,a,0,l,0,n-1);
}

//a-main array, temp-temporary array to store indices, l-size of combination

int main()
{
    int n,l,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter combination length: ");
    scanf("%d",&l);
    int a[n];
    printf("Enter the elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    combi(a,n,l);

    return 0;
}
