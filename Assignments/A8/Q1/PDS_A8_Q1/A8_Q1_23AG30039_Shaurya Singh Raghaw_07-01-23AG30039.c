#include<stdio.h>
#include<stdlib.h>

void create(char**sptr)
{
  int n;
  printf(" enter the number of words to be entered:\n");
  scanf("%d",&n);
  if(n>=100)
    {
      printf("invalid output");
      return;
    }
  for(int i=0;i<n;i++)
    {
      int s;
      char str[100];
      scanf("%s",&str);
      s=strlen(str)
	(*sptr)[i]=(char*)malloc(s*sizeof(char));
      strcpy(sptr[i],str[i]);
    }
  return;
}
void lengthStat(char**sptr,int c)
{
  for(int i=0;i<c;i++)
    {
      int l,s1,s2,s3;
      
      l=strlen(sptr[i]);
      printf("%d\n",l);

      if(l==1||l==2)
	s1++;

      else if(l==3 || l==4 || l==5)
	s2++;

      else if(l>5)
	s3++;
    }
  printf("1-2 letter words are:%d",s1);
  printf("3-5 letter words are:%d",s2);
  printf(">5 letter words are:%d",s3);

  return;
  
}   

void letterStat(char**sptr,int c)
{
  int z=0;
  for(int i=0;i<c;i++)
    {
    if(***sptr=='a'||'e'||'i'||'o'||'u')
      z++
	}
  printf("number of occurences of vowels: %d",z);
  
      
  
    
  
int main()
{
  char** sptr;
  int n;
  printf("the menu is: \n");
  printf("1->create\n");
   printf("2->lengthStat\n");
    printf("3->letterStat\n");
     printf("4->search\n");
      printf("5->removeDuplicate\n");
   printf("6->searchReplace\n");
   printf("7->arrange\n");

   for(;;)
   printf("choose any one by entering a number between 1 and 7\n");
   scanf("%d",&n);

   
     
   if(n==1)create();
   else if(n==2)lengthStat();
   else if(n==3)letterStat();
   else if(n==4)search();
   else if(n==5)removeDuplicate();
   else if(n==6)searchReplace();
   else if(n==7)arrange();*/
   else if(n==0)exit(1);
   }
   return 0;
}
   
     
