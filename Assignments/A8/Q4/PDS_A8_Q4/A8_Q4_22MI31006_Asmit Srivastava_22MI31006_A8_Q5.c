#include<stdio.h>
int main(){
char a[100],b[100];
char A,B;
int i=0;j=0,r,st1,st2,count=0;
printf("enter first string S1: ");
while(A!='\n')
{
A=getchar();
a[i++]=a;
}
a[i]='\0';
st1=i;
printf("enter string S2");
while(b!='\n')
{
   B=getchar();
   b[j++]=B;
}
b[j]='\0';
st2=j;
for(i=0;i<st2-st1+1;i++)
{
   for(j=i;j<i+st1;j++)
   {
   for(r=i;r<st2-st1+1;r++)
{
if(a[j]==b[r]&&a[j]==b[r+1]&&a[j]==b[r+2])
count++;
}
}
}printf("%d",count);



return 0;
}
