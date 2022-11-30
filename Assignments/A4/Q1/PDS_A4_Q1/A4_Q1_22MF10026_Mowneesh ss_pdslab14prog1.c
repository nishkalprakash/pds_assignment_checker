#include<stdio.h>
#include<math.h>
int main()
{
    int n,f;
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("The number you entered is %d\n",n);
    f = 1;
    printf("The factors of the number given are: ");
    while (f<=n){
        if ((n%f)==0) printf("%d ",f);
        f+=1;
    }
    return 0;


}
