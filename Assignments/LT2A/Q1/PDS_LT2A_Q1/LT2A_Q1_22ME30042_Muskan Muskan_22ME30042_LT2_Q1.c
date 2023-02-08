/* Section 14
   Muskan
   Lab Test-2
   Roll No.- 22ME30042
*/
#include<stdio.h>
#include<stdlib.h>


void rev(int m,int n)
{
 int a[m][n];  //size of array
 int i,j;
 printf("Enter the array element:\n");
 for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
{
a[i][j]=(int *)malloc(sizeof(int));
scanf("%d",&a[i][j]);
}
}
printf("Array before reversing :\n");
 for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
{
 printf("%d ",a[i][j]);
}
printf("\n");
}

printf("After reversing the oreder:\n");
 for(i=m-1;i>=0;i--)
{
 for(j=n-1;j>=0;j--)
{
 printf("%d ",a[i][j]);
}
printf("\n");
}

}




int main()
{
 int m,n;
 printf("Enter m:\n");
 scanf("%d",&m);
  printf("Enter n:\n");
 scanf("%d",&n);
  rev(m,n);   //to reverse the order of array
 return 0;
} 
