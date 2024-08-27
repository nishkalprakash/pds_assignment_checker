// Program to prompt the user to print Numero-Pyramid
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011 
#include<stdio.h>
#include<math.h>
void main()
{
  int R;
  printf("Enter the number of rows: ");
  scanf("%d",&R);
  for(int i=1;i<=R;i++)
  { int i2=i;
  int i3=i;
    for(int j=1;j<=(R-i);j++)
    {
      printf(" ");
    }
    for(int j=1;j<=i;j++)
    {
      printf("%d",i2);
      i2++;
      i3++;
      if(i2==9)
      {
        i2=0;
      }
    }
    i3=i3-2;
    for(int j=1;j<=i-1;j++)
    {
      
      printf("%d",i3);
      i3--;
    }
    printf("\n");
  }
}

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    


