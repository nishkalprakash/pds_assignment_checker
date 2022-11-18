#include<stdio.h>
int main()
{
int m ,n;
int k;
printf("Entet the kernal matrix size : ");
scanf("%d",&k);
int b[k][k];
printf("Enter the normal matrix size : ");
scanf("%d",&m);
int a[m][m];



int i,j,o,p;
printf("Enther the normal array : ");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}



}
for(o=0;o<k;o++)
{
for(p=0;p<k;p++)
{
scanf("%d",&b[k][k]);
}
}
int val=0,pro=1;
for(n=0;n<k;n++)
{
val = val +pro;
pro = a[n][n] * b[n][n];
}
printf("Resultant value is : %d",val);



}
