/*sec2
Assignment no.9
Roll no. 22HS10058
Name - Ujjawal Jain
Question no. 3
*/
#include<stdio.h>
struct Student{
    char RollNo[10];
    float marks[3];
    float total;
};

void bubble (struct Student x[], int n) {
 int temp;
 for (int i = 0; i < n; i++){
 for (int j = 0; j < n-i-1; j++){
 if (x[j].total > x[j+1].total) {

 temp = x[j].total;
 x[j].total = x[j+1].total;
 x[j+1].total = temp;
 }
 }
}
}
int main(){
int n;
scanf("%d",&n);
struct Student Study[n];
for(int i = 0;i<n;i++){
    scanf("%s",Study[i].RollNo);
    for(int j = 0;j<3;j++){
    scanf("%f",&Study[i].marks[j]);
    }

Study[i].total = Study[i].marks[0] + Study[i].marks[1] +Study[i].marks[2];
}
for(int i = 0;i<n;i++){
    printf("Roll No :%s \n",Study[i].RollNo);
    printf("Marks :");
    for(int j = 0;j<3;j++){
    printf(" %0.2f ",Study[i].marks[j]);
    }
    printf("\nTotal : %0.2f\n",Study[i].total);
}


bubble(Study,n);

for(int i = n-1;i>=0;i--){
    printf("Roll No :%s \n",Study[i].RollNo);
    printf("Marks :");
    for(int j = 0;j<3;j++){
    printf(" %0.2f ",Study[i].marks[j]);
    }
    printf("\nTotal : %0.2f\n",Study[i].total);
}



return 0;
}
