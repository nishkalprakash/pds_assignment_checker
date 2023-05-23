/* jaydeep parmar
22AG30016
PROBLEM 2*/


#include<stdio.h>

int main()
{
    char str[100];
    printf("enter string: ");
    scanf("%s",str);
    printf("%s\n",str);
    int n;
    printf("enter integer: ");
    scanf("%d",&n);
    printf("%d\n",n);
    long int m;
    printf("enter long integer: ");
    scanf("%ld",&m);
    printf("%ld\n",m);
    long long int o;
    printf("enter long long integer: ");
    scanf("%lld",&o);
    printf("%lld\n",o);
    float p;
    printf("enter float integer: ");
    scanf("%f",&p);
    printf("%f\n",p);

char a[20];
gets(a)
printf("%s",a);
int l,v=0,c=0,blank=0;
for(l=0;a[l]!='\0';l++)
{
if((a[l]>=65 && a[l]<=90) || (a[l]<=127 && a[l]>=97))
{
switch(a[l])
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U': v++;
break;
default: c++;
}
}
if(a[l]==' ')
blank++;
}
printf("vowel %d,character %d,words %d",v,c,blank+1);

}
