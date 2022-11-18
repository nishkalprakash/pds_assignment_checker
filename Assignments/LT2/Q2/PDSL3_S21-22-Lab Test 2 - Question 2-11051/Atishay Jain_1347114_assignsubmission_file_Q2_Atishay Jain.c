#include<stdio.h>
void main()
{
    int N,i;
    printf("enter size of your set:");
    scanf("%d",&N);  //taking size of array from user
    int S[N];
    printf("enter your numbers:");
    for(i=0;i<N;i++) //taking entries in array
        scanf("%d",&S[i]);
    printf("Alpha Value of this set is %d",maxAlphaValue(S,N));
    getch();

}
int maxAlphaValue(int A[],int n) //function to find alpha value
{
    int i,j,multiples[n],k=0,alpha;
    for(i=0;i<n;i++,k=0)
        for(j=0;j<n;j++)        // finding no. of multiples of each element among the elements of the given set.
             {
                if(A[j]%A[i]==0&&i!=j&&A[i]!=1&&j<i)
                 k++;
                 multiples[i]=k;
             }
    i=find_index(multiples,n);//calling another function.
      return multiples[i];




}
int find_index(int B[],int n) //function to calculate the index of largest entry in Array.
{
    int i,a=0,index;
     for(i=1;i<n;i++) // finding index of max element
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
