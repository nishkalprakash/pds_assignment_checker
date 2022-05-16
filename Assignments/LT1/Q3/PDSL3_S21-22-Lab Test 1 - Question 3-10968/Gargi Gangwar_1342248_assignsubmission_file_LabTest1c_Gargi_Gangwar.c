#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    srand(time(0));
    int numA,numB;
    float a,b;
    int n,i,scoreA,scoreB,count,badgeA,badgeB,pointA,pointB,digA,digB,sumA,sumB,totA,totB;
    totA=0.0; totB=0.0;
    printf("Enter number of rounds");
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        numA = (rand() % (1000 - 5 + 1)) + 5;
        numB = (rand() % (1000 - 5 + 1)) + 5;

        a=(numA*100)/10;
        b=(numB*100)/10;
        while(a>=0)
        {
            digA+=1;
            sumA+=a;
            a=a/10;
        }
        while(b>=0)
        {
            digB+=1;
            sumB+=b;
            b=b/10;
        }
        if(digA>digB)
        {
         pointA=digA;
         badgeA+=1;
         badgeB+=0;
        }
        else if(digB>digA)
        {
          pointB=digB;
           badgeA+=0;
         badgeB+=1;
        }
        else
        {
            if(sumA>sumB)
            {
               pointA=sumA;
               badgeA+=1;
               badgeB+=0;
            }
            else
            {
               pointB=sumB;
               badgeA+=0;
               badgeB+=1;
            }

        }
        if(pointA>pointB)
            printf("A wins round %d",i);
        else
            printf("Bwins round %d",i);
         totA+=pointA;
         totB+=pointB;

    }
    scoreA= totA*badgeA;
    scoreB= totB*badgeB;
    printf("A's total score: %d",scoreA);
    printf("B's total score: %d",scoreB);

}
