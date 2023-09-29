//23AE10036
//T.sritan

#include<stdio.h>
#include<stdlib.h>
int main(){
int a1[10],a2[10],a3[10],a4[10];
int a5[20],a6[20],a7[40];

 for(int i=0;i<10;i++){
   a1[i]=(rand()%21)+10;
   a2[i]=(rand()%31)+30;
   a3[i]=(rand()%31)+60;
   a4[i]=(rand()%31)+90;
   
 }


 for(int i=0;i<10;i++){
   printf("a1[ %d ]=%d  ",i,a1[i]);
    }

 for(int i=0;i<10;i++){
 printf("a2 [ %d ]=%d  ",i,a2[i]);
 }

for(int i=0;i<10;i++){
 printf("a3[ %d ]=%d  ",i,a3[i]);
 }

for(int i=0;i<10;i++){
 printf("a4[ %d ]=%d  ",i,a4[i]);

 }


return 0;
}