/*
Name Mohul Dutta
22EC30035
question 3 lab 8
*/
#include<stdio.h>
typedef struct{
    char RollNo[10];
    float marks[3];
    float total;
}Student;
int main(){
int n;
printf("enter the no.  ");
scanf("%d",&n);
Student *a;
a=(Student *)malloc(n*sizeof(int));
printf("please enter the datas \n");
for(int i=0;i<n;i++){
        scanf("%s",a[i].RollNo);
        scanf("%f",&a[i].marks[0]);
        scanf("%f",&a[i].marks[1]);
        scanf("%f",&a[i].marks[2]);
        a[i].total=a[i].marks[0]+a[i].marks[1]+a[i].marks[2];
}
printf("Student Records:\n\n");
for(int i=0;i<n;i++){
    printf("Roll No: %s\n",a[i].RollNo);
    printf("Marks: %0.2f %0.2f %0.2f\n",a[i].marks[0],a[i].marks[1],a[i].marks[2]);
    printf("Total: %0.2f\n",a[i].total);
}
printf("\nSorted Student Records:\nStudent Records:\n");
Student temp;
int maxi=0;
for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){
        if(a[i].total<a[j].total){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }

    }
}
for(int i=0;i<n;i++){
    printf("Roll No: %s\n",a[i].RollNo);
    printf("Marks: %0.2f %0.2f %0.2f\n",a[i].marks[0],a[i].marks[1],a[i].marks[2]);
    printf("Total: %0.2f\n",a[i].total);
}
}
