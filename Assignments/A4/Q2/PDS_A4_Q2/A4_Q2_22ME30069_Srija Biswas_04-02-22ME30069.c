//Section 2
//Roll No.-22ME30069
//Name-Srija Biswas
//Assignment-4
//Description:
#include<stdio.h>
int main()
{
    int n,i;
    float total,at,ct,ms,es;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("Enter the marks for student %d\n",i);
        printf("Attendance [40]:");
        scanf("%f",&at);
        if(at<0 || at>40)
        {
            printf("Wrong,Enter marks again\n");
            printf("Attendance [40]:");
            scanf("%f",&at);
        }
        printf("CT [20]:");
        scanf("%f",&ct);
        if(at<0 || at>20)
        {
            printf("Wrong,Enter marks again\n");
            printf("CT [20]:");
            scanf("%f",&ct);
        }
        printf("Midsem[60]:");
        scanf("%f",&ms);
        if(at<0 || at>60)
        {
            printf("Wrong,Enter marks again\n");
            printf("Midsem [60]:");
            scanf("%f",&ms);
        }
        printf("Endsem[100]:");
        scanf("%f",&es);
        if(at<0 || at>100)
        {
            printf("Wrong,Enter marks again\n");
            printf("Endsem [100]:");
            scanf("%f",&es);
        }
        total=(at/40*10)+(ct/20*20)+(ms/60*30)+(es/100*40);
        printf("Student 1\n");
        printf("Total Marks=%.2f\n",total);
        if(total>=90)
            printf("Grade: EX");
        else if(total>=80 && total<90)
            printf("Grade: A");
        else if(total>=70 && total<80)
            printf("Grade: B");
        else if(total>=60 && total<70)
            printf("Grade: C");
        else if(total>=50 && total<60)
            printf("Grade: D");
        else if(total>=35 && total<50)
            printf("Grade: P");
        else if(total<35)
            printf("Grade: F");
        printf("\n");
    }
    return 0;
}
