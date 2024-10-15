// aashrith vellampalli
//24NA10007

#include<stdio.h>

void sort(int a[],int n)
{
 int temp;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n-i-1;j++){
   if(a[j]>a[j+1]){
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }
  
  }
 }
}

int main(){
 int n;
 int a[101];
 int m;
 int flag=0;
 int t;
 printf("enter number of elements in array\n");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
  printf("enter element %d:",i+1);
  scanf("%d",&a[i]);
  printf("\n");
 }

 sort(a,n);
 
 printf("enter number to insert:");
 scanf("%d",&m);
 
 for(int i=0;i<n;i++){
  if(m<a[i+1] && m>a[i]){
   for(int j=n+1;j>i+1;j--)
   {
    a[j]=a[j-1];
    
    
   }
   flag=1;
   a[i+1]=m;
  }
 }
 
 if(flag==0) a[n]=m;
 printf("[");
 for(int i=0;i<n+1;i++){printf("%d,",a[i]);}
 printf("]\n");
 
 return(0);
 
 
 
 
 

}
