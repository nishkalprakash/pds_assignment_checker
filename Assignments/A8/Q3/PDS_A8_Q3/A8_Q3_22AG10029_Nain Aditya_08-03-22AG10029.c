#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*NAME- NAIN ADITYA
SECTION 2 | ROLL - 22AG10029
LAB - 8 QUESTION 3*/
typedef struct student{
    char Rollno[10];
    float marks[3];
    float total;}student;
int main(){
    int n;
    scanf("%d",&n);
    student std[n];
    float ar[n];
    for (int i =0;i<n;i++){
        scanf("%s",std[i].Rollno);
        float total=0;
        for (int j=0;j<3;j++){float c;
                scanf("%f",&std[i].marks[j]);
                total+=std[i].marks[j];}
                std[i].total=total;
                ar[i]=total;}
    printf("student records :\n");
    for (int i=0;i<n;i++){
        printf("Roll NO : %s\n",std[i].Rollno);
        printf("Marks");
        for (int j =0;j<3;j++)printf("%f ",std[i].marks[j]);
        printf("\n");
        printf("Total marks : %f",std[i].total);
        printf("\n");
    }
    for(int i=0;i<n;i++) ar[i]=std[i].total;
    for (int i =0;i<n;i++){
        for (int j =i+1;j<n;j++){
            float t;
            if (ar[i]<ar[j]){t=ar[i];ar[i]=ar[j];ar[j]=t;}
        }
        }
    printf("\nsorted student Records: \n");
    for (int i =0;i<n;i++){
        for (int j=0;j<n;j++){
            if (ar[i]==std[j].total){
                 printf("Roll NO : %s\n",std[j].Rollno);
                 printf("Marks");
                 for (int j1 =0;j1<3;j1++)printf("%f ",std[j].marks[j1]);
                 printf("\n");
                 printf("Total marks : %f",std[j].total);
                 printf("\n");}}}
    return 0;

    }


