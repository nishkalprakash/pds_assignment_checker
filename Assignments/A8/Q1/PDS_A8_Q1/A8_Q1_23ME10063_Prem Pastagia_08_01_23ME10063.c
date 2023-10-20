#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// create function
void create(char ***sptr)
{
  char temp[100];
  int n;
  printf("Enter the number of words:\n");
  scanf("%d",&n);

  (*sptr)=(char**)malloc(n*sizeof(char));

  for(int i=0;i<n;i++)
    {
      printf("Enter the word\n");
      scanf("%s",temp);
      (*sptr)[i]=(char*)malloc((strlen(temp)+1)*sizeof(char));

      for(int j=0;temp[j]!='\0';j++)
	{
	  (*sptr)[i][j]=temp[j];
	}
    }
}

void lengthstat(char **sptr)
{
  char a=0,b=0,d=0;
  int k=0;

  for(int i=0;i<n;i++)
    {
      k=0;
      for(int j=0;(sptr)[i][j]!='\0';j++){c++;}

      if (c==1 || c==2){a++;}
      if(c==3|| c==4|| c==5){b++;}
      if(c>5){d++;}
    }
  printf("The %d %d %d ",a,b,d);
}








// main function
int main()
{
  int h;
  char **sptr;
  while(1)
    {
      printf("Menu choice\n1 create()\n2  LengthStat()\n3  letterStat()\n4 search()\n5  removeDuplicate()\n6  searchReplace()\n7  arrange()\n0 to exit\nPlease enter your choice\n");
      scanf("%d",&h);
      if(h==0 || h>=8){printf("Exiting...\n");return 0 ;}
      switch(h)
	{
	case 1:create(&sptr);break;
	case 2:break;
	case 3:break;
	case 4:break;
	case 5:break;
	case 6:break;
	case 7:break;
	}
    }
}
