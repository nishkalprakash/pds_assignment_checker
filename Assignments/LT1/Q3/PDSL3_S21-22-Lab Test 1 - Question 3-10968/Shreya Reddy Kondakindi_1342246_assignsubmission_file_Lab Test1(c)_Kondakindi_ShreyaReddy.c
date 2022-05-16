/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
Package:CodeBlocks
Operating system:Windows*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand(time(0));
    int ppl=2,rounds,temp,count=0,countA,countB,badgeA=0,badgeB=0,sum=0,m,numA,numB,sumA,sumB;
    printf("Number of rounds:");
    scanf("%d",&rounds);
    for(int j=0;j<rounds;j++){
        for(int i=0;i<ppl;i++){
            int num=(rand()%(1000-5+1))+5;
            temp=num;
            while(temp!=0){
                temp=temp/10;
                ++count;
            }
            if(i==0){
                numA=num;
                countA=count;
                printf("number of digits in %d of A is %d \n",num,count);
                printf("count of A is %d\n",count);
            }
            else{
                numB=num;
                countB=count;
                printf("number of digits in %d of B is %d\n",num,count);
                printf("count of B is %d\n",count);
            }
            count=0;

        }
        if(countA>countB){
            badgeA++;
            badgeB--;
            printf("number of badges of A is %d\n",badgeA);
        }
        else if(countB>countA){
            badgeB++;
            badgeA--;
            printf("number of badges of B is %d\n",badgeB);
        }
        else if(countA==countB){
            while(numA>0){
                m=numA%10;
                sum=sum+m;
                numA=numA/10;
            }
            sumA=sum;
            printf("Sum of A is =%d\n",sum);
            while(numB>0){
                m=numB%10;
                sum=sum+m;
                numB=numB/10;
            }
            sumB=sum;
            printf("sum of B is %d\n",sum);
            if(sumA>sumB){
                badgeA++;
                badgeB--;
                printf("number of badges f A is:%d\n",badgeA);
            }
            else if(sumB>sumA){
                badgeB++;
                badgeA--;
                printf("number of badges of B is %d\n",badgeB);
            }
        }
    }
    if(badgeA>badgeB){
            printf("A has won\n");
    }
    else{
        printf("B has won\n");
    }
    return 0;

}
