
/*name- samares Malik
  roll no-22ME10072
  assignment 8 q3*/
#include<stdio.h>
#include<string.h>
struct student{
    char rollno[10];
    float marks[3];
    float total;

};

void bubble_sort(float a[],int size){
    float t;
    char T[10];
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]<a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1]=t;

            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    float arr_total[n];
    struct student arr[n];
    for(int i=0;i<n;i++){
        char r[10];
        scanf("%s%f%f%f",&r,&arr[i].marks[0],&arr[i].marks[1],&arr[i].marks[2]);
        strcpy(arr[i].rollno,r);
        /*for(int j=0;j<3;j++){
            arr[i]
        }*/
        arr_total[i]=arr[i].marks[0]+arr[i].marks[1]+arr[i].marks[2];
        arr[i].total=arr[i].marks[0]+arr[i].marks[1]+arr[i].marks[2];

    }
    /*for(int i=0;i<n;i++){
        printf("%f\n",arr[i].total);
    }*/
    /*for(int i=0;i<n;i++){
        printf("%s\n",arr[i].rollno);
    }*/
    bubble_sort(arr_total,n);
    /*for(int i=0;i<n;i++){
        printf("%f ",arr_total[i]);
    }*/
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j].total=arr_total[i]){
                printf("%s\n",arr[j].rollno);
                printf("Marks:%f %f %f\n",arr[j].marks[0],arr[j].marks[1],arr[j].marks[2]);
                printf("Total: %f\n",arr_total[i]);
                break;
            }

        }
    }







    return 0;
}
