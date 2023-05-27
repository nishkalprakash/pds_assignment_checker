#include<stdio.h>
#include<stdlib.h>
struct student{
    char RollNo[10];
    float marks[3];
    float total;
    }stu;
student *sort(student *array, int n){
    for(int i=0;i<n; i++) {
        for(int j=i;j<n; j++) {
            while(array[i].total<array[j].total) {
                stu copy;
                copy - array[i];
                array[i]= array[j];
                array[j] = copy
            }
        }
    }
    return array;
    
}
int main() {
    int n;
    scanf("%d",&n);
    stu *class_list;
    class_list = (student *) malloc(n*sizeof(stu)) {
    }
}