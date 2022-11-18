#include <stdio.h>
void pc(int comb[],int a[],int k,int init,int p,int last){

    //recursive function to find the different combinations.

    if (p==k){

                                                            //no. of elements in this combination is l, display

        for (int i=0;i<k;i++){

            printf("%d ",a[comb[i]]);
        }
        printf("\n");
        return;
    }
    for(int i=init;i<=last;i++){

                                                            //first value is constant, make pairs
        comb[p]=i;
        pc(comb,a,k,i,p+1,last);
    }
    return;
}

int main()
{
    int l,n;
    printf("number of elements : \n");
    scanf("%d",&n);                                                 //array length
    printf("\n");

    int arr[n];                      //declare array

    printf("Enter the elements in the array : ");               //input of elements

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
    }

    printf("Enter the value of l : ");                              // value of l
    scanf("%d",&l);
    printf("\n");

    int c[l+1];

    pc(c,arr,l,0,0,n-1);
    return 0;
}
