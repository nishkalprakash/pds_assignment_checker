
/*
name: JANAK PATEL
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
Test 3: question 4

*/



#include <stdio.h>

int main()
{
    char a[500];     // assume maximum 500 character lengh
    printf("enter expression : ");
    gets(a);
    if (a[1] == NULL)
    {
        printf("result : unmatched parenthesis");
        return 0;

    }
    int p;
    char f[3] = { '(','{' ,'['};
    char b[3] = { ')','}',']'};
    for (int n =0; n <500; n++ ){
        for(int m ; m<3; m++){
            if (a[n]==f[m]){
                p=m;
                break; // break if we find matched parenthesis
                    // otherwise go ahead
            }
            else if (a[n]==b[m]){
                if (m!=p){
                    printf("result: unmatched parenthesis");
                    return 0;
                }
                break;
            }
        }
    }
    printf("result : matched parenthesis ");
    return 0;
}

