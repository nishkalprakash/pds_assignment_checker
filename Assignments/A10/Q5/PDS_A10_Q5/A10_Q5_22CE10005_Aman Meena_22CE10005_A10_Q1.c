#include<stdio.h>


struct node *createlist(int n);

 int main()  {

         int arr1[100],i,arr2[200],n1,n2,j;

         printf("Enter the value of n1  :\n");
         scanf("%d",&n1);

         printf("Enter the value of n2  :\n");
         scanf("%d",&n2);

         for(i=0;i<n1;i++){
            printf("Enter Element %d :\n",i);
            scanf("%d",&arr1[i]);
         }
         for(i=0;i<n2;i++){
            printf("Enter Element %d :\n",i);
            scanf("%d",&arr2[i]);
         }
       for(i=0,j=0;i<n1,j<n2;i++,j++){

         if(arr1[i]=arr2[j])

        printf("The L1 INTERSECTION L2 is :arr[i]\n");

        printf("The L1 UNION L2 IS:arr1[100]+arr2[200]-arr[i]\n");  }

return 0;

}
