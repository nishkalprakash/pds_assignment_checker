#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main(){
    srand(time(0));
    int *a; int n; int i; int p=2; int q=1000; int r; int count=0; int j; int x;
    printf("Enter the size of n");
    scanf("%d",&n);
    printf("%d\n",n);
    a=(int*)malloc(n*sizeof(int)); //dynamic memory allocation

    //initializing the array





for(i=0;i<n;i++){



r = p+ rand()%q;
printf("%d,",r);

}





    //printing the array
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(int i=0; i<n; i++)

    printf(" %6d ",a[i]);

    //testing for perfect number
    for(int i=0;i<n;i++){
        for(int x=1;x<n;x++)
        {
            if(a[i]%x==0){printf("%d",x);
            }
            else continue;
        }
    }








    return 0;
}
