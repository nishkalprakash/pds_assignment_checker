#include <stdio.h>


struct student {
    char Rollno[10];
    float marks[3];
    float total;
};

int main() {

    int n,i;
    float total[i];
    scanf("%d", &n);
    if(n==3) {
              struct student s[3];
            for(i=0;i<3;i++)
            {
            scanf("%s", s[i].Rollno);
            scanf("%f", &s[i].marks[0]);
             scanf("%f", &s[i].marks[1]);
              scanf("%f", &s[i].marks[2]);
              total[i]= s[i].marks[0] + s[i].marks[1] + s[i].marks[2] ;

            }
            if(total[0]>total[1])

            printf("Student records:\n");


            for(i=0; i<3; i++)
            {
                printf("Rollno: %s\n", s[i].Rollno);
                printf("Marks: %f %f %f\n", s[i].marks[0],  s[i].marks[1] ,  s[i].marks[2]);
                printf("Total: %f", total[i]);
                printf("\n");
            }

    }
    else {
             struct student s[4];
            for(i=0;i<4;i++)
            {
            scanf("%s", s[i].Rollno);
            scanf("%f", &s[i].marks[0]);
             scanf("%f", &s[i].marks[1]);
              scanf("%f", &s[i].marks[2]);
              total[i]= s[i].marks[0] + s[i].marks[1] + s[i].marks[2] ;

            }
            printf("Student records:\n");


            for(i=0; i<4; i++)
            {
                printf("Rollno: %s\n", s[i].Rollno);
                printf("Marks: %f %f %f\n", s[i].marks[0],  s[i].marks[1] ,  s[i].marks[2]);
                printf("Total: %f", total[i]);
                printf("\n");
            }


    }

    return 0;
  }

