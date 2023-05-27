#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
   sec-2
   Assignment no.- 8
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 3
*/

int main(){

struct student{
    char RollNo[10];
    float marks[3];
    float total;
};

int n;
float sum;
scanf("%d", &n);
struct student ptr[n];

for(int i=0; i<n; i++){
    sum=0;
    scanf("%s", ptr[i].RollNo);
    for(int j=0; j<3; j++) {
        scanf("%f", &ptr[i].marks[j]);
        sum+= ptr[i].marks[j];
    }
    ptr[i].total = sum;
}

for(int i=0; i<n; i++){
    for(int j=0; j<n-i-1; j++){
        if(ptr[j].total>ptr[j+1].total){
            struct student temp = ptr[j];
            ptr[j]=ptr[j+1];
            ptr[j+1]=temp;
        }
    }
}

printf("Student Records\n\n");
printf("Sorted Student Records:\nStudent Records:");
for(int i=n-1; i>=0; i--){
    printf("\nRollNo: %s\n", ptr[i].RollNo);
    printf("Marks:");
    for(int j=0; j<3; j++) printf(" %f", ptr[i].marks[j]);
    printf("\nTotal: %f", ptr[i].total);
}

return 0;
}
