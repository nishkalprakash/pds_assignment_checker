#include<stdio.h>
/*Section-2
Roll No- 22HS10058
Name - Ujjawal Jain
Assignment no.4
Question-2  */
int main()
{
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int at,CT,midsem,endsem;
        printf("Enter the marks of student %d\n",i);
        printf("Attendence [40] : ");
        scanf("%d",&at);
        printf("CT [20] : ");
        scanf("%d",&CT);
        printf("Midsem [60] : ");
        scanf("%d",&midsem);
        printf("Endsem [100] : ");
        scanf("%d",&endsem);

        //if user gives marks less than 0 or more than maximum limit it will give wrong input
        if(!(at<0||CT<0||midsem<0||endsem<0||at>40||CT>20||midsem>60||endsem>100))
        {
        double Totalm =(at/40.0)*10 + (CT/20.0)*20 + (midsem/60.0)*30 + (endsem/100.0)*40;
        printf("Student %d\n",i);
        printf("Total Marks : %0.2lf\n",Totalm);
        printf("Grade: ");
        if(Totalm >= 90) printf("EX\n");
        else if(Totalm >= 80) printf("A\n");
        else if(Totalm >= 70) printf("B\n");
        else if(Totalm >= 60) printf("C\n");
        else if(Totalm >= 50) printf("D\n");
        else if(Totalm >= 35) printf("P\n");
        else printf("F\n");
        }

        else{
            printf("Wrong Input\n");
        }


    }




    return 0;
}
