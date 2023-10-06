// SWARUP JAYARAM DHANAVADE
// 23MI10052

#include<stdio.h>
#include<stdlib.h>

int arr[100], size;          // Global variables

void fill();                // function declerations 1
void exchange();            // fun. decl. 2
void rotate_right();        //fun. decl. 3
void rotate_left();         //fun. decl. 4
void segregate();           // fun. decl. 5
void search();              // fun. decl. 6
void fold();                // fun. decl. 7

int main()
{ printf("MENU\n 1--fill \n 2--exchange \n 3--rotate right \n 4--rotate left \n");
  printf(" 5--segregate \n 6--search \n 7--fold \n 8--analyze \n 0,9 or any higher number--exit\n");
  int choice;
  printf("Enter menu choice :");           // users input
    scanf("%d",&choice);
  if (choice == 1) fill(); 
  if(choice==2){ fill(); exchange();}
  if(choice==3){ fill(); rotate_right();}
  if(choice==4){ fill(); rotate_left ();}
  if(choice==5){ fill(); segregate();}
  if(choice==6){ fill(); search();}




  
  return 0;
}


void fill()                                                               // function declerations 1
{
  printf("Enter the size of array [1-100]:");
  scanf("%d",&size);
  if (size<1 || size >100) fill();
  else {
    for(int i =0; i<size ; i++)
      {
      int x = rand() %900 + 100;
      arr[i] = x;
      printf(" arr[%d]= %d\n  ",i,arr[i]);
      }
       }
      
}

void exchange()                                                              // fun. decl. 2
{  if (size%2==0)
      { 
      for(int i=0;i<(size/2);i++)
	{
	int x = arr[i];
	int y = arr[i + size/2];
	arr[i]=y ;
	arr[i + size/2]=x;
        }
      printf("New Array is:\n");
      for(int i=0;i<size;i++)
	{
	  printf(" arr[%d]=%d\n",i,arr[i]);
	}
      }

  if(size%2==1)
    {
      for(int i=0;i<((size-1)/2);i++)
	{
	int x = arr[i];
	int y = arr[i + (size+1)/2];
	arr[i]=y ;
	arr[i + (size+1)/2]=x;
        }
      printf("New Array is:\n");
      for(int i=0;i<size;i++)
	{
	  printf(" arr[%d]=%d\n",i,arr[i]);
	} 
    }

}


void rotate_right()                                                     // fun. decl.3                                
{   int y = arr[size-1];
  for(int i= (size-1) ; i =1; i--)
    {
     arr[i] = arr[i-1]
    }
  arr[0]=y;
  printf("New Array is:\n");
  for (int i=0 ; i<size;i++)
    {
      printf("arr[%d]=%d \n",arr[i]);
    }

}





void rotate_left()                                                       // fun. decl. 4
{
     int y = arr[0]
       for(int i=0 ; i<(size-1)  ; i--)
    {
     arr[i] = arr[i+1]
    }
  arr[size-1]=y
  printf("New Array is:\n");
  for (int i=0 ; i<size;i++)
    {
      printf("arr[%d]=%d \n",arr[i]);
    }

}






void search()                                                           // fun. decl.6
{ int a;
  printf("Enter integer value:");                                      // values between[100,999]
  scanf("%d",&a);
  int count=0
  for (int i =0 ;  i<size;i++)
    {
      if(a== arr[i]){ 
	printf("Index is:%d\n", &arr[i]);
	      
	count++;
      }
    }
  if(count=0) printf("NOT FOUND");
  
}



void fold()                                                        // fun. decl. 7
{
  if(size%2==0)
    {
      for (i=0;i<size/2;i++)
	{
	  arr[i] += arr[size -(1+i)];
	  printf("arr[%d] = %d", i,arr[i]);
	}
    }
  if(size%2==1)
    {
         for (i=0;i<(size-1)/2;i++)
	{
	  arr[i] += arr[size -(1+i)];
	  printf("arr[%d] = %d", i,arr[i]);
	}
	 printf("arr[%d]=%d",(size-1)/2,arr[(size-1)/2]);
    
    }
}
