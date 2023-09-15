// Name Prem Pastagia
// roll number 23ME10063

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int rno[20],age[20],mark[20];
  int i,j=0;
  //generation of array
  for(i=0;i<20;i++)
    {
      rno[i]=(rand()%1001)+1000;
      age[i]=(rand()%11)+15;
      mark[i]=(rand()%101);
    }
  // a) printing of array
  printf("The data of students are:\n");
    for(i=0;i<20;i++)
    {
      printf("Roll:%d Age:%d Marks:%d\n",rno[i],age[i],mark[i]);
    }
    // b)marks
    printf("The students with same marks\n");
    for(i=0;i<20;i++)
      {for(j=i+1;j<20;j++)
	  {
	    if(mark[i]==mark[j])
	      {
		 printf("Roll:%d Age:%d Marks:%d\n Roll:%d Age:%d Marks:%d\n ",rno[i],age[i],mark[i],rno[j],age[j],mark[j]);
	      }
	  }
      }
    
    // c) sorting array
    

    for(i=0;i<19;i++)
      {
	if(rno[i]>rno[i+1])
	  { 
	    int temp1,temp2,temp3;
	    temp1=rno[i]; rno[i]=rno[i+1]; rno[i+1]=temp1;
	    temp2=age[i]; age[i]=age[i+1]; age[i+1]=temp2;
	    temp3=mark[i]; mark[i]=mark[i+1]; mark[i+1]=temp3;
		    
	  }
      }
     printf("\nThe arranged array is:\n");

     for(i=0;i<20;i++)
    {
      printf("Roll:%d Age:%d Marks:%d\n",rno[i],age[i],mark[i]);
    }
  
  return 0;
}
