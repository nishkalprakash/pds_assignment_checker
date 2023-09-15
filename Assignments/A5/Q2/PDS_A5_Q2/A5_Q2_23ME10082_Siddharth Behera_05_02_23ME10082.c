//Name:Siddharth Behera
//Roll no:23ME10082
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int a[50],n,i,temp,count=0,j,k;
  srand(time(NULL));
  printf("enter the number of random integer you want=");//enter the number of enteries you want
  scanf("%d",&n);
  {if(n<=50)
     
  for(i=0;i<n;i++)//assigning n random integer in the range  
      {
	a[i]=(rand()%41)+10;
      }
  for(i=0;i<n;i++)//printing the n random integer in the range
    {
     printf("%d ",a[i]);
    }
  int found=0;
  for(i=0;i<n;i++){
    for(j=1;j<n;j++){
      for(k=2;k<n;k++){
	if(a[i]+a[j]+a[k]==60)
	  found=1;}
    }
  }
  if(found==1){
    printf("%d+%d+%d=60",a[i],a[j],a[k]);
 
  }
  if (found==0){
    printf("no such number");}
 	
  }
  return 0;
}
