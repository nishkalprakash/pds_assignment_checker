//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB TEST:1
//description:
#include<stdio.h>
#include<math.h>
int main()//start of the program
{
    int a,count=0,b,c,i=1,reverse=0,count1,d,e,diff;
    printf("Enter the Integer");
    scanf("%d",&a);
    b=a;
    d=a;
    e=a;
    if (e<0)
    {
        e=e*-1;
    }
    while(b!=0)
    {
        b=b/10;
        count++;
    }
    count1=count;
    if (a%2==0)
    {
        printf("Most significant digits to least significant digits:");
        while (count!=0)
        {
            if (count==1)
            {
                printf("%d",e);
                break;
            }

            c=e/(pow(10,count-1));
            printf("%d ,",c);
            count--;
        }

    }
    if (a%2!=0)
    {
        printf("least  significant digits to most significant digits:");
        while (count!=0)
        {
            if (count==1)
            {
                c=e%(int)pow(10,(count));
                printf("%d",c);
                break;
            }
            c=e%(int)pow(10,(count));
            printf("%d ,",c);
            count--;
        }
    }
    printf("\n");
    d=a;
    while(d!=0)
    {
        reverse=reverse+((d%10)*(pow(10,count1-i)));
        d=d/10;
        i++;
    }
    printf("reverse = %d\n",reverse);
    diff=reverse-a;
    if (diff<0)
    {
        diff=diff*-1;
    }
    printf("Difference between Reversal and original number= %d",diff);



}



