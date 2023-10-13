//Shrey G Patel
//23CS10051

#include <stdio.h>

void check(char a[],int n)
{int count=0,b,c;
for(int i=0;i<n-2;i++)
{  b=a[i];
   c=a[i+2];
if(c==b+1)
count++;
}
printf("Expected output: %d\n",count);
}

void encode1(char c[],int n)
{
for(int i=0;i<n;i++)
{ if(c[i]=='y')
  c[i]='a';
  else if(c[i]=='z')
  c[i]='b';
  else
  c[i]=c[i]+2;
}

for(int i=0;i<n;i++)
printf("%c",c[i]);
printf("\n");
}

void encode2(char c[],int n)
{
 char Y[2*n];
 for(int i=0;i<n;i++)
 {Y[2*i+1]=c[i];Y[2*i]='a';
}
for(int i=0;i<2*n;i++)
{printf("%c",Y[i]);
}
printf("\n");
}

int main()
{
int size;
char c[21];
printf("Enter the string of max 20 letters");
scanf("%s",c);
printf("Enter the size of string you entered");
scanf("%d",&size);

check(c,size);
encode1(c,size);
encode2(c,size);
  return 0;
}
