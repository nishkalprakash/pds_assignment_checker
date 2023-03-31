/*
* Section-2
* Roll No : 22CS30056
* Name : Sumit Kumar
* Assignment No : 4
* Description :
*/
#include <stdio.h>
int main(){
    int i,n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("Enter the marks for Student %d:",i);
        printf(" Attendance[40]:");
        float a;
        scanf("%f",&a);
        printf(" CT[20]:");
        float ct;
        scanf("%f",&ct);
        printf("Mid Sem[60]:");
        float mid;
        scanf("%f",&mid);
        printf("End Sem[100] :");
        float end;
        scanf("%f",&end);
        if ( (a<0.0||a>40.0)|| (ct<0.0|| ct>20.0) ||(mid<0.0 || mid>60.0) || (end<0.0|| end>100.0)){
                printf("you have entered wrong marks");
                break;
        }
        else {
            float sum;
            sum=(a/40*10)+(ct/20*20)+(mid/60*30)+(end/100*40);
            printf("%f",sum);
            if (sum>=90.000000){
                printf("Student %d\n",i);
                printf("Total Marks: %.2f\n",sum);
                printf("Grade:EX\n");

            }
            else if((sum>=80.000000)&&(sum<90.000000)){
                printf("Student %d",i);
                printf("Total Marks: %.2f\n",sum);
                printf("Grade:A\n");

            }
            else if((sum>=70.000000) &&(sum<80.000000)){
                printf("Student %d\n",i);
                printf("Total Marks: %.2f \n",sum);
                printf("Grade:B\n");
            }
            else if((sum>=60.000000) &&(sum<70.000000)){
                printf("Student %d\n",i);
                printf("Total Marks: %.2f \n",sum);
                printf("Grade:C\n");
            }
            else if((sum>=50.000000) &&(sum<60.000000)){
                printf("Student %d\n",i);
                printf("Total Marks: %.2f \n",sum);
                printf("Grade:D\n");
            }
            else if((sum>=35.000000) &&(sum<50.000000)){
                printf("Student %d\n",i);
                printf("Total Marks: %.2f\n ",sum);
                printf("Grade:P\n");
            }

            else if(sum<35.000000){
                printf("Student %d\n",i);
                printf("Total Marks: %.2f\n",sum);
                printf("Grade:F\n");

            }

        }

}
}

