//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// assignment:4
//description:
#include<stdio.h>
int main()//start of the program
{
    float attendance,ct,mid,end,totalmarks;
    int n,a;
    printf("Enter the number of students:");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        printf("enter the marks if student %d:\n",a-(n-1));
        printf("Attendance[40]:");
        scanf("%f",&attendance);
        if(attendance<0 || attendance>40)//if negative number or out of the range is given
        {
            printf("invalid input");
            break;
        }
        printf("CT[20]:");//if negative number or out of the range is given
        scanf("%f",&ct);
        if(ct<0 || ct>20)
        {
            printf("invalid input");//if negative number or out of the range is given
            break;

        }
        printf("Midsem[60]:");//if negative number or out of the range is given
        scanf("%f",&mid);
        if(mid<0 || mid>60)
        {
            printf("invalid input");
            break;
        }
        printf("Endsem[100]:");//if negative number or out of the range is given
        scanf("%f",&end);
        if(end<0 || end>100)
        {
            printf("invalid input");//if negative number or out of the range is given
            break;
        }
        totalmarks=((0.25*attendance))+(ct)+((0.5*mid))+((0.4*end));
        printf("student:%d\n",a-(n-1));
        printf("Total marks: %.2f \n",totalmarks);
        if (totalmarks>=90)
        {
                printf("grade:EX \n");
        }
        else if (totalmarks<90 &&totalmarks>=80)
        {
                printf("grade:A \n");
        }
        else if (totalmarks<80 && totalmarks>=70)
        {
                printf("grade:B \n");
        }
        else if (totalmarks<70 && totalmarks>=60)
        {
                printf("grade:C\n");
        }
        else if (totalmarks<60 && totalmarks>=50)
        {
             printf("grade:D \n");
        }
        else if (totalmarks<50 && totalmarks>=35)
        {
             printf("grade:P \n");
        }
        else if (totalmarks<35)
        {
             printf("grade:F \n");
        }
        n--;










    }
}






