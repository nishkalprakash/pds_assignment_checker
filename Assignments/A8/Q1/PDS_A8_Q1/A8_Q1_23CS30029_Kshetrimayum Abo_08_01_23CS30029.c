//Roll No.: 23CS30029
//Name: Kshetrimayum Abo


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n;
void create(char*** ptr, int* n)
{
  int  i, j, counter = 0;
  char c = 'c', tempchar[100];
  
  printf("Enter how many words you will enter : ");
  scanf("%d",n);
  *ptr = (char**)malloc(*n*sizeof(char*));
  for(i = 0; i < *n + 1; i++)//going through n times
    {
      //Getting the characters for the word
      counter = 0;
      do
	{
	  c = getchar();
	  tempchar[counter++] = c;
	  
	  
	}while(c != '\n');
      tempchar[counter-1] = '\0';


      //Tranferring the string to the dynamic memory
      (*ptr)[i] = (char*)malloc(strlen(tempchar)*sizeof(char));
      for(j = 0; j < strlen(tempchar) + 1; j++)
	{	  
	  (*ptr)[i][j] = tempchar[j];
	}
    }
  for(i = 0; i < *n + 1; i++)
    {
      printf("%s\n",(*ptr)[i]);
    }
}

void lengthStat(char*** ptr, int n)
{
  int i, j, num1 = 0, num2 = 0, num3 = 0;

  //Length checking of words
  for(i = 0; i < n+1; i++)
    {
      if(strlen((*ptr)[i]) <= 2 && strlen((*ptr)[i]) >= 1)
	 num1++;
      else if(strlen((*ptr)[i]) <= 5 && strlen((*ptr)[i]) >= 3)
	num2++;
      else if(strlen((*ptr)[i]) > 5)
	num3++;
	 
    }

  printf("Number of words having letters between 1-2 : %d\n",num1);
  printf("Number of words having letters between 3-5 : %d \n",num2);
  printf("Number of words having letters larger than 5 : %d\n",num3);
  printf("\n");
}

void letterStat(char*** ptr, int n)
{
  int i, j, k, count[] = {0, 0, 0, 0, 0};
  char vowel[] = {'a','e','i','o','u'};

  for(i = 0; i < n+1; i++)
    {
      for(j = 0; j < strlen((*ptr)[i]); j++)
	{
	  for(k = 0; k < 5; k++)
	    {
	      if((*ptr)[i][j] == vowel[k])
		count[k]++;
	    }
	}
    }
  printf("Number of a : %d\n",count[0]);
  printf("Number of e : %d\n",count[1]);
  printf("Number of i : %d\n",count[2]);
  printf("Number of o : %d\n",count[3]);
  printf("Number of u : %d\n",count[4]);
  printf("\n");

}

void search(char*** ptr, int n)
{
  int i, j, flag;
  char sequence[100];

  printf("Enter word to be searched : ");
  scanf("%s",sequence);
  
  for(i = 0; i < n+1; i++) //Word from list loop
    {
      if(strlen((*ptr)[i]) == strlen(sequence))
	{
	  for(j = 0; j < strlen(sequence); j++) //Letter from word loop
	    {
	      if((*ptr)[i][j] != sequence[j])
		flag++;
	    }
	  if(flag == 0)
	    printf("Found! sptr[%d]\n",i-1);
	  flag = 0;
	}

	
    }
  

  printf("\n");

}

void removeDuplicate(char*** ptr, int *n)
{
  int i, j, flag;
  char sequence[100];

  printf("Enter word to be searched and deleted if duplicate is found : ");
  scanf("%s",sequence);
  
  for(i = 0; i < *n+1; i++) //Word from list loop
    {
      if(strlen((*ptr)[i]) == strlen(sequence))
	{
	  for(j = 0; j < strlen(sequence); j++) //Letter from word loop
	    {
	      if((*ptr)[i][j] != sequence[j])
		flag++;
	    }
	  if(flag == 0)
	    {
	      *n = *n - 1;
	      free((*ptr)[i]);
	      *ptr = realloc(*ptr, *n*sizeof(char*) );
	    }
	  flag = 0;
	}	
    }
    for(i = 0; i < *n + 1; i++)
    {
      printf("%s\n",(*ptr)[i]);
    }
}
  



void searchReplace()
{}

void arrange()
{}

int main()
{

  int choice, n;
  char **sptr;
  
  while(1)
    {
      printf("Enter your choice from 1 to 7\n");
      scanf("%d",&choice);
      switch(choice)
	{
	case 1 : create(&sptr, &n);
	  break;
	case 2 : lengthStat(&sptr, n);
	  break;
	case 3 : letterStat(&sptr, n);
	  break;
	case 4 : search(&sptr, n);
	  break;
	case 5 : removeDuplicate(&sptr, &n);
	  break;
	case 6 : searchReplace();
	  break;
	case 7 : arrange();
	  break; 
	case 0 : return 0;
   	default : printf("Invalid Choice, enter again\n");
	    
	}
    }
    
  return 0;
}
