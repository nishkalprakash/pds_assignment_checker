//Aryan Kubal
//21MT30012
//ASSIGNMENT1c
#include <stdio.h>
int main()
{
    int n,m,day;
    int k;
    float boosting_fraction;
    printf("Give number of machines: ");
    scanf("%d",&m); // input number of machines
    printf("Give day number(1-7): "); 
    scanf("%d",&day); // input number related to the specific day
    float x;
    // checking for different conditions
    switch(day)
    {
        case 1:
            n=m;
            printf("Number of manufactured cars = %d",n);break;
            
        case 2:
            x=m+m/2.0+m/4.0;
            n=x;
            float temp1=n; //variable for rounding off
            if(x-temp1>=0.5) n=x+1;
            printf("Number of manufactured cars = %d",n);break;
           
        case 3:
        case 6:
            
            printf("Enter no of machines under inspection: ");
            scanf("%d",&k);
            x=m-k+(m-k)/2.0+(m-k)/4.0;
            n=x;
            float temp2=n; //variable for rounding off
            if(x-temp2>=0.5) n=x+1;
            printf("Number of manufactured cars = %d",n);break;
            
        case 4:
        case 5:
        case 7:
           
            printf("Enter boosting fraction: ");
            scanf("%f",&boosting_fraction);
            x=m+boosting_fraction*m;
            n=x;
            float temp3=n; //variable for rounding off
            if(x-temp3>=0.5) n=x+1;
            printf("Number of manufactured cars = %d",n);break;
           
        default :printf("Error!");
    }
    return 0;
}