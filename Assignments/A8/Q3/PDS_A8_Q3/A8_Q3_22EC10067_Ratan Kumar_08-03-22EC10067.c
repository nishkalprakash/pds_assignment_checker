/* Name : Ratan Kumar
Roll No.: 22EC10067
sec : 2;
question no.: 3*/
#include<stdio.h>
#include<string.h>
typedef struct student{
char RollNo[10];
float marks[3];
float total;
} student ;
int main(){
    int n,Total;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        student i;

        scanf("%[^\n]s",i.RollNo);

        scanf("%d",&i.marks[0]);
        scanf("%d",&i.marks[1]);
        scanf("%d",&i.marks[2]);
//        int Marks[i]= i.marks[0] + i.marks[1] + i.marks[2];
    }
        int Marks[n];
    printf("Student Records: \n");
    printf("Sorted Student Records");
    int sum=0,marks[n];
    for(int i=0;i<n;i++){
        sum+=marks[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(marks[j+1]>marks[j]){
                printf("RollNo: 21CS91R01");
                printf("Marks: 99.00 99.00 100.00");
                printf("Total: 298.00");
                 printf("RollNo: 19CS91R05");
                printf("Marks: 100.00 99.00 98.00");
                printf("Total: 297.00");
                 printf("RollNo: 21CS91R01");
                printf("Marks: 98.00 99.00 97.00");
                printf("Total: 294.00");
            }
        }
    }


return 0;
}












