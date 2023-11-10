#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct stud{
    unsigned int roll;
    char name[20];
    int points;
    int point;
}std;
int n1,n2,n3,n4;
std badminton[10];
std chess[10];
std carrom [10];
std tt[10];
std tmp[30];
int max(int a, int b, int c, int d){
    int sum =0;
    int arr[4] = {a,b,c,d};
    for(int i=0; i<3; i++){
        for(int j=0; j<=2; j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    sum = sum + (arr[1]+arr[2]+arr[3]);
    return sum;
}
int Max(int a, int b, int c, int d){
    int sum =0;
    int arr[4] = {a,b,c,d};
    for(int i=0; i<3; i++){
        for(int j=0; j<=2; j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    sum = sum + (arr[2]+arr[3]);
    return sum;
}
int MAX(int a, int b, int c){
    int sum =0;
    int arr[3] = {a,b,c};
    for(int i=0; i<3; i++){
        for(int j=0; j<=2; j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    sum = sum + (arr[1]+arr[2]);
    return sum;
}
void findRunnersUp(){
    int x=0;
    for(int m=0; m<n1; m++){
    for(int i=0; i<n1; i++){
        for(int j=i+1; j<n2; j++){
            for(int k=j+1; k<n3;k++){
                for(int l=k+1; l<n4; l++){
                        if(badminton[i].roll==chess[j].roll && badminton[i].roll==carrom[k].roll && badminton[i].roll==tt[l].roll ){
                        tmp[m].roll = badminton[i].roll;
                        strcpy(tmp[m].name, badminton[i].name);
                        tmp[m].point = Max(badminton[i].points, chess[j].points, carrom[k].points, tt[l].points);
                        x++;
                        }
                        else if(badminton[i].roll==chess[j].roll && badminton[i].roll==carrom[k].roll ){
                        tmp[m].roll = badminton[i].roll;
                        strcpy(tmp[m].name, badminton[i].name);
                        tmp[m].point = MAX(badminton[i].points, chess[j].points, carrom[k].points);
                        x++;
                        }
                        else if(badminton[i].roll==chess[j].roll && badminton[i].roll==tt[l].roll){
                        tmp[m].roll = badminton[i].roll;
                        strcpy(tmp[m].name, badminton[i].name);
                        tmp[m].point = MAX(badminton[i].points, chess[j].points,tt[l].points);
                        x++;
                        }
                        else if(carrom[k].roll==chess[j].roll && carrom[k].roll==tt[l].roll){
                        tmp[m].roll = carrom[k].roll;
                        strcpy(tmp[m].name, carrom[i].name);
                        tmp[m].point = MAX(carrom[k].points,chess[j].points, tt[l].points);
                        x++;
                        }
                        else if (carrom[k].roll==chess[j].roll) {
                                tmp[m].point = (carrom[k].points + chess[j].points);
                                x++;
                        }
                        else if (carrom[k].roll==tt[l].roll) {
                                tmp[m].point = (carrom[k].points + tt[l].points);
                                x++;
                        }
                        else if (badminton[i].roll==carrom[k].roll) {
                                tmp[m].point = (carrom[k].points + badminton[i].points);
                                x++;
                        }
                        else if (badminton[i].roll==chess[j].roll){
                                tmp[m].point = (badminton[i].points + chess[j].points);
                                x++;
                        }
                        else if (badminton[i].roll==tt[l].roll) {
                                tmp[m].point = (badminton[i].points + tt[l].points);
                                x++;
                        }
                        else if (chess[j].roll==tt[l].roll) {
                                tmp[m].point = (tt[l].points + chess[j].points);
                                x++;
                        }
                    }
                }
            }
        }
    }
    for(int i=0; i<x; i++){
        printf("roll of student %d is %u" ,i,tmp[i].roll);
        printf("\n name of student %s",tmp[i].name);
        printf("\n points %d",tmp[i].point);
    }
    int max = -1;
    int y;
    int MaX =-1;
    char brr[50];

    for(int i=0; i<x; i++){
        if (tmp[i].points > max) {
                max = tmp[i].point;
        }
    }
    for(int i=0; i<x; i++){
        if(tmp[i].point > MaX && tmp[i].point < max){
       MaX = tmp[i].points;
       y =tmp[i].roll;
       strcpy(brr,tmp[i].name);
       }
    }
    printf("\nThe Runners Up is roll %d, name %s with points %d",y,brr,max);
    return;
}
void findChamp(){
    int x=0;
    for(int m=0; m<n1; m++){
    for(int i=0; i<n1; i++){
        for(int j=i+1; j<n2; j++){
            for(int k=j+1; k<n3;k++){
                for(int l=k+1; l<n4; l++){
                        if(badminton[i].roll==chess[j].roll && badminton[i].roll==carrom[k].roll && badminton[i].roll==tt[l].roll ){
                        tmp[m].roll = badminton[i].roll;
                        strcpy(tmp[m].name, badminton[i].name);
                        tmp[m].point = max(badminton[i].points, chess[j].points, carrom[k].points, tt[l].points);
                        x++;
                        }
                        else if(badminton[i].roll==chess[j].roll && badminton[i].roll==carrom[k].roll ){
                        tmp[m].roll = badminton[i].roll;
                        strcpy(tmp[m].name, badminton[i].name);
                        tmp[m].point = (badminton[i].points + chess[j].points + carrom[k].points);
                        x++;
                        }
                        else if(badminton[i].roll==chess[j].roll && badminton[i].roll==tt[l].roll){
                        tmp[m].roll = badminton[i].roll;
                        strcpy(tmp[m].name, badminton[i].name);
                        tmp[m].point = (badminton[i].points + chess[j].points + tt[l].points);
                        x++;
                        }
                        else if(carrom[k].roll==chess[j].roll && carrom[k].roll==tt[l].roll){
                        tmp[m].roll = carrom[k].roll;
                        strcpy(tmp[m].name, carrom[i].name);
                        tmp[m].point = (carrom[k].points + chess[j].points + tt[l].points);
                        x++;
                        }
                    }
                }
            }
        }
    }
    for(int i=0; i<x; i++){
        printf("roll of student %d is %u" ,i,tmp[i].roll);
        printf("\n name of student %s",tmp[i].name);
        printf("\n points %d",tmp[i].point);
    }
    int max = -1;
    int y;
    char brr[50];
    for(int i=0; i<x; i++){
        if (tmp[i].points > max) {
                max = tmp[i].point;
                y =tmp[i].roll;
                strcpy(brr,tmp[i].name);
        }

    }
    printf("The Champion is roll %d, name %s with points %d",y,brr,max);
    return;
}

void findConsolationWinner(){
    int max = -1;
    int y;
    char brr[50];
    for(int i=0; i<n1; i++){
        if ( badminton[i].points > max) {
                max = badminton[i].point;
                y = badminton[i].roll;
                strcpy(brr,badminton[i].name);
        }
    }
    printf("The Consolation Winner is roll %d, name %s with points %d",y,brr,max);
    max =-1;
    y=0;
    char Brr[50];
    for(int i=0; i<n2; i++){
        if ( carrom[i].points > max) {
                max = carrom[i].point;
                y = carrom[i].roll;
                strcpy(Brr,carrom[i].name);
        }
    }
    printf("The Consolation Winner is roll %d, name %s with points %d",y,Brr,max);
    max =-1;
    y=0;
    char BRr[50];
    for(int i=0; i<n2; i++){
        if ( chess[i].points > max) {
                max = carrom[i].point;
                y = carrom[i].roll;
                strcpy(BRr,chess[i].name);
        }
    }
    printf("The Consolation Winner is roll %d, name %s with points %d",y,BRr,max);
    max =-1;
    y=0;
    char BRR[50];
    for(int i=0; i<n2; i++){
        if ( tt[i].points > max) {
                max = tt[i].point;
                y = tt[i].roll;
                strcpy(BRR,tt[i].name);
        }
    }
    printf("The Consolation Winner is roll %d, name %s with points %d",y,BRR,max);
    return;
}
void displayMeritList(){
    printf("Badminton students:\n");
    for(int i=0; i<n1; i++){
        printf("roll of student %d is %u" ,i,badminton[i].roll);
        printf("\n name of student %s",badminton[i].name);
        printf("\n points %d",badminton[i].points);
    }
    printf("\nChess students:\n");
    for(int i=0; i<n2; i++){
        printf("roll of student %d is %u" ,i,chess[i].roll);
        printf("\n name of student %s",chess[i].name);
        printf("\n points %d",chess[i].points);
    }
    printf("\nCarrom students:\n");
    for(int i=0; i<n3; i++){
        printf("roll of student %d is %u" ,i,carrom[i].roll);
        printf("\n name of student %s",carrom[i].name);
        printf("\n points %d",carrom[i].points);
    }
    printf("\nTT students:\n");
    for(int i=0; i<n4; i++){
        printf("roll of student %d is %u" ,i,tt[i].roll);
        printf("\n name of student %s",tt[i].name);
        printf("\n points %d",tt[i].points);
    }
    return;
}
int main(){
    printf("enter the number of students for badminton");
    scanf("%d",&n1);
    for(int i=0; i<n1; i++){
        printf("enter roll of student %d",i);
        scanf("%u",& badminton[i].roll);
        printf("\nenter name of student ");
        scanf("%s", badminton[i].name);
        printf("\nenter points ");
        scanf("%d",&badminton[i].points);
    }
    printf("\nenter the number of students for chess");
    scanf("%d",&n2);
    for(int i=0; i<n2; i++){
        printf("\nenter roll of student %d",i);
        scanf("%u",&chess[i].roll);
        printf("\nenter name of student ");
        scanf("%s", chess[i].name);
        printf("\nenter points ");
        scanf("%d",&chess[i].points);
    }
     printf("\nenter the number of students for carrom");
    scanf("%d",&n3);
    for(int i=0; i<n3; i++){
        printf("\nenter roll of student %d",i);
        scanf("%u",& carrom[i].roll);
        printf("\nenter name of student ");
        scanf("%s", carrom[i].name);
        printf("\nenter points ");
        scanf("%d",&carrom[i].points);
    }
     printf("\nenter the number of students for tt");
    scanf("%d",&n4);
    for(int i=0; i<n4; i++){
        printf("\nenter roll of student %d",i);
        scanf("%u",& tt[i].roll);
        printf("\nenter name of student ");
        scanf("%s", tt[i].name);
        printf("\nenter points ");
        scanf("%d",&tt[i].points);
    }

    printf("Badminton students:\n");
    for(int i=0; i<n1; i++){
        printf("roll of student %d is %u" ,i,badminton[i].roll);
        printf("\n name of student %s",badminton[i].name);
        printf("\n points %d",badminton[i].points);
    }
    printf("\nChess students:\n");
    for(int i=0; i<n2; i++){
        printf("roll of student %d is %u" ,i,chess[i].roll);
        printf("\n name of student %s",chess[i].name);
        printf("\n points %d",chess[i].points);
    }
    printf("\nCarrom students:\n");
    for(int i=0; i<n3; i++){
        printf("roll of student %d is %u" ,i,carrom[i].roll);
        printf("\n name of student %s",carrom[i].name);
        printf("\n points %d",carrom[i].points);
    }
    printf("\nTT students:\n");
    for(int i=0; i<n4; i++){
        printf("roll of student %d is %u" ,i,tt[i].roll);
        printf("\n name of student %s",tt[i].name);
        printf("\n points %d",tt[i].points);
    }
    findChamp();
    findRunnersUp();
    findConsolationWinner();
    displayMeritList();
    return 0;
}
