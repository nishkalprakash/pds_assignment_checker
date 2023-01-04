/*NAME - KRISHNA GUPTA
  SECTION-14
  ROLLNUMBER- 22GG10024
  ASSIGNMENT NUMBER -7
  PROBLEM - INSERING A NEW NUMBER IN A SORTED ARRAY MAINTAINING THE ORDER
   */
# include<stdio.h>
  int main()
{ 
   int n,i,m,j;
   printf("Enter the size of array : ");       // size of array
   scanf("%d",&n);
   printf("Enter the value of m : ");      // number to be inserted
   scanf("%d",&m);   
   int A[n],B[n+1];
   printf("A[n]= ");
       for(i=0;i<n;i++)              // inputing the elements of array
        {
          scanf("%d",&A[i]);
        }
       for (i=0;i<n-1;i++)
         {                                    // insserting the number at the appropriate place
             if (m>A[i]&&m<A[i+1])
               {
                B[i+1]=m;
                break;
               }
         }
       if (m>A[n-1])
            {
               B[n]=m;
            for (i=0;i<n;i++)
              {
                B[i]=A[i];
               }
              for (i=0;i<n+1;i++)
              {
             printf("%d " ,B[i]);
               }
             }
        else
            {
             for (j=0;j<=i;j++)
              {
      
              B[j]=A[j];
              }
             for(j=i+2;j<n+1;j++)
                 {
                  B[j]=A[j-1]; 
                 }
           for (i=0;i<n+1;i++)
              {
              printf("%d " ,B[i]);
              }
          }
}
