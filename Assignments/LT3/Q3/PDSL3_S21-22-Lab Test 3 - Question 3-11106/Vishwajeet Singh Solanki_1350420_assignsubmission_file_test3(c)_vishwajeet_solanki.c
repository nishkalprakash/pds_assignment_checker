/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
*/
#include<stdio.h>

void printNumbers(int N ,int a,int b)                          //printNumbers function
{
    static int flag = 1;

    int x = N;

    if(N>9999){
            while (x > 0 && flag == 1) {

            int digit = x % 10;

            if (digit != a && digit != b)
                flag = 0;

            x = x / 10;
        }
        if (flag == 1 && N%(a+b)!=0){

           printf("%d \n",N);
        }


        printNumbers(N - 1,a,b);                                  //recursion

    }

}

int main()                                                        //main function
{
    int a,b;
    int N = 99999;
    printf("Enter two digits\n");
    scanf("%d %d\n",&a,&b);
    printNumbers(N,a,b);
    return 0;
}
