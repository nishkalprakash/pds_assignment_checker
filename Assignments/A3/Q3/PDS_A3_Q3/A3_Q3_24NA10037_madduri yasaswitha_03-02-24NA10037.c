//code creator:M.yasaswitha
//roll no:24NA10037
#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a==b!=c!=d){
printf("YES");
}
else if(a==c!=d!=b)
printf("YES");
else if(a==d!=c!=b)
printf("YES");
else if(b==c!=a!=d)
printf("YES");
else if(b==d!=a!=c)
printf("YES");
else if(c==d!=a!=b)
printf("YES");
else if(a==b==c==d)
printf("NO");
else if(a!=b!=c!=d)
printf("NO");
else if(a==b==c!=d)
printf("NO");
return 0;
}
