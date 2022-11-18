/*
Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS code
*/
#include <stdio.h>
int main()
{
    int c,d,dig,count=0;
    printf("Enter two digits : ");//taking input
    scanf("%d%d",&c,&d);
    int sum=c+d;
    int arr[2]={c,d};
    printf("Numbers  :\n");
    //running 5 loops
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                for(int l=0;l<2;l++)
                {
                    for(int m=0;m<2;m++)
                    {//generating the number
                        dig=arr[i]*10000+arr[j]*1000+arr[k]*100+arr[l]*10+arr[m];
                        if(dig%sum!=0)//checking for divisibility case
                        {
                        printf("%d\t",dig);
                        count++;//counting them
                        }
                    }
                }
            }
        }
    }
    printf("\nNumber of such digits are : %d",count);
    return 0;
}