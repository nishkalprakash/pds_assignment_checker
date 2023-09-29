//Roll no:. 23MT10015
//Name:AYUSH KUMAR SINGH
#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int a[100];
    scanf("%d", &n);
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;
    int count7 = 0;
    int count8 = 0;
    int count9 = 0;

    for (int i=0; i<n;i++){
        a[i]= ((rand()%100));
    }for (int i=0; i<n;i++){
        printf("%d ", a[i]);
    }
    for(int i=0; i<n;i++){
        if(0<=a[i]<=9){
            count0++;
        }else if(10<=a[i]<=19){
            count1++;
        }else if(20<=a[i]<=29){
            count2++;
        }else if(30<=a[i]<=39){
            count3++;
        }else if(40<=a[i]<=49){
            count4++;
        }else if(50<=a[i]<=59){
            count5++;
        }else if(60<=a[i]<=69){
            count6++;
        }else if(70<=a[i]<=79){
            count7++;
        }else if(80<=a[i]<=89){
            count8++;
        }else if(90<=a[i]<=99){
            count9++;
        }
    }printf("\n0-9: %d\n", (count0*100)/n);
    printf("10-19: %d\n", (count1*100)/n);
    printf("20-29: %d\n", (count2*100)/n);
    printf("30-39: %d\n", (count3*100)/n);
    printf("40-49: %d\n", (count4*100)/n);
    printf("50-59: %d\n", (count5*100)/n);
    printf("60-69: %d\n", (count6*100)/n);
    printf("70-79: %d\n", (count7*100)/n);
    printf("80-89: %d\n", (count8*100)/n);
    printf("90-99: %d\n", (count9*100)/n);
    return 0;
}

