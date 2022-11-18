/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Test number: 2d
*/
#include<stdio.h>
#define MAX 200//I define max to be 200 can be changed
struct student {
    char name[30];
    char gender[4];
    float marks;
};
//this function just prints records
void printrec(struct student arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("\n%s %s -> %.2f",arr[i].name,arr[i].gender,arr[i].marks);//printing marks upto 2 decimal places as per q paper an be changed anytime
    }
}
//this function takes input
void input(struct student arr[],int n){
    int i,d;
    for(i=0;i<n;i++){
        printf("\nEnter details of student %d: ",i+1);
        //printf("\nName= ");
        d=0;
        fflush(stdin);//to handle space in name
        arr[i].name[d]=getchar();
        while(arr[i].name[d]!='\n')
            {d++;
             arr[i].name[d] = getchar();}
        arr[i].name[d] = '\0';//ending name array
        //printf("\nGender= ");
        gets(arr[i].gender);
        //printf("\nMarks= ");
        scanf("%f",&arr[i].marks);
    }
}
//this function prints best girl student
void printhigh(struct student arr[],int n){
    int i,j,code;
    char dummy[]="girl";//storing girl as an array
    float max=-1;
    for(i=0;i<n;i++){
        for(j=0;arr[i].gender[j]!='\0';j++){
            if(arr[i].gender[j]==dummy[j]){//checking if student is girl
                if(arr[i].marks>max){
                    max=arr[i].marks;
                    code=i;
                }
            }
        }
    }
    printf("\nBest girl student: %s",arr[code].name);
}
int main(){
    int n,i,j,d;//d counter is to take name input
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct student arr[n];
    printf("Enter the student details: \n");
    input(arr,n);
    printf("\nPrinting the student records..\n");
    printrec(arr,n);
    printhigh(arr,n);
    return 0;
}
/*added print statements of enter name, gender and marks to be explicit. they are commented out in the code.
we have to press enter after entering name to record name*/


