//name: akella satya hanuma saketh
//roll no.:23EC10006
#include<stdio.h>
#include<stdlib.h>

int main(){
  int a1[10];
  int a2[10];
  int a3[10];
  int a4[10];
  int a5[20];
  int a6[20];
  int a7[40];
  int x,y,z,a;
   int j = 9;
  for(int i=0;i<10;i++){
    x=rand()%21;
    x=x+10;   
    a1[i]=x;
  }
  for(int i=0;i<10;i++){
    y=rand()%31;
    y=y+30;
    a2[i]=y;
  }
  for(int i=0;i<10;i++){
    z=rand()%31;
    z=z+60;
    a3[i]=z;
  }
  for(int i=0;i<10;i++){
    a=rand()%31;
    a=a+90;
    a4[i]=a;
  }
  for(int i=0;i<10;i++){
    printf("a1[%d]=%d,",i,a1[i]);
  }
  printf("\n");
   for(int i=0;i<10;i++){
     printf("a2[%d]=%d,",i,a2[i]);
  }
   printf("\n");
    for(int i=0;i<10;i++){
      printf("a3[%d]=%d,",i,a3[i]);
  }
    printf("\n");
     for(int i=0;i<10;i++){
       printf("a4[%d]=%d,",i,a4[i]);
  }
     printf("\n");
     for(int i=0;i<10;i++){
       a5[2*i]=a1[i];
     }
     for(int i=0;i<10;i++){
       a5[2*i+1]=a2[i];
     }
      for(int i=0;i<10;i++){
    printf("%d, ",a1[i]);
  }
      printf("\n");
       for(int i=0;i<10;i++){
    printf("%d, ",a2[i]);
  }
       printf("\n");
       for(int i=0;i<20;i++){
	 printf("%d ",a5[i]);
       }
       printf("\n");
      
       for(int i=0;i<10;i++){
         a6[2*i]=a3[j];
	 j--;
       }
      
       for(int i=0;i<10;i++){
         a6[2*i+1]=a4[i];
	
       }
       for(int i=0;i<10;i++){
         printf("%d,  ",a3[i]);
       }
       printf("\n");
         for(int i=0;i<10;i++){
         printf("%d,  ",a4[i]);
       }
       printf("\n");
         for(int i=0;i<20;i++){
         printf("%d,  ",a6[i]);
       }
       printf("\n");
       
       for(int i=0;i<20;i++){
	 a7[2*i]=a5[19-i];
	
       }
       
       for(int i=0;i<20;i++){
	 a7[2*i+1]=a6[19-i];
	
       }
         for(int i=0;i<20;i++){
         printf("%d,  ",a5[i]);
       }
       printf("\n");
         for(int i=0;i<20;i++){
         printf("%d,  ",a6[i]);
       }
       printf("\n");
         for(int i=0;i<40;i++){
         printf("%d,  ",a7[i]);
       }
       printf("\n");
       
      
  return 0;
}
