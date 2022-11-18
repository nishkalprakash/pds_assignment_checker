/* Name - Shruti Srivastava
   Roll no - 21EE30025
   Dept - Electrical Engg Dual Degree
   Package - CodeBlocks 20.03
   Assignment class - 2
   Windows 10
   Section 3 */
# include<stdio.h>
int main()
{
    int a,u,alpha;
    float t,d,s;
    printf("Enter the value of x-coordinate,velocity,acceleration respectively\n");
    scanf("%d%d%d",&a,&u,&alpha);
    printf("\nEnter the time in seconds\n");
    scanf("%f",&t);

    s = ( (u*t) + (0.5*alpha*t*t));

    d = s + a;

    printf("\nThe distance from origin is%f",d);

    return 0;



    }
