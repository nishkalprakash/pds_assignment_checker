#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//char **sptr;
char arr[100][100];
int n;

void create()
{
  printf("How many words to enter?\n");
  printf("The input should have less than 100 words\n ");
  scanf("%d", &n);
 

  printf("Enter the words:");
   for(int i=0; i<n; i++)
  {
	scanf("%s", arr[i]); 
      
  }

     for(int i=0; i<n; i++)
  {
   
	printf("%s\n", arr[i]);
      
  }

  return;
}

void lengthStat()
{
  int count1=0, count2=0, count3=0;
  for(int i=0; i<n; i++)
    {
      int x = strlen(arr[i]); //counting size of each word
     printf("The word is %s and the letter length is: %d\n", arr[i], x);
     if(x>=1 && x<=2)
       {
	 count1++; //counting number of words have same number of letters
      printf("The word is having 1-2 letters: %s\n", arr[i]);
       }
    else if(x>=3 && x<=5)
      {
	count2++; //counting number of words have same number of letters
      printf("The word is having 3-5 letters: %s\n", arr[i]);
      }
    else if(x>5)
      {
	count3++; //counting number of words have same number of letters
    printf("The word is having more than 5 letters: %s\n", arr[i]);
      }
    }
  printf("The number of words having 1-2 letters is: %d\n", count1);
  printf("The number of words having 3-5 letters is: %d\n", count2);
  printf("The number of words having more than 5 letters is: %d\n", count3);
}
int main()
{
  int choice;
  char arr[100][100];
  while(1)
    {
      
     printf("Menu: ");
      printf("1- create\n");
      printf("2- lengthStat\n");
      printf("3- letterStat\n");
      printf("4- search\n");
      printf("5- removeDuplicate\n");
      printf("6- searchReplace\n");
      printf("7- arrange\n");
      printf("0- terminate\n");

       printf("Enter choice: ");
       scanf("%d", &choice);

       switch(choice)
	 {
	 case 0:
	   break;
	 case 1:
	   create(); //calling create function
	 case 2:
	   lengthStat(); //calling lengthstat function
	 default:
	   printf("Wrong input");
	 }
    }
  return 0;
}
