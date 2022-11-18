//NAME : SHRITIK JAISWAL
//ROLL: 21BT30026
//SEC: 3
//MAC OS.
#include <stdio.h>
#include <stdlib.h>
int *num;
//declaring function "Generate" to generate the 5 digit numbers
void generate(int a,int b)
{
    //declaring variables which will help to generate numbers by changing its value one by one
    int v=a,w=a,x=a,y=a,z=a,c=0;
    //generating the no.
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                for(int l=0;l<2;l++)
                {
                    for(int m=0;m<2;m++)
                    {
                        num[c]=v*10000 + w*1000 + x*100 + y*10 + z;//storing no. using the method of permutations and combination
                        z=b;
                        c++;
                    }
                    z=a;
                    y=b;
                }
                z=a;
                y=a;
                x=b;
            }
            z=a;
            y=a;
            x=a;
            w=b;
        }
        z=a;
        y=a;
        x=a;
        w=a;
        v=b;
    }
}
int main() 
{
    int a,b,i,j;
    printf("Enter the two digits: \n");
    scanf("%d %d",&a,&b);//inputs
    num=(int*)malloc(32*sizeof(int));//dynamic memory for array to store possible no.s
    generate(a,b);//generate the no. with a and b as digits
    printf("Numbers:\n");
    for(i=0;i<32;i++)
    {
        if(num[i]%(a+b)!=0)
        {
            printf("%d ",num[i]);//output
        }
    }
    
    return 0;
}