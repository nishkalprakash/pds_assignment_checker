/* Section 14

    Roll No. : 22ME30042

   Name:  # Muskan#

  Assignment No: 6*/

#include<stdio.h>
void pair( int arr[]);

int gcd(int,int);

int main()
{
 int a,b,s;
int arr[5];
printf("Enter the element of array\n");
for(int i=0;i<5;i++)
{ 
 scanf("%d",&arr[i]);
}

/*for (i=0;i<5;i++)
{
  if((arr[i]-int arr[i])>0)
  printf("all number should be integers");
  else
       arr[i]=int arr[i];
} */
for(int i=0;i<5;i++)
{
  if(arr[i]<0){
    printf("all number should be positive\n");
    return 0;
  }
}

pair(arr);
return 0;
}




int gcd(int m,int n)  /*to calculate gcd of two n umbers*/  
{ 
  int f;
  if(m==n)return m;
  if(m==0)return n;
  if(n==0)return m;
  if(m>n)
       {  
         f=gcd(m-n,n);
         return f;
       }
  else if(m<n)
       { 
        f=gcd(m,n-m);
       return f;
       }
}

void pair(int arr[])  
{
  int i,j;
printf("co-prime pairs:\n");
  for(i=0;i<5;i++)
  { 
    for(j=i+1;j<5;j++)
    {
     if(gcd(arr[i],arr[j])==1)
        printf("(%d,%d)",arr[i],arr[j]);
     }
   }
 
}
     

