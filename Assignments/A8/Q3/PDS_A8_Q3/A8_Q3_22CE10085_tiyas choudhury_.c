#include<stdio.h>
#include<string.h>
int main()


#include<stdio.h>
#include<string.h>
 
 int main()
 {int i;

 char str[100];
 printf("Enter String");
 scanf("%[^\n]",str);
 int k=strlen(str);
 printf("Length counted without using library:%d",length(str));
 printf("Length counted  using library:%d",k);
 printf("Words:%d",words(str));
  printf("Sentences:%d",sentences(str));
   printf("Vowels:%d",vowels(str));







 
}

int length(char a[])
{
int l;intc=0,i=0;
l=strlen(a);
while(a[i]!='\0')
{
c++;

    
}
return l;

    

}

int words(char a[])
{
    int c=0,i;
int k=length(a)
for(i=0;i<k;i++)
{
    if(a[i]== ' ')
    {
    c++;
    }

}
return (c+1);
}
int sentences(char a[])
{
    int c=0,i;
    int k=length(a);
    for(i=0;i<k;i++)
    {
    if(a[i]=='.')
    {
    c++;
    }
    }
    return c;
}
int vowels(char a[])
{
    int c=0,i;
    int k=length(a);
    for(i=0;i<k;i++)
    {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
    {
    c++;
    }
    }
    return c;
}