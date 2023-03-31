/*
*Section 2
* Roll No : 22MI10040
* Name : Mrinmoy Dey
* Assignment No : 4
* Description : Program to find grade
*/
#include <stdio.h>
int main(){
    float a,ct,ms,es,N,i,total;
    printf("Enter the number of students :: ");
    scanf("%f",&N);
    for (i=1;i<=N;i++){
        printf("\nEnter the marks for student %.0f\n",i);
        printf("Attendance[40] :: ");
        scanf("%f",&a);
        while ((a<0)||(a>40)){
            printf("Wrong Input!!\n");
            printf("Attendance[40] :: ");
            scanf("%f",&a);
        }
        printf("CT[20] :: ");
        scanf("%f",&ct);
        while ((ct<0)||(ct>20)){
            printf("Wrong Input!!\n");
            printf("CT[20] :: ");
            scanf("%f",&ct);
        }
        printf("Midsem[60] :: ");
        scanf("%f",&ms);
        while ((ms<0)||(ms>60)){
            printf("Wrong Input!!\n");
            printf("Midsem[60] :: ");
            scanf("%f",&ms);
        }
        printf("Endsem[100] :: ");
        scanf("%f",&es);
        while ((es<0)||(es>100)){
            printf("Wrong Input!!\n");
            printf("Endsem[100] :: ");
            scanf("%f",&es);
        }
        total = ((a*10)/40)+((ct*20)/20)+((ms*30)/60)+((es*40)/100);
        printf("Student %.0f\n",i);
        printf("Total Marks :: %.2f\n",total);
        if (total>=90) printf("Grde :: EX\n");
        else if ((total<90)&&(total>=80))printf("Grade :: A\n");
        else if ((total<80)&&(total>=70))printf("Grade :: B\n");
        else if ((total<70)&&(total>=60))printf("Grade :: C\n");
        else if ((total<60)&&(total>=50))printf("Grade :: D\n");
        else if ((total<50)&&(total>=35))printf("Grade :: P\n");
        else printf("Grade :: F\n");
    }

    return 0;
}
