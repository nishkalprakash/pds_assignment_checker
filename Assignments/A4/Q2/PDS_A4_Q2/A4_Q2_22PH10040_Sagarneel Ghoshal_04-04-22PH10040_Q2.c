#include<stdio.h>

/*
* Section 2
* Roll No : 22PH10040
* Name : Sagarneel Ghoshal
* Assignment No : 4
* Description : Program to find total marks and grades
*/

int main(){
    int n,i,att,msm,ctm,esm;  //declaring the variables
    printf("Enter number of students:");
    scanf("%d",&n);                             //taking in the value of n

    for(i=1;i<=n;i++){                                               //entering the for loop to take in details of the students
        printf("Enter the marks of the given students:\n");
        printf("Enter the attendance[40]:\n");
        scanf("%d",&att);
        printf("Enter the class test marks[20]:\n");
        scanf("%d",&ctm);
        printf("Enter the mid-sem marks[60]:\n");
        scanf("%d",&msm);
        printf("Enter the end-sem marks[100]:\n");
        scanf("%d",&esm);

        float attf=(float)(att*10)/40.0;                           //computing the marks on the basis of the weightage
        float ctmf=ctm;
        float msmf=(float)(msm*30)/60.0;
        float esmf=(float)(esm*40)/100.0;

        float total=attf+ctmf+msmf+esmf;                               //computing the total marks

        if(att>=0 && att<=40 && ctm>=0 && ctm<=20 && msm>=0 && msm<=60 && esm>=0 && esm<=100){     //checking if the entered marks are in range
                printf("Student %d\n",i);

                printf("The total marks(out of 100) of the student is:%f\n",total);

                if(total>=90) printf("Grade: EX\n");                    //printing the final grade
                else if(total>=80 && total<90) printf("Grade:A\n");
                else if(total>=70 && total<80) printf("Grade:B\n");
                else if(total>=60 && total<70) printf("Grade:C\n");
                else if(total>=50 && total<60) printf("Grade:D\n");
                else if(total>=35 && total<50) printf("Grade:P\n");
                else  printf("Grade:F\n");


        }

        else{printf("Entered marks are out of range\n");}



    }

    return 0;
}
