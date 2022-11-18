/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Lab Test- 3c
Package- stdio.h
*/
#include <stdio.h>
int main()
{   
    int c,d;
    printf("Enter any two different digits from 1 to 9\n");
    scanf("%d%d",&c,&d);
    if(c>d)  //swapping so that c has the smaller digit and d has the larger digit
    {
        int temp=c;
        c=d;
        d=temp;
    }
    int s = d-c;

    /*using nested for loop to find all possible combinations
    each loop carries digit for some place in the required 5 digit number */

    for(int i1= c;i1<=d;i1=i1+s)
    {
       for(int i2= c;i2<=d;i2=i2+s)
       {
           for(int i3= c;i3<=d;i3=i3+s)
           {
                for(int i4= c;i4<=d;i4=i4+s)
                {
                    for(int i5= c;i5<=d;i5=i5+s)
                    {
                        int n = 10000*i1 + 1000*i2+100*i3+10*i4+i5; //forming the 5 digit number using values of each digit
                        if(n%(c+d)!=0) //check for divisibility by (c+d)
                        {
                            printf("%d ",n); //if check satisfies then the number is printed
                        }
                    }
                }
           }
       }
    } 
    return 0;
}

