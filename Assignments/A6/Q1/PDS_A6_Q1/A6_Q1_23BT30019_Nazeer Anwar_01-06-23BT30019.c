//NAME:NAZEER ANWAR
//ROLL NO.:23BT30019

#include <stdio.h>
#include <stdlib.h>
int arr[100],size,i=1;

void fill()
{ int i,j;
  while(i>0)
    {
  printf("enter the value of size:  ");
  scanf("%d",&size);
  if(size>=1 && size<=100)
    break;
    }
  for(j=0;j<size;j++)
    {
      arr[j]=(rand() % 900)+100;
      printf("arr[%d]=%d \n",j,arr[j]);
    }
}

void exchange()
{int j,i,c;
  printf("original array:  ");
   for(j=0;j<size;j++)
    {
      printf("%d  ",arr[j]);
    }
   printf("\n");
  for(i=0;i<(size/2);i++)
    {  c=arr[i];
  arr[i]=arr[size-1-i];
  arr[size-1-i]=c;
    }
  printf("Array after exchange:  ");
for(j=0;j<size;j++)
    {
      printf("%d  ",arr[j]);
    }
 printf("\n");
}



void rotate_right()
{int i,r,j;
  printf("original array:  ");
for(j=0;j<size;j++)
    {
      printf("%d  ",arr[j]);
    }
  printf("\n");

  int c=arr[size-1];
  for(i=0;i<(size-1);i++)
    {
      r=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=r;
    }
  arr[0]=c;
  printf("Array after rotating right:  "  );
  for(j=0;j<size;j++)
    {
      printf("%d  ",arr[j]);
    }
printf("\n");

}


void rotate_left()
{
  
int i,r,j;
 printf("original array:  ");
for(j=0;j<size;j++)
    {
      printf("%d  ",arr[j]);
    }
  printf("\n");

  int c = arr[0];
  for(i=1;i<(size);i++)
    {
      r=arr[i];
      arr[i]=arr[i-1];
      arr[i-1]=r;
    }
  arr[size-1]=c;
  printf("Array after rotating right:  ");
  for(j=0;j<size;j++)
    {
      printf("%d  ",arr[j]);
    }
  printf("\n");

}


void segregate()
{
  printf("original array:  ");
  for(i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
  printf("\n");

  int ev[size],od[size],i,c1=0,c2=0,c=0;
    for(i=0;i<size;i++)
      {
	
	if(arr[i]%2==0)
	  {
	    ev[c1]=arr[i];
	    c1++;}
	else
	  {
	    od[c2]=arr[i];
	    c2++;
	  }
      }
  for(i=0;i<c1;i++)
    { arr[c]=ev[i];
      c++;}

for(i=0;i<c2;i++)
    { arr[c]=od[i];
      c++;}

 printf("Array after segregation:  ");
 for(i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
printf("\n");

}



void search()
{int i,n,flag=0;
    printf("original array:  ");
  for(i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
  printf("\n");

  printf("enter the number to be searched  \n");
  scanf("%d",&n);

 
  for(i=0;i<size;i++)
    {
      if(arr[i]==n)
	{ flag=1;
	  break;}
    }

  if (flag==1)
    printf("number found in the array index %d\n",i);
  else
    printf("number not found\n");
  
}



void fold()
{int i;
    printf("original array:  ");
  for(i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
  printf("\n");

for(i=0;i<(size/2);i++)
  {  arr[i]=arr[i]+arr[size-1-i];
    }
 printf("Array after folding:  ");
 
for(i=0;i<(size/2);i++)
  {  printf("%d  ",arr[i]);
    }
 printf("\n");

}


void analyze()
{int i,c=1,j;
      printf("original array:  ");
  for(i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
  printf("\n");

  for(i=0;i<size;i++)
    {
      if(arr[i+1]>arr[i])
	{ c++;
	  continue;
	}
      if(c>1)
	{
	   
  for(j=i-c;j<i;j++)
    {
      printf("%d  ",arr[j]);
    }
	}
      printf("\n");
    }
  printf("These are the increasing sequence");
printf("\n");
}


  
int main()
{
  int h,i=1;
  printf(" 1---fill \n 2---exchange \n 3---rotate right \n 4---rotate left \n 5---segregate \n 6---search \n 7---fold \n 8---analysis \n 0 or 9 and above to exit the program\n");


  while(i>0)
    {
            printf("enter your choise:  ");
      scanf("%d",&h);
      switch(h)
	{
	case 1 :
	  fill();
	  break;
	  	case 2 :
		  exchange();
	  break;
	  	case 3 :
		  rotate_right();
	  break;
	  	case 4 :
		  rotate_left();
	  break;
	  	case 5 :
		  segregate();
	  break;
	  	case  6:
		  search();
	  break;
	  	case 7 :
		  fold();
	  break;
	  	case 8 :
		  analyze();
	  break;
	default:
	  printf("exiting the program \n thankyou\n");
	  break;
	}

      if(h==0 || h>=9)
	break;}
  
}


