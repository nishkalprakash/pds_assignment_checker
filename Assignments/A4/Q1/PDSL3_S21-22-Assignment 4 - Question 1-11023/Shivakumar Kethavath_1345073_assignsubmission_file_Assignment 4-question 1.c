/*kethavath shivakumar
  21MI31013 */

#include <stdio.h>

void repeation(int side_index[], int a[], int y_print,int y,int start,int end)
{
if (y_print == y)
    {
        for(int i=0; i < l;i++)
            printf("%d ",a[side_index[i]]);
            printf("\n");
        return;
    }
for (int i=start;i<=end;i++)
    {
     side_index[y_print]=i;
     repeation(side_index, a,y_print + 1,y,i,end);
    }
    return;
}

void possible_combinations(int a[],int size,int y)
{
int store_index[y + 1];
recursive(side_index, a,0,y,0,size-1);
}
int main()
{
int a[] = {5,7,12,3};
int y = 3;
int n = sizeof(a)/sizeof(a[0]);
possible_combinations(x,n,l);
    return 0;
}
