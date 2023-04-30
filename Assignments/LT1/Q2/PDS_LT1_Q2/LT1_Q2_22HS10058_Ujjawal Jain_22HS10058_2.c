/*sec2
Assignment no.5
Roll no. 22HS10058
Name - Ujjawal Jain
Question no. 2
*/
#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enter the integer : ");
    scanf("%d",&n);
    int digit = 0;
    a=b=c=n;
    if (a<0) a = a*-1;
    b=c=a;
    while(a>0){
        a=a/10;
        digit = digit + 1;
    }
    int d = 1;
    int cou = digit;
    while (cou--){
        d= d*10;
        }
        int di =d;
        int x=d;

    if (b%2 == 0){
        printf("Least significant digits to most significant digits : \n");
        for(int i =digit; i<=digit && i> 0;i--){


                printf("%d  ",b%x);
                x= x/10;

        }

    }


    else{
        printf("Most significant digits to least significant digits : \n");
             for(int i =digit; i<=digit && i> 0;i--){
                    int r =(c-c%(d/10))/(d/10);
                printf("%d  ",r);
                d= d/10;



    }
    }


    int rev = 0;
    int orig =n;
    while(n){
        rev = rev + (n%10)*(di/10);
        di = di/10;
        n = n/10;
    }
    printf("\nReverse number = %d\n",rev);
    printf("Difference between Reverse and original number = %d",((rev-orig)>=0) ? (rev-orig) : (rev-orig)*-1 );



    return 0;
}
