/*n
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: Codeblocks
Assignment class: 2
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int n;
    int k;
    printf("n= ");
    scanf("%d",&n);
    printf("k= ");
    scanf("%d",&k);

    int D =0;
    int p;
    for(int i=0;i<k;i++){
        int d =0;
        for(int j=0;j<n;j++){
            p = rand() & 1 ? -1 : 1;
            d=d+p;
        }
        D+=d*d;


    }
    printf("%f\n",sqrt(((float)D)/k));
    return 0;
}
