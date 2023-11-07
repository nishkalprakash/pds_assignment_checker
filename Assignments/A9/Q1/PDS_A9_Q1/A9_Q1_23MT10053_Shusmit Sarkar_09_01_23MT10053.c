#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
    char fname[20];
    char lname[20];
    char address[40];
    long int mobnum;
    char grade[5];
    int m;
    float gpa;
}std;

//typedef struct student std;

std studarray[50];
int nStuds;

void enrolStuds(){
    printf("Enter the number of students ");
    scanf("%d",&nStuds);
    int n = nStuds;
    for(int i=0; i<n; i++){
        printf("Enter First Name \n");
        scanf("%s",studarray[i].fname);
        printf("Enter Last Name \n");
        scanf("%s",studarray[i].lname);
        printf("Enter Address \n");
        scanf("%s",studarray[i].address);
        printf("Enter Mobile Number \n");
        scanf("%ld",& studarray[i].mobnum);
    }
    for(int i=0; i<n; i++){
       printf("Roll Number %d\n",i);
       printf("First Name %s\n",studarray[i].fname);
       printf("Last Name %s\n",studarray[i].lname);
       printf("Address %s\n",studarray[i].address);
       printf("Mobile Number %ld\n",studarray[i].mobnum);
       printf("\n");
    }
    return;
}
void enterGrades(){
        int arr[10];
        int n =nStuds;
        printf("%d\n",n);
        printf("Inside eg\n");
        for(int i=0; i<n; i++)
        {
            printf("Roll Number %d\n",i);
            printf("First Name %s\n",studarray[i].fname);
            printf("Last Name %s\n",studarray[i].lname);
            printf("\n");
            printf("Enter grade = ");
            scanf("%s",studarray[i].grade);
            for(int j=0; j<5; j++)
            {
                if(studarray[i].grade[j] == 'E')
                    arr[j]=10;
                else
                {
                    if(studarray[i].grade[j] == 'A')
                        arr[j]=9;
                    else
                    {
                        if(studarray[i].grade[j] == 'B')
                            arr[j]=8;
                        else
                        {
                            if(studarray[i].grade[j] == 'C')
                                arr[j]=7;
                            else
                            {
                                if(studarray[i].grade[j] == 'D')
                                    arr[j]=6;
                                else
                                {
                                    if(studarray[i].grade[j] == 'P')
                                        arr[j]=5;
                                    else
                                    {
                                        if(studarray[i].grade[j] == 'F')
                                            arr[j]=0;
                                        else
                                            break;
                             int n =nStuds;
        printf("%d\n",n);
        printf("Inside eg\n");       }

                                }
                            }
                        }
                    }
                }
            }
            studarray[i].gpa = ( arr[0] + arr[1] + arr[2] + arr[3] + arr[4] )/ 5 ;
        }
        for(int i=0; i<n; i++)
        {
        printf("Roll Number %d\n",i);
        printf("First Name %s\n",studarray[i].fname);
       printf("Last Name %s\n",studarray[i].lname);
       printf("Address %s\n",studarray[i].address);
       printf("Mobile Number %ld\n",studarray[i].mobnum);
       printf("GPA is %f\n",studarray[i].gpa);
       printf("\n");
    }
    return;
}
void displayStuds(){
    int n =nStuds;
        printf("%d\n",n);
        printf("Inside Eg\n");
    for(int i=0; i<n-1; i++){
        for(int j=0; j<=n-2-i; j++){
            if(strcasecmp(studarray[j+1].fname,studarray[j].fname) < 0) {
                std temp;
                temp = studarray[j];
                studarray[j] = studarray[j+1];
                studarray[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
        {
        printf("Roll Number %d\n",i);
        printf("First Name %s\n",studarray[i].fname);
       printf("Last Name %s\n",studarray[i].lname);
       printf("Address %s\n",studarray[i].address);
       printf("Mobile Number %ld\n",studarray[i].mobnum);
       printf("GPA is %f\n",studarray[i].gpa);
       printf("\n");
    }
}
void dispMeritList(){
     int n =nStuds;
        printf("%d\n",n);
        printf("Inside Eg\n");
            for(int i=0; i<n-1; i++){
        for(int j=0; j<=n-2-i; j++){
            if(studarray[j].gpa>studarray[j+1].gpa) {
                std temp;
                temp = studarray[j];
                studarray[j] = studarray[j+1];
                studarray[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
        {
        printf("Roll Number %d\n",i);
        printf("First Name %s\n",studarray[i].fname);
       printf("Last Name %s\n",studarray[i].lname);
       printf("Address %s\n",studarray[i].address);
       printf("Mobile Number %ld\n",studarray[i].mobnum);
       printf("GPA is %f\n",studarray[i].gpa);
       printf("\n");
    }
    return;
}
int main(){
    nStuds = 0;
    int n;
    while(1){
    printf("1. Enroll student\n");
     printf("2. Enter grade\n");
      printf("3. Display students\n");
       printf("4. Search Student\n");
        printf("5. Edit student grades\n");
         printf("6. Modify student details\n");
          printf("7. Display Merit list\n");
           printf("8. Exit the programme\n");
    printf("Enter choice between 1 to 8");
    scanf("%d",&n);
    if(n>8 || n<1) return 0;
    if(n==1) enrolStuds();
    else if(n==2) enterGrades();
    else if(n==3) displayStuds();
    else if(n==4);
    else if(n==5);
    else if(n==6);
    else if(n==7)dispMeritList();
    else if(n==8)break;
     }
    return 0;
}
