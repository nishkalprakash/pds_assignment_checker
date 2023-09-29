//Roll No. 23MA10056
//Name: Shantanu

#include<stdio.h>
#include<stdlib.h>

int main()
{  // Part A
  int i,u1=30,l1=10,u2=60,l2=30,u3=90,l3=60,u4=120,l4=90,a1[10],a2[10],a3[10],a4[10], a5[20], a6[20], a7[40];

  for(i=0;i<10;i++)
    a1[i] =( rand()%(u1-l1+1))+l1 ;      // Filling the array1 with random integers in the given range 

  for(i=0;i<10;i++)
     a2[i] =( rand()%(u2-l2+1))+l2 ;           // Filling the array2 with random integers in the given range 


  
   for(i=0;i<10;i++)                                  
     a3[i] =( rand()%(u3-l3+1))+l3 ;       // Filling the array3 with random integers in the given range

   for(i=0;i<10;i++)
     a4[i] =( rand()%(u4-l4+1))+l4 ;            // Filling the array4 with random integers in the given range

   for(i=0;i<10;i++)
     printf("a1[%d]=%d",i,a1[i]);

   printf("\n");
   
   for(i=0;i<10;i++)
     printf("a2[%d]=%d",i,a2[i]);

   printf("\n");			    

   for(i=0;i<10;i++)
     printf("a3[%d]=%d",i,a3[i]);

   printf("\n");

   for(i=0;i<10;i++)
      printf("a4[%d]=%d",i,a4[i]);

   printf("\n");

   
                            
   //Part B

   for(i=0;i<10;i++)
	 {                                                 //filling in the array5 as per given conditions
	   a5[2*i]=a1[i];                                                        
	   a5[(2*i)+1]=a2[i];                                             
	 }

       for(i=0;i<10;i++);
       printf("a1[%d]=%d",i,a1[i]);

       printf("\n");

        for(i=0;i<10;i++);
       printf("a2[%d]=%d",i,a2[i]);

       printf("\n");

       
       for(i=0;i<20;i++);
       printf("a5[%d]=%d",i,a5[i]);

       printf("\n");

       // Part C
       

       for(i=0;i<10;i=i++)
	 {	 a6[2*(10-i)-2]=a3[i];                     //filling the array6 as per given condidtion
	   a6[(2*i)+1]=a4[i];
	 }

       for(i=0;i<10;i++)
	 printf("a3[%d]=%d",i,a3[i]);
       
       printf("\n");

        for(i=0;i<10;i++)
	 printf("a4[%d]=%d",i,a4[i]);


	printf("\n");


	 for(i=0;i<20;i++)
	 printf("a6[%d]=%d",i,a6[i]);

	 printf("\n");

	 // Part D

	 

	 for(i=0;i<20;i=i++)
	   {
	     a7[2*(20-i)-2]=a5[i];

	   a7[2*(20-i)-1]=a6[i];
	   }

	 for(i=0;i<20;i++)
	   printf("a5[%d]=%d",i,a5[i]);

	 printf("\n");


	 for(i=0;i<20;i++)
	   printf("a6[%d]=%d",i,a6[i]);

	 printf("\n");


	  for(i=0;i<40;i++)
	   printf("a7[%d]=%d",i,a7[i]);

	 printf("\n");

	 return 0;
}

	 

	 
