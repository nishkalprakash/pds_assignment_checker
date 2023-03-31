/**Ashish ranjan kumar
section = 2
Roll No = 22CE30004
Assignment No ; 4 **/
#include<stdio.h>
int main()
{
    double n,a,CT,m,e;
    /**n = no of student; a = attendance;
    CT = class test; m = mid sems; e = end sems**/
    int count = 1;
    printf("Enter the number of students: ");
    scanf("%lf", &n);
    while(n>0&&n<10) {
        for(count=1; count<=n; count++)
        {
            printf("Enter the marks for student %d\n", count);
            printf("Attendence [40]: ");
            scanf("%lf", &a);
            printf("CT [20]: ");
            scanf("%lf", &CT);
            printf("Midsem [60]: ");
            scanf("%lf", &m);
            printf("Endsem [100]: ");
            scanf("%lf", &e);
            printf("student %d\n", count);

            double TM = (a/4 + CT + m/2) + (e/100)*40;
            printf("Total marks : %lf\n", TM);
            if(TM>=90){
                printf("Grade: EX\n");
            }
            else if((TM>=80)&&(TM<90)){
                printf("Grade: A\n");
            }
            else if((TM>=70)&&(TM<80)){
                printf("Grade: B\n");
            }
            else if((TM>=60)&&(TM<70)){
                printf("Grade: C\n");
            }
            else if((TM>=50)&&(TM<60)){
                printf("Grade: D\n");
            }
            else if((TM>=35)&&(TM<50)){
                printf("Grade: P\n");
            }
            else if(TM<35) {
                printf("Grade: F\n");
            }




        }
         return 0;

    }








}
