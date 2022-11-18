/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
#include<stdlib.h>
int **image(int**arr,int**arr1,int **p,int n){
    int i,j,k,l,m=0;
    for ( i = 0; i < n-2; i++)
    {
       for (j = 0; i < n-2; j++) //n-2 because kernel is assumed to be 3X3 matrix
       {
          for (k = 0; k < 3; k++)
          {
             for (l = 0; l < 3; l++)
             {
               m+=arr[i][j]* arr1[k][l];//since elements in p[][] are not initialised .i had to to take another variable
               p[i][j]=m; /* code */
             }
              /* code */
          }
         m=0;  /* code */
       }
        /* code */
    }
   return p;
}
int main()
{ //assuming kernel matrix order to be 3X3
 int **arr,n,i,j,**arr1,**p;
 printf("enter the order of image matrix");
 scanf("%d",&n);
 arr=(int**)malloc(n*sizeof(int*));
 printf("enter the  image matrix");
 for ( i = 0; i <n; i++)
 {
    arr[i]=(int*)malloc(n*sizeof(int));
    for (j = 0; j < n; j++)
    {
       scanf("%d",&arr[i][j]); /* code */
    }

     }

 arr1=(int**)malloc(3*sizeof(int*));
 printf("enter the  kernel matrix");
 for ( i = 0; i <3; i++)
 {
    arr1[i]=(int*)malloc(3*sizeof(int));
    for (j = 0; j < 3; j++)
    {
       scanf("%d",&arr1[i][j]); /* code */
    }

     }
     p=(int**)malloc((n-2)*sizeof(int*)); // dynamically allocating the final image matrix
      for ( i = 0; i <3; i++)
 {
    p[i]=(int*)malloc((n-2)*sizeof(int));}
    p=image(arr,arr1,p,n);  //function call
    for ( i = 0; i < n-2; i++)
    {for ( j = 0; j < n-2; j++)
    {
        /* code */


      printf("%d",p[i][j]) ; /* code */}
    }

return(0);
}
