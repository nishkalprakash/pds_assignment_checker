#include <stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,l,p=-1,q=-1,r=-1,co=0,ce=0;
    printf("Enter any five integers \n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    (n1%2==0)?ce++:co++;
    (n2%2==0)?ce++:co++;
    (n3%2==0)?ce++:co++;
    (n4%2==0)?ce++:co++;
    (n5%2==0)?ce++:co++;


    //displaying largest number if three even numbers are present
    if(ce==3){
            if((n1>=n2)&&(n1>=n3)&&(n1>=n4)&&(n1>=n5))
               l=n1;
            else if((n2>=n1)&&(n2>=n3)&&(n2>=n4)&&(n2>=n5))
               l=n2;
            else if((n3>=n1)&&(n3>=n2)&&(n3>=n4)&&(n3>=n5))
               l=n3;
            else if((n4>=n1)&&(n4>=n2)&&(n4>=n3)&&(n4>=n5))
               l=n4;
            else
               l=n5;
            printf("Largest number:\n%d",l);
    }
    /*variables p,q and r are used in tracking and storing the three odd numbers in them.
    note:they are initialized to -1 because all numbers are positive so it will be easy to compare and store odd numbers are in them*/
    //segment to display the three odd numbers in ascending order if we found exactly three odd numbers
    else if(co==3){
        printf("Smallest three odd numbers:\n");
        //when we find an odd number,we just check which of p,q,r is empty so that it may store the value of the odd number
        if (n1%2==1){
            if (p==-1) p=n1;
            else if(q==-1) q=n1;
            else if(r==-1) r=n1;
        }
        if (n2%2==1){
            if (p==-1) p=n2;
            else if(q==-1) q=n2;
            else if(r==-1) r=n2;
        }
        if (n3%2==1){
            if (p==-1) p=n3;
            else if(q==-1) q=n3;
            else if(r==-1) r=n3;
        }
        if (n4%2==1){
            if (p==-1) p=n4;
            else if(q==-1) q=n4;
            else if(r==-1) r=n4;
        }
        if (n5%2==1){
            if (p==-1) p=n5;
            else if(q==-1) q=n5;
            else if(r==-1) r=n5;
        }
        //now p,q,r stores all the three odd numbers now just arrange them in ascending order.

        if ((p<=q)&&(q<=r))
            printf("%d %d %d",p,q,r);
        else if ((q<=r)&&(r<=p))
            printf("%d %d %d",q,r,p);
        else if ((p<=r)&&(r<=q))
            printf("%d %d %d",p,r,q);
        else if ((q<=p)&&(p<=r))
            printf("%d %d %d",q,p,r);
        else if ((r<=p)&&(p<=q))
            printf("%d %d %d",r,p,q);
        else if ((r<=q)&&(q<=p))
            printf("%d %d %d",r,q,p);
        }
        return 0;

}










