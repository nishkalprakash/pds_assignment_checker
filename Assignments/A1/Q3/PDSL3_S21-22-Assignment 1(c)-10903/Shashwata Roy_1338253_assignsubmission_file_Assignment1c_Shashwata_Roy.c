/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>
#include<math.h>

int main(){
    double n,f;
    int m,k,day;
    printf("Enter the number of machines: ");
    scanf("%d",&m);
    printf("Enter the day number (1-7): ");
    scanf("%d",&day);
    switch(day){
        case 1: n=m;break;
        case 2: n=m+(m/2.0)+(m/4.0);break;
        case 3: {
            printf("Enter the no. of machines under inspection: ");
            scanf("%d",&k);
            n=(m-k)+(m-k)/2.0+(m-k)/4.0;
            break;
            }
        case 4: {
            printf("Enter boosting fraction: ");
            scanf("%lf",&f);
            n=m+m*f; break;
            }
        case 5: {
            printf("Enter boosting fraction: ");
            scanf("%lf",&f);
            n=m+m*f; break;
            }
        case 6: {
            printf("Enter the no. of machines under inspection: ");
            scanf("%d",&k);
            n=(m-k)+(m-k)/2.0+(m-k)/4.0;
            break;
            }
        case 7: {
            printf("Enter boosting fraction: ");
            scanf("%lf",&f);
            n=m+m*f; break;
            }
        default: printf("Error");break;
    }
    printf("Number of manufactured cars = %d",(int)round(n));
return 0;
}
