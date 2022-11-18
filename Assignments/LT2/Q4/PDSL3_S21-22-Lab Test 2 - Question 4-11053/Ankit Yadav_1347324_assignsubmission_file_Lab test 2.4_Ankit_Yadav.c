/*
Name : Ankit Yaadav
Roll No  : 21EE30005
Department : Electical Engineering
Package : Codeblocks
Lab Test : 2
*/


#include<stdio.h>
#define Max 50

 struct student {

     char name[20];                             //structure student
     char surname[20];
     char gender[5];
     float marks;


} s1[Max];

 void studentinput(struct student b[],int n){

int i;
printf("Enter the Student Data");                                    //function for input

for(i=0;i<n;i++){

    scanf("%s %s %s %f",&b[i].name,&b[i].surname,&b[i].gender,&b[i].marks);
}

}

void studentoutput(struct student c[],int n){
                                                                      //function for output
int i;

printf("Printing the data\n");

for(i=0;i<n;i++){

    printf("%s %s %s %f",c[i].name,c[i].surname,c[i].gender,c[i].marks);

}


}

void bestgirlstudent(struct student f[],int n){

   int i;
   char best[20],sbest[20];

   struct student t;
                                                                       //function to find best girl
   t=f[0];

   for(i=0;i<n;i++){

    if((f[i].gender=="girl")){

        if(t.marks<f[i].marks){

            t=f[i];

        }

    }

   }

   printf("The Best Girlstudent is %s %s",t.name,t.surname);

}


int main(){

 int n;
 printf("Enter the number of students \n");
 scanf("%d",&n);

 studentinput(s1,n);

 studentoutput(s1,n);                                             //calling the functions

 bestgirlstudent(s1,n);



return 0;}
