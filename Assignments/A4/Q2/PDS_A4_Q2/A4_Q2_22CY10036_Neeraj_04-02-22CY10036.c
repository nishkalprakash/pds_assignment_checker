/*
* Section 2
* Roll No : 22CY10036
* Name : Neeraj
* Assignment No : 4
* Description :
*/
#include<stdio.h>
    int main()
    {
        int i,N;
        printf("number of students:");
        scanf("%d",&N);
        for (i=1;i<=N;i++)
        {
            printf("%d student marks\n", i);
            printf("attendance(40):");
            int a;
            scanf("%d",&a);
            printf("class test(20):");
            int ct;
            scanf("%d",&ct);
            printf("mid sem marks(60):");
            int mid;
            scanf("%d",&mid);
            printf("end sem marks(100):");
            int end;
            scanf("%d",&end);
            if((a<0||a>40)||(ct<0||ct>20)||(mid<0||mid>60)||(end<0||end>100))
               {
                printf("entered wrong marks");
                break;
               }

            float total;
            total = ((float)a/40*10)+((float)ct/20*20)+((float)mid/60*30)+((float)end/100*40);
            printf("%d student total marks:%f\n ",i,total);
            if (total>=90)
                printf("Grade:EX\n");
            else if(total>=80&&total<90)
                printf("Grade:A\n");
            else if(total>=70&&total<80)
                printf("Grade:B\n");
            else if(total>=60&&total<70)
                printf("Grade:C\n");
            else if(total>=50&&total<60)
                printf("Grade:D\n");
            else if(total>=35&&total<50)
                printf("Grade:P\n");
            else if(total<35)
                printf("Grade:F\n");
            }


    }
