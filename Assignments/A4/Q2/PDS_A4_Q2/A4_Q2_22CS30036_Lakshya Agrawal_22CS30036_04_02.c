/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 4
Description : Program to find whether the password is valid or invalid.
*/
#include<stdio.h>

int main()
{
    int n,i=0;
    float a,b,c,d,total_marks;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    while(n--){
        printf("\nEnter the marks for student %d:\n",++i);
        printf("  Attendence [40]: ");
        scanf("%f",&a);
        while(a<0){
            printf("  Invalid marks! Enter the marks again...\n  Attendence [40]: ");
            scanf("%f",&a);
        }
        printf("  CT [20]: ");
        scanf("%f",&b);
        while(b<0){
            printf("  Invalid marks! Enter the marks again...\n  CT [20]: ");
            scanf("%f",&b);
        }
        printf("  Midsem [60]: ");
        scanf("%f",&c);
        while(c<0){
            printf("  Invalid marks! Enter the marks again...\n  Midsem [60]: ");
            scanf("%f",&c);
        }
        printf("  Endsem [100]: ");
        scanf("%f",&d);
        while(d<0){
            printf("  Invalid marks! Enter the marks again...\n  Endsem [100]: ");
            scanf("%f",&d);
        }
        total_marks = ((a/40)*10)+((b/20)*20)+((c/60)*30)+((d/100)*40);
        if(total_marks>=90){
            printf("\nStudent %d\n  Total marks: %.2f\n  Grade: EX\n",i,total_marks);
        }else if(total_marks>=80){
            printf("\nStudent %d\n  Total marks: %.2f\n  Grade: A\n",i,total_marks);
        }else if(total_marks>=70){
            printf("\nStudent %d\n  Total marks: %.2f\n  Grade: B\n",i,total_marks);
        }else if(total_marks>=60){
            printf("\nStudent %d\n  Total marks: %.2f\n  Grade: C\n",i,total_marks);
        }else if(total_marks>=50){
            printf("\nStudent %d\n  Total marks: %.2f\n  Grade: D\n",i,total_marks);
        }else if(total_marks>=35){
            printf("\nStudent %d\n  Total marks: %.2f\n  Grade: P\n",i,total_marks);
        }else{
            printf("\nStudent %d\n  Total marks: %.2f\n  Grade: F\n",i,total_marks);
        }
    }
    return 0;
}
