// Name:-Shubham Gajanan Warkad
// Roll No.-21ME30072
// Lab assignment 3     Question 4
#include<stdio.h>
int main()
{
    int n, integers[20],x,algo,found=0,first,last,middle;
    printf("Enter the number of elements n:");
    scanf("%d",&n);
     printf("Enter the  elements in sorted order:");
    for (int i=0;i<n;i++){
        scanf("%d",&integers[i]);
    }
    printf("Enter the key element x which you want to search:");
    scanf("%d",&x);
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search");
    scanf("%d",&algo);

    for (int i = 0; i < n; ++i) 
        {
 
            for (int j = i + 1; j < n; ++j)
            {
 
                if (integers[i] > integers[j]) 
                {
 
                   int a = integers[i];
                    integers[i] = integers[j];
                    integers[j] = a;
 
                }
 
            }
 
        }

        if (algo==1){
            for (int i = 0; i < n ; i++){
            if (x == integers[i] ){
            found = 1;
            printf("Successful Search!!!\n");
            printf("%d is found at index %d\n",x,i);
            break;
                }
            }
            if (found==0){
                printf("Unsuccessful Search!!   %d not found",x);
            }
        }

        
        else if (algo==2)
        {
            first = 0;
            last = n - 1;
             middle = (first+last)/2;
                while( first <= last ){
                    if ( integers[middle] < x ){
                        first = middle + 1;
                    }
                    else if ( integers[middle] == x ){
                        printf("Successful Search!!!\n");
                        printf("%d found at index %d.\n", x, middle+1);
                        break;
                    }
                     else
                        last = middle - 1;
                         middle = (first + last)/2;
                }
            if ( first > last )
            printf("Not found! %d is not present in the list.\n", x);
        }
        

 


return 0;
}