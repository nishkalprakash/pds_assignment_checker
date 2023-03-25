//22PH10002

#include <stdio.h>

int main(){
    //Initialization
    int a,b,c,d,e;
    int odd=0,even=0;                       //Variables to store number of odd and even integers
    printf("Enter five numbers:\n");

    scanf("%d",&a);
    if(a%2==1){odd++;}                      //Logic to check if number
    else{even++;}                           //is odd or even

    scanf("%d",&b);
    if(b%2==1){odd++;}
    else{even++;}

    scanf("%d",&c);
    if(c%2==1){odd++;}
    else{even++;}

    scanf("%d",&d);
    if(d%2==1){odd++;}
    else{even++;}

    scanf("%d",&e);
    if(e%2==1){odd++;}
    else{even++;}

    //Case of 3 odd numbers
    if(odd==3){
        int o1=0,o2=0,o3=0;             //Initializing variables to store odd numbers

        //Storing odd numbers from a,b or c as d and e cannot be the first odd numbers
        if (a%2==1) {o1 = a;}
        else if (b%2==1) {o1 = b;}
        else {o1 = c;}

        //Storing second odd number on the  basis of first stored odd number
        if (o1 == a){
            if (b%2 == 1) {o2 = b;}
            else if (c%2 == 1 ){o2 = c;}
            else {o2 = d;}
        }
        else if (o1 == b){
            if (c%2 == 1) {o2 = c;}
            else if (d%2 == 1){o2 = d;}
        }
        else if(o1 == c){o2 = d;}
        //Storing third odd number on the basis of second stored odd number
        if (o2 == b){
            if(c%2 == 1){o3 = c;}
            else if(d%2 == 1){o3 = d;}
            else {o3 = e;}
        }
        else if (o2 == c){
            if(d%2 == 1){o3 = d;}
            else {o3 = e;}
        }
        else if (o2 == d){o3 = e;}

        //Printing in ascending order
        printf("Smallest three odd numbers:\n");
        if (o1 < o2 && o1 < o3){
                printf("%d ", o1);
                if (o2 < o3){
                    printf("%d ", o2);
                    printf("%d ", o3);
                }
                else {
                    printf("%d ", o3);
                    printf("%d ", o2);
                }
            }
        if (o2 < o1 && o2 < o3){
                printf("%d ", o2);
                if (o1 < o3){
                    printf("%d ", o1);
                    printf("%d ", o3);
                }
                else {
                    printf("%d ", o3);
                    printf("%d ", o1);
                }
            }
        if (o3 < o1 && o3 < o2){
                printf("%d ", o3);
                if (o1 < o2){
                    printf("%d ", o1);
                    printf("%d ", o2);
                }
                else {
                    printf("%d ", o2);
                    printf("%d ", o1);
                }
            }
        }

    //Case of  3 even integers
    if (even == 3){
        printf("Largest number:\n");
        if(a>b && a>c && a>d && a>e){printf("%d",a);} // Logic to compare a to all varriables
        else if(b>c && b>d && b>e){printf("%d",b);}// Logic to compare b to rest varriables
        else if(c>d && c>e){printf("%d",c);}// Logic to compare c to rest varriables
        else if(d>e){printf("%d",d);}// Logic to compare d to rest varriables
        else {printf("%d",e);}
    }

    return 0;
}
