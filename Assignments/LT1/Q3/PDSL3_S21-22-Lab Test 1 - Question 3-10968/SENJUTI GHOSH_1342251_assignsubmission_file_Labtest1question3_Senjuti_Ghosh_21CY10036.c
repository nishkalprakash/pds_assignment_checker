/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main(){
srand(time(0));
int n,x,y,numA,numB,sumA,sumB,countA,countB,count,badge1A,badge1B,pointA,pointB,totalpointA,totalpointB;
printf("Enter number of rounds");
scanf("%d",&n);
count=1;
badge1A=0;badge1B=0;countA=0;countB=0;sumA=0;sumB=0;pointA=0;pointB=0;
while (count<=n){
      int numA=(rand()%(1000-5+1))+5;
      printf("number A:%d\n",numA);
      int numB=(rand()%(1000-5+1))+5;
      printf("number B:%d\n",numB);
      while (numA!=0){
             x=numA%10;
             sumA+=x;
             numA=numA/10;
             countA+=1;
             }
      while (numB!=0){
             x=numB%10;
             sumB+=x;
             numB=numB/10;
             countB+=1;
             }
      if (countA>countB){
          badge1A+=1;
          pointA+=countA;
          pointB+=countB;
          printf("pointA%d BadgeA=1\n",countA);
          printf("pointB%d BadgeB=0\n",countB);
          printf("A wins round %d\n",count);}
      else if (countB>countA){
               badge1B+=1;
               pointA+=countA;
               pointB+=countB;
               printf("pointA%d BadgeA=0\n",countA);
          printf("pointB%d BadgeB=1\n",countB);
          printf("B wins round %d\n",count);}
      else if (countA==countB){
               if (sumA>sumB){
                   badge1A+=1;
                   pointA+=sumA;
                   pointB+=sumB;
                   printf("pointA%d BadgeA=1\n",sumA);
          printf("pointB%d BadgeB=0\n",sumB);
           printf("A wins round %d\n",count) ;       }
               else if (sumB>sumA){
                        badge1B+=1;
                        pointA+=sumA;
                        pointB+=sumB;
                        printf("pointA%d BadgeA=0",sumA);
          printf("pointB%d BadgeB=1\n",sumB);
          printf("B wins round %d\n",count);}
                   }

      count++;

}
totalpointA=badge1A*pointA;
totalpointB=badge1B*pointB;
if (totalpointA>totalpointB){
    printf("A wins");}
else if (totalpointB>totalpointA){
         printf("B wins");}
else {
      printf("It is a draw");}
return 0;
}
