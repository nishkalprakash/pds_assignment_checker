//Roll No.:23IE10011
//Name:Avik Ghosh
#include <stdio.h>
#include <stdlib.h>

int main(){
  int a1[10],a2[10],a3[10],a4[10];
  int a5[20],a6[20],a7[40];
  int i,m=0,n=1;
    for(i=0;i<10;i++){
      a1[i]= (rand()%21)+10;
      a2[i]= (rand()%31)+30;
      a3[i]= (rand()%31)+60;
      a4[i]= (rand()%31)+90;
    }
  printf("Display of a1 and a2");
   for(i=0;i<10;i++)
     printf("a1[%d] = %d, ",i,a1[i]);
   printf("\n");
   for(i=0;i<10;i++)
     printf("a2[%d] = %d, ",i,a2[i]);
   for(i=0;i<10;i++){
     a5[m] = a1[i];
     m=m+2;}
    for(i=0;i<10;i++){
      a5[n] = a2[i];
      n=n+2;}
    printf("Contents of a1\n");
     for(i=0;i<10;i++)
       printf("%d , ",a1[i]);
     printf("\n");
     printf("Contents of a2\n");
     for(i=0;i<10;i++)
       printf("%d , ",a2[i]);
     printf("\n");
     printf("Contents of a5\n");
     for(i=0;i<20;i++)
       printf("%d , ",a5[i]);
     printf("\n");

     m = 18;
     for(i=0;i<10;i++){
       a6[m] = a3[i];
       m=m-2;}
     
     n=1;
     for(i=0;i<10;i++){
       a6[n]= a4[i];
       n=n+2;}

     printf("Contents of a3\n");
     for(i=0;i<10;i++)
       printf("%d , ",a3[i]);
     printf("\n");
       printf("Contents of a4\n");
     for(i=0;i<10;i++)
       printf("%d , ",a4[i]);
     printf("\n");
     printf("Contents of a6\n");
     for(i=0;i<20;i++)
       printf("%d , ",a6[i]);
     printf("\n");

     m=0;
     for(i=19;i>=0;i--){
       a7[m]= a5[i];
       m=m+2;}
     n=39;
     for(i=0;i<20;i++){
       a7[n]= a6[i];
       n=n-2;}
      printf("Contents of a5\n");
     for(i=0;i<20;i++)
       printf("%d , ",a5[i]);
     printf("\n");
      printf("Contents of a6\n");
     for(i=0;i<20;i++)
       printf("%d , ",a6[i]);
     printf("\n");
      printf("Contents of a7\n");
     for(i=0;i<40;i++)
       printf("%d , ",a7[i]);
     printf("\n");
     return 0;
}




     
       
       
    
