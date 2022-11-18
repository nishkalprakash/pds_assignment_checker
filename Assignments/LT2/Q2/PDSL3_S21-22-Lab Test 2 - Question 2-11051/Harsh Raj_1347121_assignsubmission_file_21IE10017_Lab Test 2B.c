#include<stdio.h>

// Harsh Raj
// Roll : 21IE1007

int Alpha_Value(int A[],int n)
{
    int i,j,U[n],k=0,a;
    for(i=0;i<n;i++,k=0)
        for(j=0;j<n;j++)
             {
                if(A[j]%A[i]==0&&i!=j&&A[i]!=1&&j<i)
                 k++;
                 U[i]=k;
             }
    i=find_index(U,n);
    return U[i];
}
int find_index(int B[],int n)
{
    int i,a=0,index;
     for(i=1;i<n;i++)
      {
          if(B[0]>B[i])
        index=a;
        else
        {
            index=i;
            B[0]=B[i];
            a=i;
        }
      }
      return index;
}
void main()
{
    int n,i;
    printf("Enter the size of Array :");
    scanf("%d",&n);
    int S[n];
    printf("Enter the elements of Array : \n");
    for(i=0;i<n;i++)
        scanf("%d",&S[i]);
    printf("Alpha Value of this set is %d",Alpha_Value(S,n));
    getch();

}
