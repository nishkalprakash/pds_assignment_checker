#include<stdio.h>
int main()
{
    long int monthin,houseloan,LIC,MEDI ,yearlyin,finalin,taxrates;
    printf("enter your monthly income ") ;
    scanf("%lu",&monthin) ;
    printf("enter  your house loan ") ;
    scanf("%lu",&houseloan) ;
    printf("enter  your Life insurance premium ") ;
    scanf("%lu",&LIC) ;
    printf("enter  your Medical insurance ") ;
    scanf("%lu",&MEDI) ;
    yearlyin = 12*monthin ;
    if(1000000<=yearlyin)
    {
       if(houseloan<250000)
       {
           yearlyin= yearlyin-houseloan ;
       }
       else
        {
            yearlyin    = yearlyin - 250000 ;
        }

       if(LIC<=150000)
           {
               yearlyin = yearlyin - LIC ;

           }
           else
           {
               yearlyin = yearlyin - 150000 ;
           }

        if(MEDI<=50000)
               {
                   yearlyin= yearlyin-MEDI ;
               }
               else
               {
                   yearlyin = yearlyin - 50000 ;
               }
    }

    if(0<=yearlyin && yearlyin<250000)
    {
        taxrates = 0  ;
    }
    else if(250001<=yearlyin && yearlyin<=500000)
    {
        taxrates = (5*yearlyin)/100 ;
    }
     else if (500001<=yearlyin && yearlyin<=750000)
    {
        taxrates = 12500+ (10*yearlyin)/100 ;
    }

   else if(750001<=yearlyin && yearlyin<=1000000)
   {
       taxrates = 37500 + (15*yearlyin)/100 ;

   }
   else if(1000001<=yearlyin && yearlyin<=1250000)
   {
       taxrates = 75000 + (20*yearlyin)/100 ;
   }
   else if(1250001<=yearlyin && yearlyin<=1500000)
   {
       taxrates = 125000 + (25*yearlyin)/100 ;
   }
   else if (150000<yearlyin)
   {
       taxrates = 187500 + (30*yearlyin)/100 ;

   }
   printf("Total tax : %lu",taxrates) ;
   return 0 ;




}
