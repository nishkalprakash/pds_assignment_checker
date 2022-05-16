#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int n,a,b,i,count1=0, count2=0,pointsa=0,pointsb=0;
    float sum1, sum2;
    int num2 = (rand() % (1000 - 5 + 1)) + 5;
    int num1 = (rand() % (1000 - 5 + 1)) + 5;

    printf("enter n: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
         num1= a;
        num2= b;
        printf("A's number:%d  ",num1);
        printf("B's number: %d\n",num2);
        while(a>0)
        {
            a=a/10;
            count1++;
        }
        while(b>0)
        {
            b=b/10;
            count2++;
        }
        sum1=a/100+((a%100)/10)+(a%10);
        sum2=b/100+((b%100)/10)+(b%10);
        if(count1 = count2)
        {
            printf("A point %f" ,sum1);
            printf("B point %f\n",sum2);
            if( sum1>sum2)
        {
            printf("A badge= 1 ");
                printf("b badge= 0\n");
            }
            else
            {
                printf("A badge= 0 ");
                printf("b badge= 1\n");
            }
            pointsa=pointsa+sum1;
            pointsb=pointsb+sum2;
        }
        else
        {
            printf("A point %d  ",count1);
            printf("B point %d\n",count2);
            if(count1>count2)
            {
                printf("A badge= 1 ");
                printf("b badge= 0 \n");
            }
            else
            {
                printf("A badge= 0  ");
                printf("b badge= 1 \n");
            }
            pointsa=pointsa+count1;
            pointsb=pointsb+count2;
        }

    }
    printf("final points A:%d B:%d",pointsa,pointsb);
    if(pointsa>pointsb){
        printf("A wins the game");
    }
    else{
        printf("B wins the game");
    }
}
