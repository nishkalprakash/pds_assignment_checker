#include<stdio.h>
void rev(int n)
{
 int i,temp,l,a[10];

 for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}
l=n-1;
for(i=0;i<l;i++,l--)
{
 temp=a[i];
 a[i]=a[l];
 a[l]=temp;
}
for(i=0;i<n;i++)
{
printf("%d, ",a[i]);
}
}



int palindrome(char str[20])
{
char count=' ';
int i,l;
gets(str);
for(l=0;str[l]!='\0';l++);
for(i=0;i<l;i++)
{
if(str[i]!=str[l-i-1])
{
count=str[i];
str[i]=str[l-i-1];
str[l-i-1]=count;
}
}
if(count==' '){ printf("%s is palindrome\n",str);
    return 1; }
else{
    printf("%s is not palindrome",str);
    return 0;
}
}






int main(){
    int k,p;
  scanf("%d",&k);
  if(k==1)
    scanf("%d",&p);
        rev(p);



  if(k==3){
    char a[20];
    gets(a);
    int n=palindrome(a);}

else {
    printf("no test case");
}

   return 0;}


