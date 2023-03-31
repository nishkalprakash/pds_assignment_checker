/*Name - Aditya Kumar Singh
  Roll - 22MT30005
  Lab  - 4
  Description- Loop */


#include<stdio.h>
int main()
{
    int A,B,C,D,P,F,i,a,ct,ms,es,n;
    float Marks;
    printf("Enter the number of students :\n");
    scanf("%d",&n);
    printf("Enter the marks for student1 :\n");
    for(i=1;i<=n;i++)
        {
        printf("Attendence [40]:\n");
        scanf("%d",&a);
        if(a>=0&&a<=40);




    printf("CT [20]:\n");
    scanf("%d",&ct);
    if(ct>=0&&ct<=20);


    printf("Midsems [60]:\n");
    scanf("%d",&ms);
    if(ms>=0&&ms<=60);

     printf("Endsems [100]:\n");
     scanf("%d",&es);
     if(es>=0&&es<=100);

     Marks=(a/40.0)*10.0+(ct/20.0)*20.0+(ms/60.0)*30.0+(es/100.0)*40.0;
     printf("Total marks obtained by student %d is %f\n", i, Marks);
     printf("Enter the marks for student2 :\n");
     if(Marks>=90)
        printf("EX\n");
     else if (Marks>=80&&Marks<90) printf("A\n");
     else if (Marks>=70&&Marks<80) printf("B\n");
     else if (Marks>=60&&Marks<70) printf("C\n");
     else if (Marks>=50&&Marks<60) printf("D\n");
     else if (Marks>=35&&Marks<50) printf("P\n");
     else printf("F\n");



    }








    return 0;






}






