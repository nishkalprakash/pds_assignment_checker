#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    srand(time(0));
    int n,j=0,h,k,l,a_b=0,b_b=0,eq=0,eq1=0,w=0,r=0,tot_a=0,tot_b=0,y=0,t=0;
    printf("Enter the number of rounds.\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        j++;
        printf("Round %d \t : \n",j);
        int num=(rand()% (1000-5+1))+5;
        int num1=(rand()% (1000-5+1))+5;
        printf("A's number is = %d \t ",num);
        printf("B's number is = %d \n",num1);
        l=0;
         do{
            num/=10;
            l++;
         }while(num!=0);

         k=0;
         do{
            num1/=10;
            k++;
         }while(num1!=0);
      int n1=num;
        int n2=num1;
        if(l!=k)
        {
            printf("A's point is = %d\t",l);
            printf("B's point is = %d\n",k);
            tot_a+=l;
            tot_b+=k;
        }

         else if(l==k)
        {
            for(y=0;n1>0;y+=n1%10,n1/10);
            for(t=0;n2>0;t+=n2%10,n2/10);
            tot_a+=y;
            tot_b+=t;
            printf("A's point is = %d\t",y);
            printf("B's point is = %d\n",t);

        }
         if(l>k)
         {

            w=1;
            a_b++;
         }
        else if(l==k)
        {
            while(num!=0)
            {
                 eq=eq+num%10;
                 num=num/10;
            }

            while(num1!=0)
            {
                 eq1=eq1+num1%10;
                 num1=num1/10;
            }
            if(eq>eq1)
            {

                w=1;
                a_b++;
            }
            else
            {
                b_b++;
                r=1;
            }

        }
         else{
                r=1;
            b_b++;
         }

        printf("A's Badge = %d\t",w);
        printf("B's Badge = %d\n",r);

    }
    printf("total point of A = %d \n",tot_a);
    printf("total point of B = %d \n",tot_b);
    if(tot_a>tot_b)
        printf("\n---A Wins the game---");
    else
         printf("\n---B Wins the game---");
}
