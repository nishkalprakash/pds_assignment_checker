#include<stdio.h>
  int main()
{

  int a[n];
      int n;
   scanf("%d", &n);
 	 for (int k=0; k<n; k++)
 	 {
   	scanf("%d", &a[k]);
          }
  int m;
  scanf("%d",&m);
  int temp;
  for(int i=0;i<=n-1;i++)
{
       if (m>a[i])
        {   
            temp=a[i];
            a[i]=m;
            a[i+1]=a[i+2];
            
            

           }
              


          }
             

}





   return 0;
}
