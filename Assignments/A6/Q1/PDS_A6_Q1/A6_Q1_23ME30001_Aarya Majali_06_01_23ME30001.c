//23ME30001
//AARYA MAJALI

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void fill();             //prototype of each function
void exchange();
void rotateright();
void rotateleft();
void segregate();
void search();
void fold();
void analyze();
int main()
{
  int a[100],size,choice;
  printf("menu choices: 1--Fill\n2--Exchange\n3--Rotateright\n4--Rotateleft\n5--Segregate\n6--Search\n7--Fold\n8--Analyze\n0,9 0r any higher number--Exit\n");
  printf("enter your choice (1 to 8 only)");
  scanf("%d",choice);
  while(0)
  {
    if((choice>=1)&&(choice<=8))

  switch(choice)
  {
   case 1:{"fill"}                //using switch statement
   break;
   case 2:{"exchange"}
   break;
   case 3:{"rotateright"}
   break;
   case 4:{"rotateleft"}
   break;
   case 5:{"segregate"}
   break;
   case 6:{"search"}
   break;
   case 7:{"fold"}
   break;
   case 8:{"analyze"}
   break;
  }
  else 
    { 
      printf("please enter valid input");
    }
  }

    
}
void fill()          //fill function
{
  int a[100],n,i;
  printf("enter the size of the array");
  scanf("%d",&n);
  if ((n>=1)&&(n<=100)) return n;      //checking for n
  else
    {
      printf("please enter valid input");
    }
  for (i=0;i<100;i++)
    {
      a[i]=(rand()%900)+100;
    }
  for (i=0;i<100;i++)
    {
      printf("a[%d]=%d,",i,a[i]);
    }
}
void search()                //search function
{   
  int j,n,a[n],i;
  return fill(n);
  printf("enter the integer value to be searched");
  scanf("%d",&j);
  if (j==a[i])            //searching for required element
    {
      printf("array index at which the element is located is %d",&i);
    }
  else
    {
      printf("not found");
    }
}
  
  
  
  
  

  
  
  
  
  
  
