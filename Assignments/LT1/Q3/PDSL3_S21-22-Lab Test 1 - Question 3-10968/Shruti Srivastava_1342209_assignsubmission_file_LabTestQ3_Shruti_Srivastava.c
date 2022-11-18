/* Shruti Srivastava
   21EE30025
   Electrical Engg. Dual Degree
   Code Blocks
   Windows 10
   Section 03 */
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
   srand(time(0));
   int n;
   printf("Number of rounds:- \n");
   scanf("%d",&n);
   int sumbadg1=0,sumbadg2=0;
   int sumpoin1=0,sumpoin2=0;
   int tot1,tot2;
   for(int i=1;i<=n;i++){
    printf("Round-%d:-  \n",i);
    int num1,num2,bg1,bg2;
    num1= (rand()%(1000-5+1))+5;
    num2= (rand()%(1000-5+1))+5;
    printf("A's number :- %d\t\t\t",num1);
    printf("B's number :- %d\n",num2);
    int k1=0;
    while(num1/10!=0){
    k1++;
    num1=num1/10;
    }
    int k2=0;
    while(num2/10!=0){
    k2++;
    num2=num2/10;
    }
    if(k1>k2){
       bg1=1;
       bg2=0;
       sumbadg1+=1;
       printf("A's point : %d\t\t\t",k1);
       printf("B's point : %d\n",k2);
       printf("A's badge : %d\t\t\t",bg1);
       printf("B's badge : %d\n",bg2);
       sumpoin1+=k1;
       sumpoin2+=k2;
       printf("------A wins Round%d---------\n",i);
     }else if(k2>k1){
       bg1=0;
       bg2=1;
       sumbadg2+=1;
       printf("A's point : %d\t\t\t",k1);
       printf("B's point : %d\n",k2);
       printf("A's badge : %d\t\t\t",bg1);
       printf("B's badge : %d\n",bg2);
       sumpoin1+=k1;
       sumpoin2+=k2;
       printf("------B wins Round%d---------\n",i);
     }else if(k2==k1){
        int sum1=0;
        while(num1%10!=0){
         sum1=sum1+num1%10;
         num1=num1/10;
       }
        int sum2=0;
       while(num2%10!=0){
         sum2=sum2+num2%10;
         num2=num2/10;
        }
        if(sum1>sum2){
            bg1=1;
            bg2=0;
            sumbadg1+=1;
            sumpoin1+=sum1;
            sumpoin2+=sum2;
            printf("A's point : %d\t\t\t",sum1);
            printf("B's point : %d\n",sum2);
            printf("A's badge : %d\t\t\t",bg1);
            printf("B's badge : %d\n",bg2);
            printf("------A wins Round%d---------\n",i);
        }else{
            bg1=0;
            bg2=1;
            sumbadg2+=1;
            sumpoin1+=sum1;
            sumpoin2+=sum2;
            printf("A's point : %d\t\t\t",sum1);
            printf("B's point : %d\n",sum2);
            printf("A's badge : %d\t\t\t",bg1);
            printf("B's badge : %d\n",bg2);
            printf("------B wins Round%d---------\n",i);
        }
     }
     printf("\n-------------------------------------------------------------\n");
   }
   printf("Final Result => A's total score: %d, B's Total score: %d\n",sumbadg1*sumpoin1,sumbadg2*sumpoin2);
   if(sumbadg1*sumpoin1>sumbadg2*sumpoin2){
     printf("------A wins the game---------\n");
   }else{
     printf("------B wins the game---------\n");
   }
   return 0;
}
