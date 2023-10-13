//Shrey G Patel
//23CS10051

#include <stdio.h>
#include <stdlib.h>

int findmax(int b[20][20],int m,int n)
{
  int max=0,row,col,tr,tc;
for(int i=0;i<4-m+1;i++)
{ for(int j=0;j<4-n+1;j++)
{   int sum=0;
    tr=i;tc=j;
     for(int k=i;k<m+i;k++)
       {for(int l=j;l<n+j;l++)
         sum=sum+b[k][l];}
if(sum>max)
{ max=sum;
  row=tr;
  col=tc;}}}

for(int i=row;i<m+row;i++)
{for(int j=col;j<col+n;j++)
printf("%d \t",b[i][j]);
printf("\n");
}
printf("sum = %d \n",max);
return 0;
}


int findmin(int b[20][20],int m,int n)
{
  int min=1000,row,col,tr,tc;
for(int i=0;i<4-m+1;i++)
{ for(int j=0;j<4-n+1;j++)
{   int sum=0;
    tr=i;tc=j;
     for(int k=i;k<m+i;k++)
       {for(int l=j;l<n+j;l++)
         sum=sum+b[k][l];}
if(sum<min)
{ min=sum;
  row=tr;
  col=tc;}}}

for(int i=row;i<m+row;i++)
{for(int j=col;j<col+n;j++)
printf("%d \t",b[i][j]);
printf("\n");
}
printf("sum = %d \n",min);
return 0;
}


int findminmax(int c[20][20])
{int a[4][3],ttc;
for(int i=0;i<4;i++)
{ int max=0,tr=i,tc;
  for(int j=0;j<4;j++)
  {if(max<c[i][j])
     {max=c[i][j];
     tr=i;
     tc=j;}}
  a[i][0]=max;a[i][1]=tr;a[i][2]=tc;}
int min=1000;
for(int i=0;i<4;i++)
{ if(a[i][0]<min)
{min=a[i][0];ttc=i;}
}
printf("The min of all max is %d at row %d and col %d\n",min,a[ttc][1]+1,a[ttc][2]+1);
}

int findmaxmin(int c[20][20])
{int a[4][3],ttc;
for(int i=0;i<4;i++)
{ int min=10000,tr=i,tc;
  for(int j=0;j<4;j++)
  {if(min>c[i][j])
     {min=c[i][j];
     tr=i;
     tc=j;}}
  a[i][0]=min;a[i][1]=tr;a[i][2]=tc;}
int max=-1;
for(int i=0;i<4;i++)
{ if(a[i][0]>max)
{max=a[i][0];ttc=i;}
}
printf("The max of all min is %d at row %d and col %d\n",max,a[ttc][1]+1,a[ttc][2]+1);
}




int main()
{
int a[20][20];
for(int i=0;i<4;i++)
{
 for(int j=0;j<4;j++)
{
 a[i][j]=rand()%11;
 printf("%d\t",a[i][j]);
}
printf("\n");
}


printf("\n\nUsing findmax:\n"); 
findmax(a,3,3);
printf("\n\nUsing findmin:\n"); 
findmin(a,3,3);
printf("\n\nUsing findminmax:\n");
findminmax(a);
printf("\n\nUsing findmaxmin:\n");
findmaxmin(a);
  return 0;
}
