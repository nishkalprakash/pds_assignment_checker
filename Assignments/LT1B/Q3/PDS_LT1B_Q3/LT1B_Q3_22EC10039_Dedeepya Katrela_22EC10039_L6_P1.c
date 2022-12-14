//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:4
//DESCRIPTION:PROGRAM TO CHECK POINTS
 
#include<stdio.h>

int main()
{ int n,i,j,count=0,A[50],max,max2=0;
  printf("enter numbers:");
  
  while(1)     //enter a negative numbet to end the loop//
     {scanf("%d",&n);
       if(n>=0)   
       {A[count]=n;
        count++;}
       if(n<0)
        break;
     }
  
  max=A[0];
  for(i=0;i<count;i++)
  { if(A[i]>max)
     {max=A[i];}
  }
  printf("largest number: %d\n",max);
 if(count>1)
 {for(j=0;j<count;j++)
  {if(A[j]<max)
    {if(A[j]>max2)
      {max2=A[j];}
     }
  }
  printf("second largest value :%d\n",max2);
 }
 else
  printf("second largest value : not yet entered\n");

return 0;
}
