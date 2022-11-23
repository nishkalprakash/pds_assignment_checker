/*Section 14
  Roll no:22CS10029
  Name:Gurram Dhanunjay
  Assignment no:3
  Description:Program to check points*/
/* Program to determine the electric bill as per given charges */
#include <stdio.h>
int main()
{ 
    float eunits;
    printf("Enter the electric units used up:\n");
    scanf("%f",&eunits);
    if (eunits<=100) printf("Rs.%f\n",1.2*(0.5*eunits));   //1.2 is to add extra 20%charges
    else if (eunits<=200) printf("Rs.%f\n",(50+(0.75*(eunits-100)))*1.2);
    else if (eunits<=300) printf("Rs.%f\n",(125+1.2*(eunits-200))*1.2);
    else printf("Rs.%f\n",(245+1.5*(eunits-300))*1.2);
    return 0;
}
