/* Name - Shruti Srivastava
   Roll no - 21EE30025;
   Dept - Electrical Engg Dual Degree
   Package - CodeBlocks 20.03
   Windows 10
   Section 3
   Assignment class - 2 */

# include<stdio.h>
int main()
{
    int num,n;
    printf("Enter the 3 digit number\n");
    scanf("%d",&num);

    n= num;

    printf("The Reversed number is\n");
    int d = n%10;
    int n1= n/10;
    printf("%d",d);
    int t= n1%10;
    int n2= n1/10;
    printf("%d",t);
    int r= n2%10;
    printf("%d",r);

    return 0;


    }
