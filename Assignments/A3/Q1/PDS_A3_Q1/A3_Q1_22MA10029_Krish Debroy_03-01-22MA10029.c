#include <stdio.h>

int main()
{
    int n1,n2,n3,n4,n5, c_odd=0, c_even=0, max=0;
    int o1=0,o2=0,o3=0,o4=0,o5=0;
    int o_max=0, o_min,o_mid , o_mid1=0, o_mid2=0;
    printf("Enter any five numbers :");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    if (n1%2==0)
        {
            c_even+=1;
            if (n1>max)
                max=n1;
        }
    else
        {
            c_odd+=1;
            o1=n1;
            if (n1>max)
                max=n1;
        }
   if (n2%2==0)
        {
            c_even+=1;
            if (n2>max)
                max=n2;
        }
    else
        {
            c_odd+=1;
            o2=n2;
            if (n2>max)
                max=n2;
        }
    if (n3%2==0)
        {
            c_even+=1;
            if (n3>max)
                max=n3;
        }
    else
        {
            c_odd+=1;
            o3=n3;
            if (n3>max)
                max=n3;
        }
    if (n4%2==0)
        {
            c_even+=1;
            if (n4>max)
                max=n4;
        }
    else
        {
            c_odd+=1;
            o4=n4;
            if (n4>max)
                max=n4;
        }
    if (n5%2==0)
        {
            c_even+=1;
            if (n5>max)
                max=n5;
        }
    else
        {
            c_odd+=1;
            o5=n5;
            if (n5>max)
                max=n5;
        }


    if (c_even==3)
    {
      printf("The largest number :\n %d",max);
    }
    else if (c_odd==3)
    {
        if (o1!=0 && o1>o_max)
        {
            o_max=o1;
        }
        if (o2!=0 && o2>o_max)
        {
            o_mid1=o_max;
            o_max=o2;
        }
        if (o3!=0 && o3>o_max)
        {
            o_mid1=o_max;
            o_max=o3;
        }
        if (o4!=0 && o4>o_max)
        {
            o_mid1=o_max;
            o_max=o4;
        }
        if (o5!=0 && o5>o_max)
        {
            o_mid1=o_max;
            o_max=o5;
        }




        /*printf("%d", o_mid1);*/
        o_min=max;
        if (o1!=0 && o1<o_min)
        {
            o_min=o1;
        }
        if (o2!=0 && o2<o_min)
        {
            o_mid2=o_min;
            o_min=o2;
        }
        if (o3!=0 && o3<o_min)
        {
            o_mid2=o_min;
            o_min=o3;
        }
        if (o4!=0 && o4<o_min)
        {
            o_mid2=o_min;
            o_min=o4;
        }
        if (o5!=0 && o5<o_min)
        {
            o_mid2=o_min;
            o_min=o5;
        }
        /*printf("%d",o_mid2);*/

        if (o_mid1!=0)
            o_mid=o_mid1;
        else
            o_mid=o_mid2;






        printf("Smallest three odd numbers:\n%d %d %d",o_min,o_mid,o_max);






    }
    else
        printf("Invalid Input.");




}
