/*
Section-2
Roll No.-22AE10022
Assignment-1
Name- Megha Singhal
Description-calculating result of students
*/
#include<stdio.h>
#include<math.h>
int main()
{
   int N,n=1;
   printf("Enter no. of students:");
   scanf("%d",&N);
   while (n<=N)
   {
      float a,c,m,e,M;
       printf("\nEnter marks for student:%d",n);
       printf("\nAttendence[40]:");
       scanf("%f",&a);
       while (a<0||a>40)
       {
           printf("Wrong input.Please enter marks again");
           printf("\nAttendence[40]:");
           scanf("%f",&a);
       }

       printf("CT [20]:");
       scanf("%f",&c);
        while (c<0||c>20)
       {
           printf("Wrong input.Please enter marks again");
           printf("\nCT [20]:");
           scanf("%f",&c);
       }
       printf("Midsem[60]:");
       scanf("%f",&m);
        while (m<0||m>60)
       {
           printf("Wrong Input.Please enter marks again.");
           printf("\nMidsem[60]:");
           scanf("%f",&m);
       }
       printf("Endsem[100]:");
       scanf("%f",&e);
        while (e<0||e>100)
       {
           printf("Wrong input.Please enter marks again");
           printf("\nEndsem[100]:");
           scanf("%f",&e);
       }
       M=a/4+c+m/2+(2*e/5); /*let student get a marks for attendence then its equivalent final marks from this will be (10/40)*a similarly for CT it will be (20/20)*c,
                            for midsems (30/60)*m, for endsems (40/100)*e  */
       printf("\nStudent %d\nTotal Marks: %.2f\n",n,M);
       if (M>=90)
        printf("Grade:EX");
       else if (M<90.00&&M>=80.00)
        printf("Grade:A");
       else if (M<80.00&&M>=70.00)
        printf("Grade:B");
       else if (M<70.00&&M>=60.00)
        printf("Grade:C");
       else if (M<60.00&&M>=50.00)
        printf("Grade:D");
       else if (M<50.00&&M>=35.00)
        printf("Grade:P");
        else printf("Grade:F");

    n++;
    printf("\n");
   }
   return 0;
}

