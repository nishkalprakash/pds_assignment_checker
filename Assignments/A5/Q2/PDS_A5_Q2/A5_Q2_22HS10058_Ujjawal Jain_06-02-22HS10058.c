/*sec2
Assignment no.6
Roll no. 22HS10058
Name - Ujjawal Jain
Question no. 2
*/
#include<stdio.h>
int main()
{
    int primecheck(int i)
    {

        for(int t = 2;t<i;t++){
            if (i%t == 0){
                return -1;
            }
        }

        return 1;

    }


    int n;
    scanf("%d",&n);

    if (primecheck(n) == -1){
        if(n%2 == 0){
            for(int t = 2;t<=n;t++){
               if( (primecheck(t)==1)&& (primecheck(n-t)==1)){
                    printf("%d %d",t,n-t);
                    break;
               }

            }
        }

    }
    else{
        printf("-1");
    }





    return 0;

}
