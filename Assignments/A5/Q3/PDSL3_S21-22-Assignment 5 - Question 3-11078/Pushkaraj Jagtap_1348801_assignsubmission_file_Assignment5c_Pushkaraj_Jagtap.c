/* Pushkaraj Jagtap
   21MF3IM12
   Codeblocks
   Assignment 5c*/

#include<stdio.h>
int saddle(int a[n][m]){
    int i,j,k,min,max,w[2][2],n,m;
    for (i = 0; i < n; i++)
		{
        min = matrix[i][0];
        for (j = 0; j < m; j++)
        {
                if (min >= matrix[i][j])
            {
                min = matrix[i][j];
                w[0][0] = i;
                w[0][1] = j;
            }
        }
     j = w[0][1];
     max = matrix[0][j];
	for (k = 0; k < n; k++)
	{
		if (max <= matrix[k][j])
			{
            max = matrix[i][j];
            w[1][0] = k;
            w[1][1] = j;
            }
        }
	if (min == max)
    {
    if (w[0][0] == w[1][0] &&w[0][1] == w[1][1])
    {
     return(max);
    }
   }
   else{
       return 0;
   }
}
         }
    }
}
int main{
   int a[20][20],i,j,m,n,saddle;
   printf("Enter the number of rows and column:");
   scanf("%d,%d",n,m);

   for(i=1;i<n;i++){
       for(j=1;j<m;j++){
            scanf("%d",a[i][j]);
       }
   }

   saddle=saddle(a[n][m]);
   if(saddle==0){
     printf("No saddle point found");
   }
   else{
     printf("Saddle point is:",saddle);
   }
}
