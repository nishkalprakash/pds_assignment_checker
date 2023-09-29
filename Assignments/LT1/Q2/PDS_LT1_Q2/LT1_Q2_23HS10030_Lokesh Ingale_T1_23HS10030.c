//Roll no:23HS10030
//Name:Lokesh Nitin Ingale
#include<stdio.h>
#include<math.h>
int main(){
  int i,a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
   for(int i=0;i<10;i++)
     a1[i]=(10+rand()%21);
   for(int i=0;i<10;i++)
     a2[i]=(30+rand()%31);
   for(int i=0;i<10;i++)
     a3[i]=(60+rand()%31);
   for(int i=0;i<10;i++)
     a4[i]=(90+rand()%31);
   for(int i=0;i<10;i++)
     printf("a1[%d]=%d,",i,a1[i]);
   for(int i=0;i<10;i++)
     printf("a2[%d]=%d,",i,a2[i]);
   for(int i=0;i<10;i++)
     printf("a3[%d]=%d,",i,a3[i]);
    for(int i=0;i<10;i++)
     printf("a4[%d]=%d,",i,a4[i]);
    for(int i=0;i<10;i++){
      a5[i*2]=a1[i];
    }
     for(int i=0;i<10;i++){
       a5[(i*2)+1]=a2[i];
    }
     for(int i=0;i<10;i++)
       printf("a1[%d]=%d,",i,a1[i]);
     for(int i=0;i<10;i++)
      printf("a2[%d]=%d,",i,a2[i]);
     for(int i=0;i<20;i++)
      printf("a5[%d]=%d,",i,a5[i]);
     for(int i=0;i<10;i++)
      a6[19-(2*i)-1]=a3[i];
     for(int i=0;i<10;i++)
      a6[(2*i)+1]=a4[i];
     for(int i=0;i<10;i++)
      printf("a3[%d]=%d,",i,a3[i]);
     for(int i=0;i<10;i++)
       printf("a4[%d]=%d,",i,a4[i]);
     for(int i=0;i<20;i++)
       printf("a6[%d]=%d,",i,a6[i]);
     for(int i=0;i<20;i++)
       a7[39-(2*i)-1]=a5[i];
     for(int i=0;i<20;i++)
       a7[(2*i)+1]=a6[19-i];
     for(int i=0;i<20;i++)
       printf("a5[%d]=%d,",i,a5[i]);
     for(int i=0;i<20;i++)
       printf("a6[%d]=%d,",i,a6[i]);
     for(int i=0;i<40;i++)
       printf("a7[%d]=%d,",i,a7[i]);      
       
	  
return 0;
}
