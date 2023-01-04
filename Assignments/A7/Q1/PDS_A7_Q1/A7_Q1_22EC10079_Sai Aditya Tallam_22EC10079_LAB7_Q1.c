#include<stdio.h>   //header file

int main(){

int n,m;
int a[n],b[n+1];       //defining two arrays

printf("enter a number of elements of array :");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);       
}
printf("m=");
scanf("%d",&m);
printf("output array :");
for(int i=0;i<n;i++)
{
  b[i]=a[i];              //storing all elements in array b
}

b[n]=m;          //storing m value in array b

for(int i=0;i<n+1;i++)
  {
    for(int j=i+1;j<n+1;j++)
        {
          if(b[i]>b[j])
            {
                int temp=b[i];
                    b[i]=b[j];      //sorting in acending order
                    b[j]=temp;
            }
        }
  }

for(int i=0;i<n+1;i++)
{
printf("%d ",b[i]);   //printing all array elements of b
}
return 0;
}

