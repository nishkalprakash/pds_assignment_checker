# include <stdio.h>
 int main()
 {
     int n1,n2,d1,d2,D1,D2;
     printf("Enter 2 numbers in between -999 and 999");
     scanf("%d %d",&n1,&n2);
     if((n1<(-999))||(n1>999)||(n2<(-999))||(n2>999))
        printf(" numbers entered are not valid");

     else if(((n1>=100)&&(n2>=100))||((n1<=-100)&&(n2<=-100)))
    {    d1=n1%10;
         d2=n1/100;
         D1=n2%10;
         D2=n2/100;


         if((d1==D2)&&(d2==D1))
            printf("The entered numbers form Perfect pair");
         else
            printf(" The entered numbers do not form a perfect pair");

    }
     else if(((n1>=10  && n1<=99)&&(n2>=10 && n2<=99))||((n1>=-99 && n1<=-10)&&(n2>=-99 && n2<=-10)))
        {

            d1=n1%10;
            d2=n1/10;
            D1=n2%10;
            D2=n2/10;
            if((d1==D2)&&(d2==D1))
                printf("The entered numbers form Perfect pair");
             else
                printf(" The entered numbers do not form a perfect pair");


        }
       else if((-9<=n1<=9)&&(-9<=n2<=9))
            {if(n1==n2)
                printf("The entered numbersform a perfect pair");
            else
                printf("The entered numbers do not form a perfect pair");
            }

 }

