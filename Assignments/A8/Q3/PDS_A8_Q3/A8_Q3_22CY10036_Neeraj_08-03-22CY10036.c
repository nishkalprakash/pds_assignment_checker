
#include<stdio.h>

typedef struct student{
     char RollNo[10];
     float marks[3];
     float total;
}student;

int main (){
    int n;
    printf("enter n :");
    scanf("%d", &n);
    student x[n];
    for (int i =1;i<=n;i++){
        printf("enter detail of %d student :\n",i);
        printf("enter roll no :\n");
        scanf("%s", x[i].RollNo);
        printf("enter the marks of 3 subject:");
        scanf("%f",&x[0].marks);
        scanf("%f",&x[1].marks);
        scanf("%f",&x[2].marks);


    }



return 0;
}

















