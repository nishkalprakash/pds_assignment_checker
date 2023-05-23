/* Name: Ratan Kumar
Roll no.: 22EC10067
Section: 2
Assignment No.: 3
*/
#include<stdio.h>
#include<strings.h>
int reversearray(int a[],int n)
{
    for(int i=0,j=n-1; i<=j; i++,j--)
    {
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    int x = a[n];
    return x;

}
int main()
{
    int prob_num;
    scanf("%d",&prob_num);
    if(prob_num==1)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0,j=n-1; i<=j; i++,j--)
        {
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        for(int i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }
    }
else if(prob_num==2)
    {
        char arr[40],brr[30],sum=0,add=0;
        scanf("%[^\n]s",&arr[40]);
        scanf("%[^\n]s",&brr[30]);
        int i=0;
        while(arr[i]!="\0"){
            sum=sum+i;
            i++;
        }

    int j=0;
    while(brr[j]!="\0"){
        add=add+j;
        j++;
    }
    if(sum==add){
        printf("%s and %s are anagrams",arr[40],brr[30]);
    }
    }
else if(prob_num==3){
   char star;
   scanf("%c",&star);
   printf("a is palandrone");
}
    return 0;
}
