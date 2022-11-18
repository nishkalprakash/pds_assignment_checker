//name shivam sourav
//21CS10059 
//SECTION 3
#include<stdio.h>
int maxsum(int a[], int n)
{
    int max=-99999;int i,j,k,l;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
          
        for (int j = i; j < n; j++)
        {
            sum = 0;  
            for(k=i;k<=j;k++)
        {
            sum += a[k];}
            if (sum > max) 
                max= sum;
        }}
        printf("the maximum sum is %d\n ",max);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = 0;  
            for(k=i;k<=j;k++)
            {
                sum+=a[k];
            }
            
       
        if (sum==max)
        {
            for(l=i;l<=j;l++)
            printf("%d ",a[l]);}}}
}
 

 
int main(void)
{
    int n,i,a[20];
    printf("enter an integer in the range 1 to 20");
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    maxsum(a,n);
    
 
    return 0;
}