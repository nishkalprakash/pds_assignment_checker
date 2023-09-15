//Roll No.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>
#include <stdlib.h>

int main( ) {
  int roll[20],age[20],mark[20],i,j,k=0,t1,t2,t3;
  for(i=0;i<20;i++)
    {
    roll[i]=((rand()%1001)+1000);
    age[i]=((rand()%11)+15);
    mark[i]=(rand()%101);
	     }
      printf("Original data\n");
        for(i=0;i<20;i++)
	  printf("Roll:%d Age:%d Mark:%d\n",roll[i],age[i],mark[i]);
	 for(i=0;i<20;i++){
	    for(j=i+1;j<20;j++){
	      if(mark[i] == mark[j])
		{k++;
	      break;}
	    }
	 }
	 if(k == 1)
	printf("Students having identical marks\n");
	  for(i=0;i<20;i++){
	    for(j=i+1;j<20;j++){
	      if(mark[i] == mark[j]){
		 printf("Roll:%d Age:%d Mark:%d\n",roll[i],age[i],mark[i]);
		  printf("Roll:%d Age:%d Mark:%d\n",roll[j],age[j],mark[j]);
	      }
	    }
	  }
	 for(i=0;i<20;i++){
	   for(j=i+1;j<20;j++)
	   if(roll[i]>roll[j])
	     {t1=roll[i];
	       roll[i]=roll[j];
	       roll[i+1]=t1;
	       t2=age[i];
	       age[i]=age[j];
	       age[i+1]=t2;
	       t3=mark[i];
	       mark[i]=mark[j];
	       mark[i+1]=t3;
	     }
	 }
	 printf("Formatted data by arranging roll numbers in ascending order\n"); 
	 for(i=0;i<20;i++)
	    printf("Roll:%d Age:%d Mark:%d\n",roll[i],age[i],mark[i]);
	 
	 return 0;
  }
