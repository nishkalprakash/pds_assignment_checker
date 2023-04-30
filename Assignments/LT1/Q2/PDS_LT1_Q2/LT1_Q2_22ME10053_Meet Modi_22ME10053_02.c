// LAB TEST QUESTION 2

#include<stdio.h>
#include<math.h>

int main(){

    //Q1)a READING INPUT FROM USER

    int n;
    scanf("%d",&n);
    int temp1=n,temp2=n,temp4=n,temp3=n,temp5=n;


    // Q2)b  PRINTING THE SUB INTEGERS OF THE NUMBER GIVEN

    if(temp1<0 || temp2<0 || temp4<0){
        temp1 =-temp1;
        temp2 =-temp2;
        temp4 =-temp4;
    }
    int r,ctr=0,i,num1=1,num2=1;

    r =temp1 % 10;
    while(temp5 !=0){
        temp5=temp5 /10;
        ctr++;
    }
    for(i=1;i<ctr;i++) num1 *=10;
    for(i=1;i<=ctr;i++) num2 *=10;

    if(r%2==1){
        printf("Most significant to the least significant digits : \n");
       for(i=1;i<=ctr;i++){
            printf(" %d,",temp2/num1);
            num1 /=10;
           if(n>0) temp2=n;
           else temp2=-n;
       }
    }

    else{
        printf("Least significant to the most significant digits : \n");
     for(i=1;i<=ctr;i++){
        printf(" %d,",temp4%num2);
        num2 /=10;
     }
    }

    printf("\n");

    // Q2)c REVERSE OF NUMBERS AND ITS DIFFERENCE WITH THE ORIGINAL NUMBER

    int rem;
    int reverse=0;
    while(temp3 !=0){
        rem = temp3%10;
        reverse = reverse*10 + rem;
        temp3=temp3/10;
    }
    printf("Reverse Number = %d \n",reverse);
    int diff = n-reverse;
    if(diff<0) diff = -diff;
    printf("Difference between the Reverse number and original number = %d",diff);


    return 0;
}
