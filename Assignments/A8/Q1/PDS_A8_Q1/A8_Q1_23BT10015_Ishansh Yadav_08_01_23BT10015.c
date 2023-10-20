//Name-Ishansh Yadav
//Roll No.-23BT10015

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n;
//Function 1
char create(char ***sptr)
{ int i, j, k;
  int size=1;
  char word[100];
  printf("No. of words(should be less than 100):");
  scanf("%d", &n);
  *sptr=(char **)malloc(n*sizeof(char*));
  for(j=0;j<n;j++)
  {
    printf("Enter a word:");
    scanf("%s", word);
  for(i=0;word[i]!='\0';i++)
    {size++;}
   (*sptr)[j] = (char *)malloc(size*sizeof(char));
  strcpy((*sptr)[j],word);
    }
  for(i=0;i<n;i++)
    {printf("%s\n", (*sptr)[i]);
    }
}
//Function 2
char lengthstat(char ***sptr)
{ int i, j;
  int count1=0;
  int count2=0;
  int count3=0;
  int size=0;
    for(j=0;;j++)
      {if(*sptr[i][j]!='\0')size++;
	if(j=='\0')break;}
      if((size<=2)||(size>=1))count1++;
       if((size<=5)||(size>=3))count2++;
       if(size>5)count3++;
    
  printf("Word with length 1-2 are %d\n", count1);
   printf("Word with length 3-5 are %d\n", count2);
    printf("Word with length greater than 5 are %d\n", count3);
}

int main()
{ char **sptr;
  int a, i;
 for(i=0;;i++)
   {printf("Enter a number between 1 to 7;");
  scanf("%d", &a);
  if(a==1) create(&sptr);
  if(a==2) lengthstat(&sptr);}
}
