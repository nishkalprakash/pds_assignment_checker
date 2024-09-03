//aashrith vellampalli
// 24NA10007
#include <stdio.h>
#define N 100
int main(){
int n,arr[N],arr2[N],a;
printf("enter number of elements in haystack less than 100\n");
scanf("%d",&n);
printf("enter elements\n");
for(int i=0;i<n;i++)
 {
  scanf("%d",&arr[i]); //TAKING INPUT FROM USER
 }
 
printf("number of elements in needle");
scanf("%d",&a);
printf("enter elements\n");
for(int i=0;i<a;i++)
scanf("%d",&arr2[i]);
printf("haystack:");
for(int i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
printf("needle: ");
for(int i=0;i<a;i++)
printf("%d ",arr2[i]);
printf("\n");
if(n>=a)
{
 
  
 
}

else
printf("error len_needle>len_haystack\n");
return 0;
}
 
