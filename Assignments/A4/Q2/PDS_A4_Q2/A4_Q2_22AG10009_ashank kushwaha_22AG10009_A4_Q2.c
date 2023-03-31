/*
SECTION:2
ROLL NO:22AG10009
NAME:ASHANK KUMAR KUSHWAHA
ASSIGNMENT NO: 4
DESCRIPTION:giving grades
*/
#include <stdio.h>
int main(){
    int n,at,ct,ms,es,i; //declaring variable at:attendance ,ct:class test ,ms:midsem ,es:endsem
    double marks;        //total marks
    scanf("%d",&n); //number of students

    //loop for number of students
    for (i=1;i<=n;i++){
        printf("Enter marks of student %d\n",i);

        //computing data of each student
        while (1){
            //attendance
            printf("Attendance[40]: ");
            scanf("%d",&at);
            if ((at>40)){
                printf("out of range\nEnter again for student %d\n",i);  //checking max limit
                continue;}

            //class test
            printf("CT[20]: ");
            scanf("%d",&ct);
            if (ct>20){
                printf("out of range\nEnter again for student %d\n",i);
                continue;}

            //midsem
            printf("Midsem[60]: ");
            scanf("%d",&ms);
            if (ms>60){
                printf("out of range\nEnter again for student %d\n",i);
                continue;}

            //endsem
            printf("Endsem[100]: ");
            scanf("%d",&es);
            if (es>100){
                printf("out of range\nEnter again for student %d\n",i);
                continue;}

            //checking negative number in any of the four
            if ((at<0)||(ct<0)||(ms<0)||(es<0)){
                printf("negative number has been entered\nEnter again for student %d\n",i);
                continue;
            }

            //computing marks
            marks=((10*(at/40.0))+(20*(ct/20.0))+(30*(ms/60.0))+(40*(es/100.0)));
            printf("%lf\n",marks);

            //printing grades
            if (marks>=90) printf("GRADE: EX");
            else if ((marks>=80)&&(marks<90)) printf("GRADE: A\n");
            else if ((marks>=70)&&(marks<80)) printf("GRADE: B\n");
            else if ((marks>=60)&&(marks<70)) printf("GRADE: C\n");
            else if ((marks>=50)&&(marks<60)) printf("GRADE: D\n");
            else if ((marks>=35)&&(marks<50)) printf("GRADE: P\n");
            else printf("GRADE: F\n ");
            printf("\n");
            break;


        }
    }


}
