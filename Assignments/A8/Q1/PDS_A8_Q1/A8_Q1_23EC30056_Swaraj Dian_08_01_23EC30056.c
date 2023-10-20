//Name: Swaraj Dian
//Roll: 23EC30056
#include<stdio.h>  //Including libraries
#include<stdlib.h>
#include<string.h>
int n;
//create()      
void create(char ***s_ptr)
{
  int len,i;
  printf("Enter number of words: ");
  scanf("%d",&n);
  if (n<100)
    {
      *s_ptr = (char **)malloc(n * sizeof(char *));//allocating memory
      for (i=0;i<n;i++)
	{
	  char temp[100];
	  printf("Enter string: ");
	  scanf("%s",temp);
	  len=strlen(temp)+1;
	  (*s_ptr)[i] = (char *)malloc(len * sizeof(char));
	  strcpy((*s_ptr)[i],temp);//adding strings
	}
      printf("Entered Strings: \n");
      for(i=0;i<n;i++)
	{
	  printf("%s",(*s_ptr)[i]);
	  printf("\n");
	}
    }
  else
    printf("Invalid Input");
}

void lengthStat(char ***s_ptr) //lengthStat()
{
  int n1=0,n2=0,n3=0,i,len;//variables for counting
  for(i=0;i<n;i++)
    {
      len=strlen((*s_ptr)[i]);//checking length
      if ((len==1)||(len==2))
	n1++;
      else if((len>2)&&(len<=5))
	n2++;
      else
	n3++;
    }
  printf("Number of words of lenth 1-2 letters: %d\n",n1);//output
  printf("Number of words of lenth 3-5 letters: %d\n",n2);
  printf("Number of words of lenth more than 5 letters: %d\n",n3);
}

void letterStat(char ***s_ptr)
{
  int count=0,i,j;
  char l;
  for (i=0;i<n;i++)
    {
      for(j=0;(*s_ptr)[i][j]!='\0';j++)
	{
	  l=(*s_ptr)[i][j];//variable for letters
	  if ((l=='a')||(l=='e')||(l=='i')||(l=='o')||(l=='u'))//checking conditon for vowels
	    count++;
	  else
	    continue;
	}
    }//output
  printf("Number of vowels: %d",count);
}

void search(char ***s_ptr)//search()
{
  char s_word[100];
  int i,len,j,flag=0;
  printf("Enter search word");
  scanf("%s",s_word);//search word
  for (i=0;i<n;i++)
    {
      len=strlen((*s_ptr)[i]);
      for(j=0;j<len;j++)
	{
	  flag=0;
	  if (s_word[j]!=(*s_ptr)[i][j])//checking for unmatching letters
	    flag=1;
	}
      if(flag==0)
	printf("Word found at index: %d",i);//if search word matches word in array
      else
	printf("Not Found");
    }
}

void searchReplace(char ***s_ptr)
{
  char s_word[100],r_word[100];
  int i,len,j,flag=0,index;
  printf("Enter search word");
  scanf("%s",s_word);//search word
  for (i=0;i<n;i++)
    {
      len=strlen((*s_ptr)[i]);
      for(j=0;j<len;j++)
	{
	  flag=0;
	  if (s_word[j]!=(*s_ptr)[i][j])//checking for unmatching letters
	    flag=1;
	}
      if(flag==0)
	{
	  index=i;
	  break;
	}
    }
  if (flag==0)
    {
      printf("Enter search word");
      scanf("%s",r_word);//replace word
      free((*s_ptr)[index]);
      len=strlen(r_word)+1;
      (*s_ptr)[index] = (char *)malloc(len * sizeof(char));
      strcpy((*s_ptr)[index],r_word);
      printf("\nupdated Strings: \n");
      for(i=0;i<n;i++)
	{
	  printf("%s",(*s_ptr)[i]);
	  printf("\n");
	}
	   
    }
  else
    printf("Not found");
}


//main function
int main()
{
  int ch;
  char**sptr;
  while (1)
    {//menu 
      printf("\nEnter your choice\n1-> Create\n2-> LengthStat\n3-> LetterStat\n4-> Search\n5-> RemoveDupicate\n6-> SearchReplace\n7-> Arrange\n0-> Exit: ");
      scanf("%d",&ch);
      if ((ch>0)&&(ch<9))
	{
	  if (ch==1)
	    create(&sptr);
	   if (ch==2)
	    lengthStat(&sptr);
	  if (ch==3)
	    letterStat(&sptr);
	  if (ch==4)
	    search(&sptr);
	  if (ch==6)
	    searchReplace(&sptr);
	} 
      else if(ch==0)
	break;//breaking if not incorrect input
      else
	printf("Incorrect Input");
    }
}
