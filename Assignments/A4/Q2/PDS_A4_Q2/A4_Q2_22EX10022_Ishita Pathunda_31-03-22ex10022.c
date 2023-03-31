/*
section 2
roll no: 22ex10022
name: ishita pathunda
assignment no. 4
Description:*/
#include<stdio.h>
int main()
{
    int N;
    printf("enter number of students:");
    scanf("%d",&N);
    int attendence,ct,midsem,endsem;

    for(int i=1; i<=N; i++){
        printf("enter marks for student %d\n",i);
        printf("Attendence:");
        scanf("%d",&attendence);
        printf("classtest:");
        scanf("%d",&ct);
        printf("midsem:");
        scanf("%d",&midsem);
        printf("endsem:");
        scanf("%d",&endsem);
        double totalmarks;
        totalmarks=((attendence/4)+ct+(midsem/2)+(endsem/(2.5)));
        if(totalmarks>=90){
            printf("grade Ex\n");
        }
        else if(totalmarks<90 && totalmarks>=80){
            printf("grade A\n");
        }
        else if(totalmarks<80 && totalmarks>=70){
            printf("grade B\n");
        }
        else if(totalmarks<70 && totalmarks>=60){
            printf("grade c\n");
        }
        else if(totalmarks<60 && totalmarks>=50){
            printf("grade D\n");
        }
        else if(totalmarks<50 && totalmarks>=35){
            printf("grade p\n");
        }
        else if(totalmarks<35 && totalmarks>=0){
            printf("fail\n");
        }
        else if(totalmarks<0){
            printf("invalid marks enter");
        }

        printf("student %d total marks %lf",i,totalmarks);




    }
    printf("\n");
    return 0;

}
