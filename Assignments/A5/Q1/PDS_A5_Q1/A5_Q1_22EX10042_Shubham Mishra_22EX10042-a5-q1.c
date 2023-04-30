#include<stdio.h>
#define N 100
int main(){
    int n,x,y;
    printf("the value of n is");
    scanf("%d",&n);
    int arr[n];
    if(n>N)
    {
        printf("ERROR : n>N");
    }
    else
    {


      for (int i=0;i<n;i++)
      {
        printf("the %d element is",i);
        scanf("%d",&x);
        arr[i]=x;

      }
      for(int j=0;j<n;j++)
      {
          y=arr[j];
        if(y>0)
        {


          for(int i=j+1;i<n;i++)
          {
            if(arr[i]<0)
            {
                arr[j]=arr[i];
                arr[i]=y;


            break;
            }
          }
        }

    }
     printf("the reverse array is \n");
      for(int i=0;i<n;i++)
      {

          printf("%d",arr[i]);
      }


    }
}
