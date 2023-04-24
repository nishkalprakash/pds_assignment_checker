/* Name: kakade Yash Ashok
   Roll no: 22PH10021
   PDS LAB TEST 1
   Set A
   Question 2 ;   */





#include <stdio.h>
#include <math.h>

int main()
{
    int n,t,n1,t1,a,n2;


    printf("Enter the integer: ");
    scanf("%d",&n);
     n1=n;
    n2=n;
    t=1;
    t1=1;



    if(n1%2==0){
        while(n1!=0){
                t=t*10;
        n1=n1/10;
        }


        while(n2>0){
             a=n2%t;
            printf("%d\t",a);

            t=t/10;
            n2=n2%t;

        }

    }


  return 0;

}


















