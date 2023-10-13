//Roll No:23MF10042
//Name:Theyanesh Eswaramoorthy Rajahkrishnan
#include<stdio.h>
#include<string.h>
int main()
{
  char a[20];
  printf("Enter the string\n");
  scanf("%s",a);
  printf("%s\n",a);
  check(a);
}

void check(char a[20])
{
  int n=0,l;
  l=strlen(a);
  for(int i=0;i<l;i++)
    {
      if(a[i]<a[i+2])
	n+=1;
    }
  printf("Output=%d\n",n);
}
void encode1(char a[20])
