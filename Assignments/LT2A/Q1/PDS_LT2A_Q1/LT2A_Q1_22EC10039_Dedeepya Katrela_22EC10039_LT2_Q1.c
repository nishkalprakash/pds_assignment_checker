//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//LAB TEST 2
//DESCRIPTION:PROGRAM TO CHECK POINTS
 
#include<stdio.h>
#include<stdlib.h>
int count=0,i=0,j=0;
void create2darr(int row,int col)
{int**ptr;
 int i=0;
 printf("enter the value of m&n:");
 scanf("%d %d",&row,&col);
 ptr=(int**)malloc(sizeof(int*)*row);
 for(i=0;i<row;i++)
  {ptr[i]=(int*)malloc(sizeof(int)*col);}
 input2darr(ptr,row,col);
}
void input2darr(int**ptr,int row,int col)
{int p;
 if(count==row*col)
  return;
 else
   {printf("enter the value:");
    scanf("%d",&p);
    count++;  
     if(j<col)
       {j++;}
     if(j==col)
      {i++;
       j=0;}
   
   input2darr(ptr,row,col);
    
    if(j<col)
      j++;
    printf("%d ",p);
    if(j==col)
     { printf("\n"); 
       j=0;}
    
   }
}
int main()
{int m,n;
 create2darr(m,n);
 return 0;
}

