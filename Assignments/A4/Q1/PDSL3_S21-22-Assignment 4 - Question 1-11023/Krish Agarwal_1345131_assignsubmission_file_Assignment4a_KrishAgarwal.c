/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS Code
*/
#include <stdio.h>
void permcomb(int comb[],int a[],int l,int initial,int pos,int final)
{//recursive function to find the different combinations.
    if (pos==l)
    {//when the number of elements in a current combination is equal to l displaying the combination
        for (int i=0;i<l;i++)
        {
            printf("%d ",a[comb[i]]);
        }
        printf("\n");
        return;
    }
    for(int i=initial;i<=final;i++)
    {//taking one value and printing all possible possibility with it recursively
        comb[pos]=i;
        permcomb(comb,a,l,i,pos+1,final);
    }
    return;
}

int main()
{
    int l,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);//taking number of element in array as input
    int a[n];
    printf("Enter the elements in the array : ");//taking elements in array as input
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value of l : ");//taking l as input
    scanf("%d",&l);
    int comb[l+1];
    permcomb(comb,a,l,0,0,n-1);//Calling the function
    return 0;
}