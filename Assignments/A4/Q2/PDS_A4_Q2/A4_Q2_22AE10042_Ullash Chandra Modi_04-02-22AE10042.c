/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 2
*Description- Program to calculate the marks and grade awarded
*/
#include <stdio.h>
int main ()
{
    float a,b,c,d,n,i,m;

    printf("Enter the number of students : ");
    scanf("%f",&n);
    while (!((n>=0)&&(n<=10)))
    {printf("Enter the number of students : ");
    scanf("%f",&n);
    }


    for (i=1;i<=n;i++)
    {
        printf("\n\nEnter the marks for student : %d \n",i);

        printf("Attendence [40] : ");
        scanf("%f",&a);
        while(!((a>=0)&&(a<=40)))
        {printf("Attendence [40] : ");
        scanf("%f",&a);
        }

        printf("CT [20] : ");
        scanf("%f",&b);
        while(!((b>=0)&&(b<=20)))
        {printf("CT [20] : ");
        scanf("%f",&b);}

        printf("Midsem [60] : ");
        scanf("%f",&c);
        while(!((c>=0)&&(c<=60)))
        {printf("Midsem [60] : ");
        scanf("%f",&c);}

        printf("Endsem [100] : ");
        scanf("%f",&d);
        while(!((d>=0)&&(d<=100)))
        {printf("Endsem [100] : \n\n");
        scanf("%f",&d);}

        m=(a/4)+(b)+(c/2)+(2*d/5);
        printf("\nstudent %d\n",i);
        printf("Total marks : %.2f \n",m);
        if (m>=90)
        {printf("Grade : EX");}
        else if ((m>=80)&&(m<90))
        {printf("Grade : A");}
        else if ((m>=70)&&(m<80))
        {printf("Grade : B");}
        else if ((m>=60)&&(m<70))
        {printf("Grade : C");}
        else if ((m>=50)&&(m<60))
        {printf("Grade : D");}
        else if ((m>=35)&&(m<50))
        {printf("Grade : P");}
        else if (m<35)
        {printf("Grade : F");}

    }

}
