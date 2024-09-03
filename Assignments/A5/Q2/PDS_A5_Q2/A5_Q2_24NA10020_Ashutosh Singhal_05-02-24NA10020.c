//program to remove duplicates
//created by ashutosh singhal
// roll no:24NA10020
#include <stdio.h>
int main()
{
int n,count,i,s,j;
int a[100];
printf("enter number of elements");
scanf("%d",&n);
if (n>100){
printf("error n>100");

}
for( i=0;i<n;i++){
printf("enter number");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){

count=0;
for (j=i+1;j<n+1;j++)
{
if(a[j]==a[i]){
count=count+1;
}
}
if(count==0){
printf("%d ",a[i]);
}

}
return 0;
}



