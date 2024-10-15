//aashrith velampalli
//24NA10007

#include<stdio.h>
#include<math.h>

int digits(int a){
  
  if(a==0) return 0;
  return 1+digits(a/10);
  
  
}



void largest_num(int a[],int n)
{
 int temp;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n-i-1;j++){
   if( (a[j+1]/(int)pow(10,(digits(a[j+1])))) > (a[j]/(int)pow(10,(digits(a[j]))))) {
   a[j]=temp;
   a[j]=a[j+1];
   a[j+1]=temp;
  }
 }
 }
 
 for(int i=0;i<n;i++)
 {
  if((a[i+1]/(int)pow(10,(digits(a[i+1]))))==(a[i]/(int)pow(10,(digits(a[i])))))
  {
   if(digits(a[i+1]) < digits(a[i]))
   {
     a[i]=temp;
     a[i]=a[i+1];
     a[i+1]=temp;
   }
   
  }
 }
  printf("a[%d]=[ ",n);
  for(int i=0;i<n;i++){
   printf("%d",a[i]);
  }
  printf("]");
 }




int main()
{
 int n;
 int a[100];
 printf("enter size of the array");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
  printf("enter element %d:",i+1);
  scanf("%d",&a[i]);
 }
 largest_num(a,n);
 return(0);
 




}

