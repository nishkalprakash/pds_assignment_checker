// TEJAARKA PIRIDI


//21MT10036



//ASSIGNMENT 5B



#include<stdio.h>


int main()

  {


   int a[10][10], i, j, number,sm, p, large, f = 1;



   printf("size of  the square matrix is :");



   scanf("%d", & number);



   printf("Enter ALL THE 2D array elements:");


   for (i = 0; i < number; i++) {


       for (j = 0; j < number; j++) {


           scanf("%d", & a[i][j]);


       }
   }

   printf("All the Elements of the 2D array is:");


   for (i = 0; i < number; i++)

        {
       printf("\n");


       for (j = 0; j < number; j++) {

           printf("%d ", a[i][j]);

       }
   }

   /* Logic start here */
   for (i = 0; i < number; i++)
    {

       p = 0;
       sm = a[i][0];

       for (j = 0; j < number; j++)
        {

           if (sm > a[i][j])

            {
               sm = a[i][j];


               p = j;
           }

       }

       large = 0;


       for (j = 0; j < number; j++)
        {
           if (large < a[j][p])
           {
               large = a[j][p];
           }

       }


       if (sm == large)
        {

           printf("\nValue of saddle point:%d", sm);

           f = 0;

       }
   }

   if (f > 0)

       printf("\nNo saddle point");


   return 0;
}
