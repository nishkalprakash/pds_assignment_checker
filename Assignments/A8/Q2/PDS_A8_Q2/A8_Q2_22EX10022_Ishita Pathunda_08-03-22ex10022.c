#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char RollNo[10];
    float marks[3];
    float total;
};
int main(){
    int n;
    struct student *css;
    scanf("%d",&n);
    css=(struct student*)malloc(n*sizeof(struct student));

    for(int i=0;i<n;i++){
        scanf("%s",&css[i].RollNo);
        for(int i=0;i<3;i++){
            scanf("%f",&css[i].marks);
            css[i].total=0+css[i].marks;
        }
    }
    printf("students records :\n");
    printf("<print in the order read> \n");
    for(int i=0; i<n;i++){
        printf("roll no:%s/n",css[i].RollNo);
        for(int i=0;i<3;i++){
            printf("roll no:%f/n",css[i].marks);
        }
        printf("total:%f /n",css[i].total);
    }

    return 0;
}
