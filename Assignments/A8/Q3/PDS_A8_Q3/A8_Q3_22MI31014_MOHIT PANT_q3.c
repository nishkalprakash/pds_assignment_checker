#include <stdio.h>
#include <stdlib.h>
struct student {
    char RollNo[10];
    float marks[3];
    float total;
};
int main() {
struct student *ptr;
int n,f=0;

scanf("%d", &n);
float Total[n];
float gotal[n];


ptr = (struct student *)malloc(n * sizeof(struct student));
for (int i = 0; i < n; ++i) {

scanf("%s %f %f %f", (ptr + i)->RollNo, &(ptr + i)->marks[0] ,&(ptr + i)->marks[1], &(ptr + i)->marks[2]);
Total[f]=((ptr + i)->marks[0]+(ptr + i)->marks[1]+(ptr + i)->marks[2]);
gotal[f]=((ptr + i)->marks[0]+(ptr + i)->marks[1]+(ptr + i)->marks[2]);
f++;

}



printf("student record\n");
    for(int i=0;i<n;i++){
        printf("Roll no :%s",(ptr + i)->RollNo);
        printf("\n");
        printf("Marks %f",(ptr + i)->marks[0]);

        printf(" %f",(ptr + i)->marks[1]);

        printf(" %f",(ptr + i)->marks[2]);
        printf("\n");
        printf(" %f\n",Total[i]);

    }
    printf("sorted student data\n");
int min_loc (int x[ ], int k, int size)
{
int j, pos;
pos = k;
for (j=k+1; j<size; j++)
if (x[j] < x[pos])
pos = j;
return pos;
}
int sel_sort (int x[], int size) {
int k, m, temp;
for (k = 0; k < size-1; k++) {
m = min_loc (Total, k, size);

temp = x[k];
x[k] = x[m];
x[m] = temp;
}
}

free(ptr);

for(int i=0;i<n;i++){
    int x=Total[i];
    int j=0;
    while(gotal[j]!=x){
        j++;
    }
    j=n-j;
    printf("Roll no :%s",(ptr + j)->RollNo);
        printf("\n");
        printf("Marks %f",(ptr + j)->marks[0]);

        printf(" %f",(ptr + j)->marks[1]);

        printf(" %f",(ptr + j)->marks[2]);
        printf("\n");
        printf(" %f\n",gotal[j]);


}
return 0;
}
