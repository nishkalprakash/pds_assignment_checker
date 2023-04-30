
# include<stdio.h>
# include<math.h>
int main(){
    int n;
    printf("enter the integer :");
    scanf("%d",&n);
    if(n%2!=0){
            for(n>0){
            n=n%10;
            n=n/10;
                printf("Least significant digits to most significant digits:");
                printf("reverse number = ");
                printf("Difference between reverse and original number = ");
            }

    }
    else if (n%2=0){
        for(n>0){
                n=n%10;
        n=n/10;
            printf("Most significant digits to least significant: ");
            printf("reverse number = ");
            printf("Difference between reverse and original number =  ")
        }
    }



return 0;

}
