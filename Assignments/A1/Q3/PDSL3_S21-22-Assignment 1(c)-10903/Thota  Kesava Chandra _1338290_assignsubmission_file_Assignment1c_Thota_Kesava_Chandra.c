/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/


#include <stdio.h>

int main()
{
    int n_machine,day,ncars,temp,k;
    float calc,bost;
    printf("Enter the number of machines: ");
    scanf("%d",&n_machine);
    printf("Enter the day number (1-7): ");
    scanf("%d",&day);
    switch (day)
    {
        case 1:
            ncars = n_machine;
            break;
        case 2:
            calc = n_machine + n_machine/2.0 + n_machine/4.0 ;
            temp= calc*10 ;
            if (temp%10 < 5)
            {
                ncars = temp/10;
            }
            else
            {
                ncars = temp/10 +1 ;
            }
            break;
        case 3:
            printf("Enter no. of machines under inspection: ");
            scanf("%d",&k);
            n_machine = n_machine-k;
            calc = n_machine + n_machine/2.0 + n_machine/4.0 ;
            temp= calc*10 ;
            if (temp%10 < 5)
            {
                ncars = temp/10;
            }
            else
            {
                ncars = temp/10 +1 ;
            }
            break;
        case 6:
            printf("Enter no. of machines under inspection: ");
            scanf("%d",&k);
            n_machine = n_machine-k;
            calc = n_machine + n_machine/2.0 + n_machine/4.0 ;
            temp= calc*10 ;
            if (temp%10 < 5)
            {
                ncars = temp/10;
            }
            else
            {
                ncars = temp/10 +1 ;
            }
            break;
        default:
            printf("Enter boosting fraction: ");
            scanf("%f",&bost);
            calc = n_machine + n_machine*bost ;
            temp= calc*10 ;
            if (temp%10 < 5)
            {
                ncars = temp/10;
            }
            else
            {
                ncars = temp/10 +1 ;
            }
            break;
    }
    printf("Number of manufactured cars = %d",ncars);
    return 0;
}
