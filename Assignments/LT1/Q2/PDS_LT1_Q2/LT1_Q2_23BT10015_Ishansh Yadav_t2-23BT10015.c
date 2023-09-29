//Name-Ishansh Yadav
//Roll No.-23BT10015

#include<stdio.h>
#include<stdlib.h>

int main()
{ int a1[10], a2[10], a3[10], a4[10], a5[20], a6[20], a7[20];
  int i, n;
  for(i=0;i!=10;i++)
    { n=10 + rand() % 20;
      a1[i]=n;}
  for(i=0;i!=10;i++)
    { n= 30 + rand() % 30;
      a2[i]=n;}
  for(i=0;i!=10;i++)
    { n=60 + rand() % 30;
      a3[i]=n;}
  for(i=0;i!=10;i++)
    { n=90 + rand() % 30;
      a4[i]=n;}
  //part a
  printf("array1 ");
           for(i=0;i!=10;i++)
	     printf("a1[%d]=%d, ", i, a1[i]);
  printf("\nArray2 ");
	   for(i=0;i!=10;i++)
	     printf("a2[%d]=%d, ", i, a2[i]);
  printf("\narray3");
	   for(i=0;i!=10;i++)
	     printf("a3[%d]=%d, ", i, a3[i]);
  printf("array4\n");
	    for(i=0;i!=10;i++)
	      printf("a4[%d]=%d, ", i, a4[i]);
 // part b
	    for(i=0;i!=20;i++)
	      {if((i%2)==0) a5[i]=a1[i/2];
		if((i%2)!=0) a5[i]=a2[i/2];}
  printf("array5\n");
            for(i=0;i!=20;i++)
	      printf("a5[%d]=%d,",i,  a5[i]);
 //part c
            for(i=0;i!=20;i++)
	      {if((i%2)==0) a6[i]=a3[9-(i/2)];
	    if((i%2)!=0) a6[i]=a4[i/2];}
  printf("\narray6");
            for(i=0;i!=20;i++)
	      printf("a6[%d]=%d, ",i, a6[i]);
 //part d
            for(i=0;i!=40;i++)
	      {if((i%2)==0) a7[i]=a5[19-i/2];
		if((i%2)!=0) a7[i]=a6[19-i/2];}
  printf("array 7\n");
            for(i=0;i!=40;i++)
	      printf("a7[%d]=%d, ",i, a7[i]);
  return 0;
}
