/* Name- Pushkaraj Jagtap
   Roll no.- 21MF3IM12
   Codeblock
   Question 4*/

#include<stdio.h>
#define MAX 20

int best_girl(int class[],int n){    // DEFINING A FUCTION TO FIND THE GIRL WITH HIGHEST MARKS
   int n;
   float max;
    for(int i=0; i<=n;i++){
        if (class[i].gender[]==girl){
             if(max<class[i].marks){
                 max=class[i].marks;
             }
             else{
                 max=max;
             }
            break;
        }
    }
     return(max);
}
int main(){
    int n,k,b,max;
struct student{        //DEFINING AN STRUCTURE
    char name[MAX];
    char gender[MAX];
    float marks;
  };
    struct student class[n];  // DEFINING AN ARRAY CLASS WHICH GIVE THE STUDENT INFO IN THAT ARRAY
    printf("Enter the number of students:");
    scanf("%d",&n);

     printf("Enter name,gender,marks");
     for (k=0;k<=n;k++){
    scanf("%c%c%f",&class[k].name[MAX],&class[k].gender[MAX],&class[k].marks);   //GETTING INPUT FROM THE USER
    printf("%c%c%f",class[k].name[MAX],class[k].gender[MAX],class[k].marks);      //PRINTING THE INPUT
     }

     b=best_girl(class[n],n);                // function best girl used
     printf("The best girl is :",class[max].name[MAX]);

     }
