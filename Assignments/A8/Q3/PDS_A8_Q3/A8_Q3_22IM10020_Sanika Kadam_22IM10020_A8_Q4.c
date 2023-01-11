//Assignment 8
//Section 14
//Name:Sanika Kadam
//Question 4


#include<stdio.h>
#include<string.h>



int main()
{
  char msg[100];
  int i,count1=0,count2=0,count3=0,count4=0;
  int len;

  printf("Enter text msg: ");
  scanf("%[^\n]",msg);

  
  //To find length without using library

  for(i=0;msg[i] != '\0';i++)
  {
    
   /* if((msg[i]>='a' && msg[i]<='z') || (msg[i]>='A' && msg[i]<='Z') || (msg[i]==' ') || (msg[i]=='.') || (msg[i]==','))
    {
      count1++;
    } */
count1++;
  }

  printf("Length counted without using library: %d\n",count1);

  //To find length using library

  len=strlen(msg);

  printf("Length counted by strlen(): %d\n",len);


  //To find total words 

  for(i=0;msg[i] != '\0';i++)
  {
   if(msg[i]==' ')
   {
    count2++;
   }
  }

  printf("Number of words:%d\n",count2+1);

  //To find sentences 

  for(i=0;msg[i] != '\0';i++)
  {
   if(msg[i]=='.')
   {
    count3++;
   }
  }

  printf("Number of sentences:%d\n",count3);

  //To find vowels
  
  for(i=0;msg[i] != '\0';i++)
  {
   if(msg[i]=='a' || msg[i]=='e' || msg[i]=='i' || msg[i]=='o' || msg[i]=='u' || msg[i]=='A' || msg[i]=='E' || msg[i]=='I' || msg[i]=='O' || msg[i]=='U')
   {
    count4++;
   }
  }

  printf("Number of vowels:%d\n",count4);


  return 0;
}

