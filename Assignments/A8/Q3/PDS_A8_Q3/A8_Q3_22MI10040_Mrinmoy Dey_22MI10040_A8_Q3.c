/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Assignment :: 8
Question :: 3
*/
#include <stdio.h>
struct student{
    char rollno[10];
    float marks[3];
    float total;
    float temp;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student temp;
    struct student s[n];
    for (int i=0;i<n;i++){
        scanf("%s",s[i].rollno);
        for (int j=0;j<3;j++){
            scanf("%f",&s[i].marks[j]);
        }
        s[i].total=0;
        for (int j=0;j<3;j++){
            s[i].total+=s[i].marks[j];
        }
    }
    printf("Student Records: \n");
    for (int i=0;i<n;i++){
        printf("Roll NO: %s\n",s[i].rollno);
        printf("Marks: ");
        for (int j=0;j<3;j++){
            printf("%.2f ",s[i].marks[j]);
        }
        printf("\n");
        printf("Total: %.2f\n",s[i].total);
    }

    for(int item=0;item<n;item++){
        for(int i=item+1;i<n;i++){
            if (s[item].total<s[i].total){
                temp = s[item];
                s[item]=s[i];
                s[i]=temp;
            }
        }
    }
    printf("\n");
    printf("Sorted Student Records: \n");
    printf("Student Records: \n");
    for (int i=0;i<n;i++){
        printf("Roll NO: %s\n",s[i].rollno);
        printf("Marks: ");
        for (int j=0;j<3;j++){
            printf("%.2f ",s[i].marks[j]);
        }
        printf("\n");
        printf("Total: %.2f\n",s[i].total);
    }

}


