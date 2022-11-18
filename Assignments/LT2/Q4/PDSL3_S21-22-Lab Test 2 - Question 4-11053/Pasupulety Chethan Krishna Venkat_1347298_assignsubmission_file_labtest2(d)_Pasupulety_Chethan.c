/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/




#include <stdio.h>
#define max 100

//defining the structure
struct student{
    char first_name[max];
    char second_name[max];
    char gender[max];
    float marks;
};

//function for printing max marks girl
void highestmarks(struct student data[],int n){

//initializing variables for using in the loop
    int i,j;
    int m=0;
    for(i=0;i<n;i++){
        if((data[i].gender)=="girl"){
            if(data[i].marks>m) m=data[i].marks;
        }
    }

    for(j=0;j<n;j++) {
        if(m==data[j].marks) break;
    }

  printf("the best girl is %s %s",data[j].first_name,data[j].second_name);
  return;


}

int main()
{
    int n,i,j,m=0;

    // defining c for storing space while entering the name of the student
    char c;
    //taking input of number of students
    printf("Enter number of students:"); scanf("%d",&n);

    //defining a student array of n elements
    struct student data[n];

    printf("Enter student details(in name,gender,marks order):\n");
    printf("while entering name, first enter first name and with a space the second name\n");


    for(i=0;i<n;i++){
      printf("enter for student %d\n",i+1);
       //taking the first name
       scanf("%s",data[i].first_name);

       //storing space bar
       scanf("%c",&c);

       //taking the second name
       scanf("%s",data[i].second_name);
       //taking the gender input
       scanf("%s",data[i].gender);
       //taking marks input
       scanf("%f",&data[i].marks);



    }

    // printing the student records
    printf("\nthe student records\n");
    for(i=0;i<n;i++){
        printf("%s %s-%s-%f\n",data[i].first_name,data[i].second_name,data[i].gender,data[i].marks);
    }

  //calling function to print highest marks girl.
   highestmarks(data,n);

return 0;
}



