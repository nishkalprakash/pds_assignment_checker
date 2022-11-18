/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
void incorder(int *x,int *y,int *z);
int main()
{ int a,b,c;
printf("enter the values");
scanf("%d %d %d ",&a,&b,&c);
printf("the addresses of values before arranging");
printf("%d %d %d ",&a,&b,&c);
incorder(&a,&b,&c);
printf("the addresses of values after arranging");
printf("%d %d %d ",&a,&b,&c);
return(0);
}
void incorder(int *x,int *y,int *z){
    int arr[3],i,j,temp;
    arr[0]=*x;
    arr[1]=*y;
    arr[2]=*z;
    for ( i = 0; i < 2; i++)
    {
    for (j = 0; j <(2-i); j++)
    {
        if (arr[j]>arr[j+1])
        {
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1];
        }

    }
     *x=arr[0];
    *y=arr[1];
    *z=arr[2];
    }
