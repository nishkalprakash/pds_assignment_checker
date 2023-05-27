#include<stdio.h>

struct student{
char rollno[10];
float marks[3];
float total;
} s[100];

int main(){
    int i,n,j;
    float sum;
    struct student temp;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    for(i=0;i<n;++i){

    printf("Enter Roll no. : ");
    scanf("%s",s[i].rollno);
    printf("Enter marks : ");
    for(j=0;j<3;++j){
    scanf("%f",&s[i].marks[j]);
    }
    }
    printf("\n");
    printf("Sorted Student Records : \n");
    for(i=0;i<n;++i){
        printf("Student %d : \n",i+1);
        printf("Roll number : ");
        puts(s[i].rollno);
        printf("\nMarks : ");
        for(j=0;j<3;++j){
            printf("%.2f ",s[i].marks[j]);
            sum = sum + s[i].marks[j];

        }
        printf("\nTotal : %.2f\n",sum);
        sum = 0;
    }
    for(int i=0;i<n;i++)
    {

        for(int j=i+1;j<n;j++)
        {
            if(s[i].total>s[j]>total)
            {

                temp=s[i];
                s[i]=s[j];
                s[j]=total;
            }

        }
    }

return 0;
}
