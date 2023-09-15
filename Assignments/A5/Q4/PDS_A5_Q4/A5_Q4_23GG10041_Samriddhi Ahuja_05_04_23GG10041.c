//roll no. = 23GG10041
//name= Samriddhi Ahuja
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int roll[20],age[20],marks[20],i,j,max,count=0;
  for (i=0;i<20;i++)
    { roll[i]=rand()%1001 +1000;
      age[i]=rand()%11 +15;
      marks[i]=rand()%101 +0;
      printf("roll:%d  age:%d  mark:%d\n",roll[i],age[i],marks[i]);
    }
  max=age[0];
  for(i=0;i<20;i++){
    for(j=0;j<20;j++){
      if (age[i]>max)
	max==age[i];
      printf("roll:%d  age:%d  marks:%d\n", roll[i], age[i], marks[i]);
      if(age[i]==age[j])
	printf("roll:%d  age:%d  marks:%d\n", roll[j], age[j], marks[j]);
      count++;}
  }
    return 0;
  }
