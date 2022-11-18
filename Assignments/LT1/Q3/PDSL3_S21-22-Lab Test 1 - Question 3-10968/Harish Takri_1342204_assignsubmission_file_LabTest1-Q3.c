/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand(time(0));
    int n,A_num,B_num,A_points=0,B_points=0,A_badge=0,B_badge=0;
    printf("Enter number of rounds :");
    scanf("%d",&n);
    int A_d,B_d,temp,A_sum,B_sum,i=1;
    while(i<=n){
    A_num=(rand()%(1000-5+1))+5;
    B_num=(rand()%(1000-5+1))+5;
    printf("A's number: %d         B's number: %d\n",A_num,B_num);
    A_d=0;
    A_sum=0;
    temp=A_num;
    while(temp>0){
    A_d++;
    A_sum+=temp%10;
    temp=temp/10;
    }
    B_d=0;
    B_sum=0;
    temp=B_num;
    while(temp>0){
    B_d++;
    B_sum+=temp%10;
    temp=temp/10;
    }
    if(A_d!=B_d){
        A_points+=A_d;
        B_points+=B_d;
        printf("A's point: %d     B's point: %d\n",A_d,B_d);
        if(A_d>B_d){
            A_badge++;
            printf("-- A wins Round %d --\n",i);
        }
        else{
            printf("-- b wins Round %d --\n",i);
            B_badge++;
            }
        }
        else{
            A_points+=A_sum;
            B_points+=B_sum;
            printf("A's point: %d           B's point: %d\n",A_sum,B_sum);
            if(A_sum>B_sum){
                printf("-- A wins Round %d --\n",i);
				A_badge++;
            }
            else{
                printf("-- b wins Round %d --\n",i);
                B_badge++;
                }
        }
        i++;
    }
    printf("A's total score: %d     B's total score: %d\n",A_points*A_badge,B_points*B_badge);
	if(A_points*A_badge > B_points*B_badge){
		printf("-- A wins the game --\n");
    }
    else{
        printf("-- B wins the game --\n");
}
}
