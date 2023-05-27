#include<stdio.h>
#include<stdlib.h>
struct student{
    char rollno[10];
    float marks[3];
    float total;
}c;
int main(){
    struct student *s;
    int n,i,j;
    float t,t1;
    scanf("%d",&n);
    s=(struct student *)malloc(n*sizeof(struct student));
    for (i=0;i<n;i++){
        scanf("%s%f%f%f",(s[i]).rollno,&((s[i].marks)[0]),&((s[i].marks)[1]),&((s[i].marks)[2]));
    }
    printf("Student Records\n");
    for (i=0;i<n;i++){
        printf("roll no:%s\nmarks: %.2f %.2f %.2f\n",s[i].rollno,((s[i].marks)[0]),((s[i].marks)[1]),((s[i].marks)[2]));
    }
    for(i=0;i<n;i++){
            t=((s[i].marks)[0])+((s[i].marks)[1])+((s[i].marks)[2]);
            s[i].total=t;
            }
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
                t=s[i].total;
                t1=s[i+1].total;
                if (t1>t){
                    c=s[i];
                    s[i]=s[i+1];
                    s[i+1]=c;
                }

        }
    }
    printf("\nSorted students record\n");
    for (i=0;i<n;i++){
        printf("roll no:%s\nmarks: %.2f %.2f %.2f \ntotal: %.2f\n",s[i].rollno,((s[i].marks)[0]),((s[i].marks)[1]),((s[i].marks)[2]),s[i].total);
    }


}
