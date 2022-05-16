//Name:-Shubham Gajanan Warkad. 
//Roll No.-21ME30072.
//Lab test 1  Question no.3
#include<stdio.h>
#include<time.h> 
#include<stdlib.h>

 
int main()
{

    srand(time(0));
    int n,numA,numB,countA=0,countB=0,pointsA=0,pointsB=0,badgeA=0,badgeB=0,sumA,sumB;
    printf("Number of rounds:");
    scanf("%d",&n);
    for (int i=0;i<n;){

        numA = (rand() % (1000 - 5 + 1)) + 5;
        numB = (rand() % (1000 - 5 + 1)) + 5;
        do {
            numA /= 10;
            countA++;
            } while (numA != 0);
        do {
            numB /= 10;
            countB++;
            } while (numB != 0); 
          if (countA>countB) {
              printf("Round number %d\n",i+1);
            printf("A's number is %d        B's number is %d\n",numA,numB);
            printf("A's point:%d       B's point:%d\n",countA,countB);
            printf("A's badge:1        B's badge:0\n");
            printf("A wins the round %d\n",i+1);
            badgeA++;
            pointsA+=countA;
            i++;
          }    
          else if (countB>countA) {
              printf("Round number %d\n",i+1);
            printf("A's number is %d        B's number is %d\n",numA,numB);
            printf("A's point:%d       B's point:%d\n",countA,countB);
            printf("A's badge:0        B's badge:1\n");
            printf("B wins the round %d\n",i+1);
            badgeB++;
            pointsB+=countB;
            i++;
          }
          else if (countA==countB)
          {
            continue;
          }
           
           }
    int totalpointsA,totalpointsB;
    totalpointsA=pointsA*badgeA;
    totalpointsB=pointsB*badgeB;
    if (totalpointsA>totalpointsB){
        printf("A is the winner.");
    }
    else if (totalpointsA<totalpointsB){
        printf("B is the winner.");
    }

            




        
    

return 0;
}