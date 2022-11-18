/* Name - Shruti Srivastava
   Roll no - 21EE30025
   Dept - Electrical Engg Dual Degree
   Package - CodeBlocks 20.03
   Assignment class - 2
   Windows 10
   Section 3*/
# include<stdio.h>
# include<math.h>
int main()
{
   int m,day,n,k;
   float f;
   printf("Enter the number of machines\n");
   scanf("%d",&m);

   printf("\nEnter the day number\n");
   scanf("%d",&day);

   switch(day)
   {
       case 1: n= m;
               printf("Number of manufactured cars %d\n",n);
               break;
       case 2: n = floor(m + m/2 + m/4);
               printf("Number of manufactured cars %d\n",n);
               break;
       case 3: printf("Enter machines under inspection\n");
               scanf("%d",k);
               n = ceil(m-k + (m-k)/2 + (m-k)/4);
               printf("Number of manufactured cars %d\n",n);
               break;
       case 6: printf("Enter machines under inspection\n");
               scanf("%d",k);
               n = ceil(m-k + (m-k)/2 + (m-k)/4);
               printf("Number of manufactured cars %d\n",n);
               break;
      default: printf("Enter boosting fraction\n");
               scanf("%f",&f);
               if(f>0 && f<1)
               {   n= ceil( m + (m*f));
                   printf("Number of manufactured cars %d\n",n);

                }
                else{
                    printf("wrong input");
                    }


        }

        return 0;
        }





