/* NAME K.SRISAI
   ROLLNO 22EC30055
   LAB 5
   QUESTION 3 */
#include<stdio.h>
void swap(int *p,int *q);
void reverse(int *a,int n,int i);
void cyclicshift(int *a, int direction,int n,int i);
int main()
{
int a[100],n,direction;
printf("enter the size of array and direction\n");
scanf("%d%d",&n,&direction);
printf("enter %d integers\n",n);
for(int i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("original array:  ");
        for(int k=0;k<n;k++)
    {
      printf("%d,",a[k]);
    }
    printf("\n");
    reverse(a,n,0);
    printf("array after reversal :  ");
    for(int k=0;k<n;k++)
    {
      printf("%d,",a[k]);
    }
    printf("\n");
    cyclicshift(a,direction,n,0);
    printf("array after ");
    if(direction==1){
        printf("left cyclic shift : ");
    } else printf("right cyclic shift : ");
        for(int k=0;k<n;k++)
    {
      printf("%d,",a[k]);
    }
    return 0 ;

}
void swap(int *p,int *q)
{
int a;
a=*p;
*p=*q;
*q=a;
}
void reverse(int *a, int n,int i )
{
    if(i<=(n-1)/2){
 swap(a+i,a+n-1-i);
 reverse(a,n,i+1);
    }
}
void cyclicshift(int *a,int direction,int n,int i)
{
 if((direction==1)&&(i<n-1))
 {
     swap(a+i,a+i+1);
     cyclicshift(a,1,n,i+1);
 } else
 {
    if(i<n-1)
        {
          swap(a+n-1-i,a+n-2-i);
          cyclicshift(a,-1,n,i+1);
        }
 }
}

