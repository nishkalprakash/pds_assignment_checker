/program to separate negative and positive integers
//created by ashutosh singhal
// roll no:24NA10020
#include <stdio.h>
int main() 
{
int n1,n2,j,i,count;
char haystack[100];
printf("enter number of elements");
scanf("%d",&n1);
for(i=0;i<n1;i++){
printf("enter number");
scanf("%d",&haystack[i]);
}
char needle[10];
printf("enter number of elements");
scanf("%d",&n2);
for(i=0;i<n2;i++){
printf("enter number");
scanf("%d",&needle[i]);
}
count=0
for(j=0;j<n2;j++){
for(i=0;i<n1;i++){
if (needle[j]==haystack[i]&needle[j+1]==haystack[i+1]&needle[j+2]==haystack[i+2]&needle[j+3]==haystack[i+3])
count=count+1
}
printf("number of occurence %d ",count);

}
return 0;
}



