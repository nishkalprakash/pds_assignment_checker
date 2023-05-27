#include<stdio.h>

struct student{

    char RollNo[10];
    float marks[3];
    float total;
}s[n];

int main(){

    int n,i;
    printf("Enter the number of student records");
    scanf("%d",&n);
    printf("Enter student records");

    for(i=0;i<n;i++){
            printf("Enter roll no.");
        scanf("%s",s[i].RollNo);
    }




}
