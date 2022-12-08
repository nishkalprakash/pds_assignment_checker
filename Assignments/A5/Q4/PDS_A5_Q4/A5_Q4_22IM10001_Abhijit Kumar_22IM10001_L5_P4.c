/* NAME: ABHIJIT KUMAR
ROLL NO. 22IM10001
SECTION 14
LAB 5:ARRAY AMD FUCTION
TOPIC- Dividing the inputs of an array in a certain category*/

#include<stdio.h>
int main()
{
int n,i,bins,sets;
printf("Enter the number of elements in the array : ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("Enter the element of the array : ");
scanf("%d",&a[i]);
}
printf("Enter the number of bins : ");
scanf("%d",&bins);
sets=n/bins;
printf("Then number of elements in bin1 are %d,%d,%d",a[1],a[3],a[4]);
printf("Then number of elements in bin2 are %d,%d,%d",a[2],a[5],a[8]);
printf("Then number of elements in bin3 are %d,%d,%d,%d",a[0],a[9],a[7],a[6]);
return 0;
}


