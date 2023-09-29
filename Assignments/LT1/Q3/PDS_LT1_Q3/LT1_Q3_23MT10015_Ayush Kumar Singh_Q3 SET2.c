//Roll no:. 23MT10015
//Name:AYUSH KUMAR SINGH
#include <stdio.h>

int main(){
    int a[100];
    int max=0;
    int max2=0;
    int min = 10000000;
    int min2= 1000000;
    for(int i = 0; i<100; i++){
            printf("\nEnter number: ");
        scanf("%d", &a[i]);

        if(a[i]<0){break;}
        if(a[i]>=max){max = a[i];}
        if(a[i]<=min){min = a[i];}
        for (int j=0; j<=i;j++){
        if(a[j]>max2 && a[j]<max){max2 = a[j];}
        if(a[j]<=min2 && a[j]>min){min2 = a[j];}
        }
        if(i==0){
                printf("Largest: %d\n2nd Largest: Not Entered\nSmallest: %d\n2nd Smallest: Not Entered\n", max, min);
        }else{
        printf("Largest: %d\n2nd Largest: %d\nSmallest: %d\n2nd Smallest: %d\n", max, max2, min, min2);

    }
}
return 0;}
