//roll no;23CE30018
//name;karina dhaka
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i, a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
  for(i=0;i<10;i++){
   
  a1[i]=rand()%30+1;
   printf("a1[%d]=%d ",i,a1[i]);
  }
   printf("\n");
   for(i=0;i<10;i++){
  a2[i]=rand()%60+1;
   printf("a2[%d]=%d ",i,a2[i]);
   }
   printf("\n");
   
    for(i=0;i<10;i++){
   a3[i]=rand()%90+1;
    printf("a3[%d]=%d ",i,a3[i]);
    }
     printf("\n");
     for(i=0;i<10;i++){
   a4[i]=rand()%120+1;
 
    printf("a4[%d]=%d ",i,a4[i]);
   
  }
   printf("\n");


     //part B
     for(i=0;i<20;i++){
       if(i%2==0){
	 a5[i]=a1[i];
       }
	 else
	   a5[i]=a2[i];
       printf("a5[%d]=%d",i,a5[i]);
     }
       printf("\n");
     //part C
      for(i=0;i<20;i++){
       if(i%2==0){
      a6[i]=a3[9-i];
       }
       else
	 a6[i]=a4[i];
        printf("a6[%d]=%d",i,a6[i]);
      }
         printf("\n");

	 //part D
	  for(i=0;i<40;i++){
       if(i%2==0){
      a7[i]=a5[19-i];
       }
        else
	 a7[i]=a6[19-i];
        printf("a7[%d]=%d",i,a7[i]);
      }
      
	 
    return 0;
}
    
