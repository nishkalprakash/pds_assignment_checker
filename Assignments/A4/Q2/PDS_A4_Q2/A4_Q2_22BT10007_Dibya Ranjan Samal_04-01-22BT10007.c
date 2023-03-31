/*Sec:2
Name:Dibya Ranjan Samal
Roll no:22BT10007
Assignment no:04-02
Description: To display the grade awarded to student
*/

    #include<stdio.h>
    int main(){
        int N,classtest,midsem,endsem,attendance;
        printf("Enter the number of students : ");
        scanf("%d",&N);
        int count = 1;
        while(N>0){
            printf("Enter the marks of student %d : \n ", count);
            count ++;
            printf("Attendance[40]= ");
            scanf("%d",&attendance);
            printf("Class-Test[20]= ");
            scanf("%d",&classtest);
            printf("Mid-sem[60]= ");
            scanf("%d",&midsem);
            printf("End-sem[100]= ");
            scanf("%d",&endsem);
            float total = (0.1*attendance/40+0.2*classtest/20+0.3*midsem/60+0.4*endsem/100)*100; // to calculate total marks
            if(total>=90)
                {printf("Total Marks : %f\n",total);
                printf("Grade: Ex\n");}
            else if(total<90 && total >=80)
                {printf("Total Marks : %f\n",total);
                printf("Grade: A\n");}
            else if(total<80 && total>=70)
                {printf("Total Marks : %f\n",total);
                printf("Grade: B\n");}
            else if(total<70 && total >=60)
                {printf("Total Marks : %f\n",total);
                printf("Grade: C\n");}
            else if(total<60 && total>=50)
                {printf("Total Marks : %f\n",total);
                printf("Grade: D\n");}
            else if(total<50 && total>=35)
                {printf("Total Marks : %f\n",total);
                printf("Grade: P\n");}
            else if(total<35)
                {printf("Total Marks : %f\n",total);
                printf("Grade: F\n");}
             N--;
                 }
                 return 0;







    }
