#include<stdio.h>
int main()
{
int i,j,a[100],n;
printf("enter the size of array\n"); //entering the size of array 
scanf("%d",&n); //reading the size of array
printf("L=");
for(i=0;i<n;i++)//using for loop
{
scanf("%d",&a[i]);// reading the elements of array
}
for(i=0;i<n;i++)//using for loop
{
for(j=1;j<n;j++)//using for loop
{
if(a[i]>a[j]&&a[i+1]>a[j+1]&&a[i+2]>a[j+2]&&a[i+3]>a[j+3]) //checking if input list in decending order
{
printf("the input list is in desending order\n");

}
else
if(a[i]<a[j]&&a[i+1]<a[j+1]&&a[i+2]<a[j+2]&&a[i+3]<a[j+3]&&a[i+4]<a[j+4])//checking if input list in acending order
{
printf(" the input list is  in ascending order\n");
}
}
}
}


