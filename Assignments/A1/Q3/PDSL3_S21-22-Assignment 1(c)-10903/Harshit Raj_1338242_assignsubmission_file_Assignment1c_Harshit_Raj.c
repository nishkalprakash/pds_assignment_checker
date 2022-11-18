/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/



#include <stdio.h>
int main() {

int day,m,k;
float f;

printf("enter number corresponding to a particular day: \n");
scanf("%d", &day);


printf("enter number of machines available m= \n");
scanf("%d", &m);




switch(day) {

case 1: printf("number of manufactured cars=%d",m);
break;

    case 2:printf("number of manufactured cars=%d", m+(m/2)+(m/4));
    break;

        case 3:printf("number of machines kept under inspection k= ");
               scanf("%d", &k);
            printf("number of manufactured cars=%d", m-k + (m-k)/2 + (m-k)/4) ;
        break;

            case 4:printf("number of manufactured cars=%d", m+m*f);
            break;

                case 5:printf("enter boosting factor f= ");
                       scanf("%f", &f);
                    printf("number of manufactured cars=%d", (m+(m*f)));
                break;

                    case 6: printf("number of manufactured cars=%d", m-k + (m-k)/2 + (m-k)/4) ;
                    break;

                        case 7:printf("number of manufactured cars=%d", m+m*f);
                        break;
}




return 0;
}
