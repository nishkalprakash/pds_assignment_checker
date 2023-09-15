#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter number of students (Max 10) \n");
    scanf("%d", &n);
    unsigned int roll [n];
    float cgpa [n];
    float sum = 0;

    for(int i=0; i<n;i++){
        printf("Enter Roll No. = ");
        scanf("%u", &roll[i]);
        printf("Enter CGPA = ");
        scanf("%f", &cgpa[i]);
        }
        printf("Roll No. \t CGPA");
        for(int i=0; i<n;i++){
            printf("\n%u \t\t %0.2f", roll[i], cgpa[i]);
        }
        for(int i=0; i<n;i++){
            sum = sum+cgpa[i];
        }
        float avg = sum/n;
        printf("\nAverage CGPA of all the students = %0.2f", avg);

        for(int i=0; i<n;i++){
            for(int j=i+1; j<n;j++){
                if(cgpa[i] == cgpa[j]){
                    printf("\nRoll numbers %u and %u have same CGPA of %0.2f", roll[i], roll[j],cgpa[i]);
                }
            }
        }

    return 0;

}
