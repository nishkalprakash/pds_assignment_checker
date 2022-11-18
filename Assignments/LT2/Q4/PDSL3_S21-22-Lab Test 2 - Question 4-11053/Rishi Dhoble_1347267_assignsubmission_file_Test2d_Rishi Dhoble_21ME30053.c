/*
Name- Rishi Dhoble
Roll no- 21ME30053
Sec-3
Package- Code Blocks
Q4
*/
#include<stdio.h>
#define MAX 100





int main() {

     struct Student {              //structure created

        char name[100];
        char gender[1];
        float marks;
    }arr[MAX];                //declare array

    int n;                       //number of students
    int i;

    printf("number of entries: \t"); scanf("%d", &n); printf("\n");     //no of entries

    for (i=0; i<n; i++) {                            //loop to fill the array
        printf("enter details: \n");

        printf("Name (only one word): \t"); scanf("%s", arr[i].name);
        //printf("\n");

        printf("Gender (m/f): \t"); scanf("%s", arr[i].gender);
        //printf("\n");

        printf("Marks: \t"); scanf("%f", &arr[i].marks);
        printf("\n");
    }


    printf("Sr. No\tName\tGender\tMarks\n");            //printing
    for (i=0; i<n ; i++) {
        printf("%d\t%s\t%s\t%f\n", i+1, arr[i].name, arr[i].gender, arr[i].marks);
    }

    printf("\n\n");                    //making space

    int index=-1;          //initializing index for greatest marks

    for (i=0; i<n; i++){

        if (arr[i].gender[0] == 'f') {
            if (index == -1 || arr[i].marks > arr[index].marks) {            //condition for greater marks or first girl
                index = i;                                                   //just need the index
            }
        }
    }

    printf("The girl with greatest marks is %s\n", arr[index].name);         //final output

return 0;
}
