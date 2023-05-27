//sec 2
//Assignment no-8
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-3
#include<stdio.h>
struct student{
   char rollno[10];
float marks[3];
float total;
};
int main(){
   int n;
   printf("Enter the value:");
   scanf("%d", &n);
   struct student s[n];
   for(int i=0; i<n; i++){
      scanf("%s %f %f %f", &s[i].rollno, &s[i].marks[0], &s[i].marks[1], &s[i].marks[2] );
   }
   for(int i=0; i<n; i++){
     s[i].total= s[i].marks[0]+s[i].marks[1]+s[i].marks[2];
   }
   float arr[n+1];
   for(int i=0; i<n; i++){
       arr[i]=s[i].total;

   }
   printf("Sorted student records:\n ");
    printf("Student records:\n ");
   int max=arr[0];
   for(int i=0; i<n; i++){
   for(int j=i+1; j<n; j++){
     if(arr[j]>arr[i]){
       int temp=arr[j];
       arr[j]=arr[i];
       arr[i]=temp;
     }

   }

   }
   for(int i=0; i<n; i++){
     for(int j=0; j<n; j++){
        if(arr[i]==s[j].total){
            printf("Roll no:%s\n", s[j].rollno);
            printf("Marks:%f %f %f\n", s[j].marks[0],s[j].marks[1],s[j].marks[2]);
            printf("Total:%f\n", s[j].total);
        }
     }
   }
   return 0;
}
