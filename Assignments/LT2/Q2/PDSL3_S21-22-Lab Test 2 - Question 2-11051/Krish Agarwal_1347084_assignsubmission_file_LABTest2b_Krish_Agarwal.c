/*
Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS code
*/
#include <stdio.h>

int maxAlphaValue(int S[],int l)//Finding maxAlpha value
{
    int c=0,max=0;
    for(int i=0;i<l;i++)
    {//outer loop for Si
        c=0;
        for(int j=0;j<i;j++)
        {//inner loop for surking over elements
           if(S[j]%S[i]==0)   
                c++;//counting when divisible
        }
        if(max<c)//storing max value
        max=c;
        
    }
    return max;
}
int main()
{
    int n;
    //Taking required inputs
    printf("Enter the number of integers : ");
    scanf("%d", &n);
    int num[n];
    printf("Enter the integers in the array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &num[i]);
    }
    int max_alpha=maxAlphaValue(num,n);//calling function to get max alpha value
    printf("Maximum Alpha value of the sequence is : %d",max_alpha);
    return 0;
}
