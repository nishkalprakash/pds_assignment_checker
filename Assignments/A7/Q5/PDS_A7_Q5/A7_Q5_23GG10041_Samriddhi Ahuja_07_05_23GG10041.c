//roll no: 23GG10041
//name: Samriddhi Ahuja
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int age[20], marks[20], roll[20], i, j,m,k , min;
for(i=0;i<20;i++)
  {roll[i]=rand()%1001 + 1000;
    age[i]= rand()%11 + 15;
    marks[i]= rand()%101;
   
      
      
    printf("roll:%d age:%d marks:%d\n", roll[i],age[i],marks[i]);
  }
 
 printf("same marks:\n");
 for(i=0;i<20;i++)
   {
     for(j=0;j<20;j++)
       {
	 if (marks[i]==marks[j]&&i>j)
	   {printf("roll: %d  age: %d  marks: %d\n",roll[i],age[i],marks[i]);
	     printf("roll: %d  age: %d  marks: %d\n",roll[j],age[j],marks[j]);
	   }
       }
          
   }
     printf("ascending roll numbers:\n");
 min=roll[0];
 for(i=0;i<20;i++)
   {  if(roll[i]<min)
       { min= roll[i];
	k =  marks[i];
	m=age[i];
 
     printf("roll: %d  age: %d  marks: %d\n", min, m, k);
       }
   }
    
return 0;
}

