//Roll No. - 23BT10015
//Name - Ishansh Yadav

#include<stdio.h>
#include<stdlib.h>

int main()
{ int i, rolln[20], age[20], marks[20], product=1, k;
  
  for(i=0;i<20;i++)
    {rolln[i]=1000 + rand() % 1000;
      age[i]= 15 + rand() % 10;
      marks[i]=rand() % 100;
      for(k=0;k<20;k++)
	{if(((i!=k)&&(product!=i*k))&&(age[i]==age[k]))
	  printf("Roll:%d  Age:%d Marks:%d\n", rolln[i], age[i], marks[i]);
          printf("Roll:%d  Age:%d Marks:%d\n", rolln[k], age[i], marks[k]);
	  product=age[i]*age[k];}
         if(((i!=k)&&(product!=i*k))&&(marks[i]==marks[k]))
	  printf("Roll:%d  Age:%d Marks:%d\n", rolln[i], age[i], marks[i]);
          printf("Roll:%d  Age:%d Marks:%d\n", rolln[k], age[i], marks[k]);
          product=marks[i]*marks[k];}
  return 0;
}
