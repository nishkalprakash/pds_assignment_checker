#include<stdio.h>
struct student{
char RollNo[10];
float marks[3];
float total;};
struct student s[100];

int main(){

int i, n, j;
float m;
scanf("%d", &n);
for(i=0;i<n;i++){
    scanf("%s", &s[i].RollNo);
    for(j=0;j<3;j++){
    scanf("%lf", &s[i].marks[j]);}}
    s[i].total=0;
    for(i=0;i<n;i++){
            for(j=0;j<3;j++){
        s[i].total+= s[i].marks[j];
        }


    printf("Student Records");
    for(i=0;i<n;i++){
    printf("RollNo:%s", s[i].RollNo);
        printf("\nMarks");
        printf("%lf %lf %lf", s[i].marks[0], s[i].marks[1], s[i].marks[2]);
        printf("\nTotal:%lf", s[i].total);
    printf("\n");
    printf("\n");}

    printf("Sorted students records/n");


for(i=0;i<n;i++){
    if(s[i].total>s[i+1].total){
        m=s[i].total;
        s[i].total=s[i+1].total;
        s[i+1].total=m;

        printf("RollNo:%s/n", s[i+1].RollNo);
        printf("\nMarks:");
        printf("%lf lf %lf", s[i+1].marks[0], s[i+1].marks[1], s[i+1].marks[2]);
        printf("\nTotal:%lf", s[i+1].total);

}
}}

return 0;}


