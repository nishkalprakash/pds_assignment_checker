#include<stdio.h>

 int occurence(int A[],int n,int m)
{

int i=0,R=1;
  for(int j=0;j<n;j++)
{  
   if(A[i]== A[j+1])
{
  
  R++;
 
}
}

if(R==m)
{
   return A[i];
i++;
}


 
else  return 0;
}


int main()
{
  int n;

 printf("Enter size of aray:-\n");
 scanf("%d",&n);
int A[n];

  for(int i=0;i<n;i++)
{
  scanf("%d",&A[i]);
}
int m;
printf("Enter value of m:-\n");
scanf("%d",&m);

int p[] = { occurence(A,n,m) };
int size= sizeof(p)/sizeof(int);

if(p[0]!=0)
{
  for(int i=0;i<size;i++)
{
  printf("%d element appears %d times:-",p[i],m);
}
}
 else printf("NO element  appears %d times:-",m);

return 0;
}


  

