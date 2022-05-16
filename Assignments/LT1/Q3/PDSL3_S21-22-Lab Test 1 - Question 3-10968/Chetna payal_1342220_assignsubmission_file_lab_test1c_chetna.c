#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

/*Name-Chetna
  section-3
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/
int main()
{
    srand(time(0));
    int rounds,sum,AB=0,BB=0,AP=0,BP=0,tota,totb;
    printf("Enter rounds: \n");
    scanf("%d",&rounds);
    for(int i=1;i<=rounds;i++)
    {
        int count1=0,count2=0,sum1=0,sum2=0;
        printf("Round %d\n",i);
        int num = (rand() % (1000 - 5 + 1)) + 5;
        int num2= (rand() % (1000 - 5 + 1)) + 5;
        printf("A's number : %d ; B's Num:%d \n",num,num2);
        while(num>0)
        {
            int x=num%10;
            sum1+=x;
            num=num/10;


            count1++;
        }
        while(num2>0)
        {int y=(num2) %10;
            sum2+=y;
            num2=num2/10;

            count2++;
        }

        if(count1>count2)
        {
            printf("A's points=1 , B's points=0\n");
            printf("A's badge=1 , B's badge=0");
            AB+=1;AP+=1;
            printf("A wins round %d\n",i);
        }else if(count1<count2)

        {
            printf("A's points=0 , B's points=1\n");
            printf("A's badge=0 , B's badge=1\n");
            BB=+1;BP=+1;
            printf("B wins round %d\n",i);
        }else{
        if(sum1>sum2)
        {
            printf("A's pointses=%d , B's points=%d\n",sum1,sum2);
            printf("A's badge=1 , B's badge=0\n");
            AP=+sum1;AB+=1;
            printf("A wins round %d\n",i);
        }
        else
        {
            printf("A's pointses=%d , B's points=%d\n",sum1,sum2);
            printf("A's badge=0 , B's badge=1\n");
            BP=+sum2;BB+=1;
            printf("B wins round %d\n",i);
        }}
printf("\n");
    }
tota=AP*AB;
    totb=BB*BP;
    printf("A=%d , B=%d\n",tota,totb);
    if(tota>totb)
    {
        printf("A winner\n");
    }
    else
    {
        printf("B winner\n");    }

}
