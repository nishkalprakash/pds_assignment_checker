/* Name - Shruti Srivastava
   Roll no - 21EE30025
   Dept- electrical Engg Dual Degree
   Package- CodeBlocks 20.03
   Assignment class - 2
   Windows 10
   Section 3
   */
# include<stdio.h>
int main()
{
    char ch;
    float w,base,GST,Total;

    printf("Enter the type of wood\n");
    scanf("%c",&ch);

    printf("\nEnter the weight of wood in kg\n");
    scanf("%f",&w);

    if(ch == 'n')
    {
       base = 1100*w;
       GST = 0.2*base;
       Total = base + GST;
       }
    else
    {
       base = 780*w;
       GST = 0.15*base;
       Total = base + GST;
       }
     printf("Base Price = %0.2f",base);
     printf("\nGST = %0.2f",GST);
     printf("\nTotal Price = %0.2f",Total);

     return 0;

    }
