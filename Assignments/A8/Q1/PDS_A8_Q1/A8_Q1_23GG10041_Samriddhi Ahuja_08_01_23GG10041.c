//roll no.: 23GG10041
// name:Samriddhi Ahuja
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{int choice;
 printf("1: create\n");
 printf("2: lengthstat\n");
 printf("3: letterstat\n");
 printf("4: search\n");
 printf("5: remove duplicate\n");
 printf("6: search replace\n");
 printf("7: arrange\n");
 printf("0: quit\n");
 printf("enter any choice between 1 and 7:\n");
   scanf("%d",&choice);
    if(choice==0)
      return 0;
    if(choice==1)
      {
	//char create()
  
     int n;
     printf("enter the no. of words:\n ");
    scanf("%d",&n);
      char **sptr=(char **)malloc(n);
      for(int i=0;i<n;i++)
	{	char a[50];
      printf("enter the string\n");
      scanf("%s",a);
      sptr[i]=&a[0];
	}
      printf("\n");
      for(int i=0;i<n;i++)
	printf("%d",(*sptr[i]));
	
      return **sptr;
  
      }
if (choice==2)
  {  
    int lengthstat(char**sptr){
      int count=0,a[10000],cnt1=0,cnt2=0,cnt3=0,n;
for(int j=0;j<100;j++)
  {
    for(int i=0;i<n;i++)
    {
      a[i]!='\0';
      count++;}
    if(count>=1&&count<=2){
      cnt1++;}
      if(count>=3&&count<=5){
	cnt2++;}
      if(count>5){
	cnt3++;}
  }
 printf("%d words of the range[1,2],%d words of the range [3,5], %d wrods of length greater than 5\n", cnt1, cnt2,cnt3);
		   
  }
    if(choice==3)
      {
	void letterstat(char **sptr){
	  int countvowel=0,n;
	  for(int i=0;i<n;i++)
	    {
	      if (sptr[i]=('a','e','i','o','u'))
		  countvowel++;
		  }
	      printf("number of vowels in the word=%d\n",countvowel);
	    }
	}
      }
    return 0;
}

  


