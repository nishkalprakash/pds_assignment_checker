//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<stdlib.h>
int main(){
  int a1[10],a2[10],a3[10],a4[10];
  int a5[20],a6[20];
  int a7[40];
  for(int i=0;i<10;i++){
    a1[i] = 10 + rand()%21;
  }
   for(int j=0;j<10;j++){
    a2[j] = 30 + rand()%31;
  }
    for(int k=0;k<10;k++){
    a3[k] = 60 + rand()%31;
  }
     for(int l=0;l<10;l++){
    a4[l] = 90 + rand()%31;
  }
     for(int a=0;a<10;a++){
       a5[2*a]=a1[a];
     }
     for(int b=0;b<10;b++){
       a5[2*b+1]=a2[b];
     }
     printf("The contents of a1 are :\n");
     for(int p=0;p<10;p++){
       printf("%d\n",a1[p]);
     }
      printf("The contents of a2 are :\n");
     for(int q=0;q<10;q++){
       printf("%d\n",a2[q]);
     }

      printf("The contents of a5 are :\n");
     for(int r=0;r<20;r++){
       printf("%d\n",a5[r]);
     }
      for(int a=9;a>=0;a--){
	a6[(9-a)*2]=a3[a];
     }
     for(int b=0;b<10;b++){
       a6[2*b+1]=a4[b];
     }
     printf("The contents of a3 are :\n");
     for(int p=0;p<10;p++){
       printf("%d\n",a3[p]);
     }
      printf("The contents of a4 are :\n");
     for(int q=0;q<10;q++){
       printf("%d\n",a4[q]);
     }

      printf("The contents of a6 are :\n");
     for(int r=0;r<20;r++){
       printf("%d\n",a6[r]);
     }
     for(int a=19;a>=0;a--){
	a7[(19-a)*2]=a5[a];
     }
     for(int b=0;b<20;b++){
       a7[39-2*b]=a6[b];
     }
     printf("The contents of a7 are:\n");
     for(int i=0;i<40;i++){
       printf("%d\n",a7[i]);
     }
     
     
     return 0;
}
     
     
     
