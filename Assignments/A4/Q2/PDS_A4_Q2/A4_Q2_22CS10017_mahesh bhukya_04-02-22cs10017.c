/*
section 2
22cs10017
Bhukya Mahesh
assignment no 4
description :
           */
#include<stdio.h>
int main()
{
    int n;
    //printf("enter n : ");
    //scanf("%d", &n);
    float attendence_marks,ct_marks,ms_marks,es_marks, total;
    printf("enter  attendence_marks, ct_marks, ms_marks, es_marks  : ");
    scanf("%f%f%f%f", &attendence_marks, &ct_marks, &ms_marks, &es_marks);



    if(attendence_marks<=-1 || ct_marks<=-1 || ms_marks<=-1 || es_marks<=-1)
    {
        printf("not valid");
    }

    else
    {


        printf("valid\n");
        printf("at=%f, ct=%f, ms=%f, es=%f\n", attendence_marks, ct_marks, ms_marks, es_marks);

        total=(((attendence_marks*10)/40)+((ct_marks/20)*20)+((ms_marks*30)/60)+((es_marks*40)/100));
        //total=(((attendence_marks/40)*10) + ((ct_marks/20)*20) + ((ms_marks/60)*30) + ((es_marks/100)*40)));
        printf("%d\n", total);


        if(total>=90)
        {
            printf("ex");
        }
        if(total>=80 && total<90)
        {
        printf("A");
        }
        if(total>=70 && total<80)
        {
            printf("B");
        }
        if(total>=60 && total<70)
        {
            printf("C");
        }
        if(total>=50 && total<60)
        {
            printf("D");
        }
        if(total>=35 && total<50)
        {
            printf("P");
        }
        if(total<35)
        {
            printf("F");
        }


    }



    return 0;
}

