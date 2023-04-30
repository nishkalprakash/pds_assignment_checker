/*Name- Mohul Dutta
Roll no. - 22EC30035
Problem 2
Description- questions related to subinteger*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the Integer:");
    scanf("%d",&n);

    int k=n,a=1;
        while(k!=0){
            a=a*10;
            k=k/10;
        }
        k=n;
        if(k<0)
            k=-k;
        if(n%2==0){

            printf("Least significant digits to most significant digits: \n");
            while(k%a!=0){
                printf("%d, ",k%a);
                if(((k%a)%10==0)&&(a==100)){
                   printf("0");
                          }
                a=a/10;
            }
            printf("\n\n");
            int rev=0;
            if(n>0){
                while(k!=0){
                    rev=rev*10+k%10;
                    k=k/10;
                }
            }
            else{
                while(k!=0){
                    rev=rev*10+k%10;
                    k=k/10;
                }
                rev=-rev;
            }
            printf("Reverse number=%d",rev);
            (rev>n)?printf("\nDifference between Reverse and orginal= %d",rev-n):printf("\nDifference between Reverse and orginal= %d",n-rev);
        }
        if(k%2==1){
           printf("Most significant digits to least significant digits: \n");
           while(a!=1){
            printf("%d, ",k/(a/10));

            a=a/10;
           }
           printf("\n\n");
            int rev=0;
            if(n>0){
                while(k!=0){
                    rev=rev*10+k%10;
                    k=k/10;
                }
            }
            else{
                while(k!=0){
                    rev=rev*10+k%10;
                    k=k/10;
                }
                rev=-rev;
            }
            printf("Reverse number=%d",rev);
            (rev>n)?printf("\nDifference between Reverse and orginal= %d",rev-n):printf("\nDifference between Reverse and orginal= %d",n-rev);


        }


    }


