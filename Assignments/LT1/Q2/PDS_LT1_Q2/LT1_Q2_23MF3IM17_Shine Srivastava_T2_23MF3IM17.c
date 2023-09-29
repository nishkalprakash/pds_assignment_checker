//Roll no. = 23MF3IM17
//Name = Shine Srivastava

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
  for(int i =0;i<10;i++)
    {
      a1[i] = rand()% 30 + 1;
      a2[i] = rand()% 31 + 30;
      a3[i] = rand()% 31 + 60;
      a4[i] = rand()% 31 + 90;
    }
       for(int k=0;k<10;k++)
	 {
	   printf("a1[%d] = %d ,  ",k,a1[k]);
	 }
       printf("\n\n");

       for(int k=0;k<10;k++)
	 {
	   printf("a2[%d] = %d ,  ",k,a2[k]);
	 }
       printf("\n\n");

       for(int k=0;k<10;k++)
	 {
	   printf("a3[%d] = %d ,  ",k,a3[k]);
	 }
       printf("\n\n");

       for(int k=0;k<10;k++)
	 {
	   printf("a4[%d] = %d ,  ",k,a4[k]);
	 }
       printf("\n\n");

       for(int i=0;i<10;i++)
	 {
	   a5[(2*i)] = a1[i];
	   a5[(2*i)+1]=a2[i];
	 }
       for(int i=0;i<20;i++)
	 {
	   printf("a5[%d] = %d  ",i,a5[i]);
	 }
       printf("\n\n");


        for(int i=0;i<10;i++)
	 {
	   a6[2*i] = a3[9-i];
	   a6[(2*i)+1]=a4[i];
	 }
       for(int i=0;i<20;i++)
	 {
	   printf("a6[%d] = %d  ",i,a6[i]);
	 }
       printf("\n\n");




        for(int i=0;i<20;i++)
	 {
	   a7[(2*i)] = a5[(19-i)];
	   a7[(2*i)+1]=a6[(19-i)];
	 }
       for(int i=0;i<40;i++)
	 {
	   printf("a7[%d] = %d  ",i,a7[i]);
	 }
       printf("\n\n");


       
       
	   
}
  
