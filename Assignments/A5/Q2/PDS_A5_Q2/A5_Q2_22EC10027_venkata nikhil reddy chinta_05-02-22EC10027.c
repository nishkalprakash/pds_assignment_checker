/*
* Section 2
* Roll No : 22EC10027
* Name : Chinta venkata nikhil reddy
* Assignment No : 5
* Description : prime number checking ang writing an even number as sum of two prime numbers.
*question : 2
*/
 #include<stdio.h>
 int primecheck(int i)
 {
     int k=2,j=2,give;

     while(k<i)
     {
        if(i%k==0)
        {
            k++;
            give=0;
        }
        break;
     }
     while(j<i)
     {
        if(i%j!=0)
        {
            j++;
            give=1;
        }
        break;
     }
          if(i==2)
     {
         give=1;
     }


    return give;
 }
int main()
{
  /*  int n,p;
    scanf("%d" , &n);
    p=primecheck(n);
    printf("%d" , p);*/
    int n,p1=1,p2,p3=0,i,k1,k2,q1,q2;
    printf("give any even integer : ");
    scanf("%d" , &n);
    for(i=1;i<=n/2;i++)
    {
        k1=i;
        k2=n-i;
        q1=primecheck(k1);
        q2=primecheck(k2);
        if((q1==1)&&(q2==1))
        {
            break;
        }
    }
   /* while(p2<n)
          {
               p2=(2*p1)+1;
                 p3=primecheck(p2);
                if(p3==1)
                {

                    while((p3==1)&&(q2==0))
                    {
                    p2=(2*p1)+1;
                    p3=primecheck(p2);
                    q1=(n-p2);
                    q2=primecheck(q1);

                    }

                }
                p1++;
          }*/
   printf("the two numbers are %d, %d" , k1,k2);
    return 0;
}
