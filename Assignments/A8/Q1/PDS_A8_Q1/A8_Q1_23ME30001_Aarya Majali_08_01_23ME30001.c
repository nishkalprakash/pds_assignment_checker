//Aarya Majali
//23ME30001

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create(char *sptr[100])
{
  int n,i;
  char *str;
  char name[100];
  scanf("%s",name);
  n=strlen(name);
  *str=malloc(n*sizeof(char));
  for(i=0;i<n;i++)
  {
    str[i]=name[i];
  }
}
void lengthStat(int x[100][100])
{
  int *sptr[100];search
  int length;
  length=strlen(*sptr[100]);
  printf("length of the string is %d",length);
  return length;
}
void letterStat(char *sptr[100])
{
  char a[100],b[5]={'a','e','i','o','u'};
  int i,j,len,c[5]={0,0,0,0,0};
  scanf("%s",&a);
  printf("a=%s\n",a);
  for(len=0;a[len]!='\0';len++)
  {
    printf("length=%d\n",len);
  }
  for(i=0;i<len;i++)
  { 
    for(j=0;j<5;j++)
    {
      if(a[i]==b[j]) c[j]++;
    }
  }
 for(j=0;j<5;j++)
 {
   printf("number of %c=%d\n",b[j],c[j]);
 }
}
int main()
{
  int choice;
  char *sptr[100];
  printf("enter your choice:\n 1-create\n 2-lengthStat\n 3-letterStat\n 4-search\n 5-removeDuplicate\n 6-searchReplace\n 7-arrange\n");
  scanf("%d",&choice);
  switch (choice)
    {
    case 1:{create(*sptr[100]);break;}
    case 2:{lengthStat(*sptr[100]);break;}
    case 3:{letterStat(*sptr[100]);break;}
    case 4:{search(*sptr[100]);break;}
    case 5:{removeDuplicate(*sptr[100]);break;}
    case 6:{searchReplace(*sptr[100]);break;}
    case 7:{arrange(*sptr[100]);break;}
    }
  return 0;
}
void search(char k[][100])
{
  int i;
  char word[50],*sptr[100];
  printf("enter a word");
  scanf("%s",word);
  printf("the entered word is %s\n",word);
  for(i=0;i<100;i++)
  {
    strcmp((*sptr)[i],word);
  }
  
}

  
