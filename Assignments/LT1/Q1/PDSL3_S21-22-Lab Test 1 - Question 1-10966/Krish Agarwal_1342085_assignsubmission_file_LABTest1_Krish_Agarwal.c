/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS code
*/
#include <stdio.h>
int main()
{
    //Variable Declaration
    int ms,hl,lip,mi,inc;
    float tax;
    //Taking Input
    printf("Enter your monthly salary: ");
    scanf("%d",&ms);
    printf("Enter your House loan(if any otherwise enter 0): ");
    scanf("%d",&hl);
    printf("Enter your Life insurance premium(if any otherwise enter 0): ");
    scanf("%d",&lip);
    printf("Enter your Medical insurance(if any otherwise enter 0): ");
    scanf("%d",&mi);

    inc=ms*12-hl-lip-mi;//calculating total income

    //Calculating tax based on the given slabs
    if(inc<=250000)
    tax=0.0;
    else if((inc>250000)&&(inc<=500000))
    tax=inc*0.05;
    else if((inc>500000)&&(inc<=750000))
    tax=12500.0+inc*0.10;
    else if((inc>750000)&&(inc<=1000000))
    tax=37500.0+inc*0.15;
    else if((inc>1000000)&&(inc<=1250000))
    tax=75000.0+inc*0.20;
    else if((inc>1250000)&&(inc<=1500000))
    tax=125000.0+inc*0.25;
    else
    tax=187500.0+inc*0.30;
    printf("Total Tax = %.2f",tax);//Displaying the total tax finally
}
