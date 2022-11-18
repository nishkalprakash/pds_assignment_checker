#include <stdio.h>

// Harsh Raj
// Roll No. : 21IE10017
int main()
{

    int f[4][4];
    int i,j;
    printf("m1 -> ");
    for(i=0;i<4;i++)
    {
        scanf("%d",&f[1][i]);
    }
    printf("m2 -> ");
    for(i=0;i<4;i++)
    {
        scanf("%d",&f[2][i]);
    }
    printf("m3 -> ");
    for(i=0;i<4;i++)
    {
        scanf("%d",&f[3][i]);
    }
    printf("m4 -> ");
    for(i=0;i<4;i++)
    {
        scanf("%d",&f[4][i]);
    }

    int sum=0;
    int arr[4]={0,0,0,0};
    for(int i=0;i<4;i++){
        int min=f[i][0];
        int specialj=0;
        for(int j=0;j<4;j++){
            if(arr[j]!=1){
                if(min>f[i][j]){
                    min = f[i][j];
                    specialj=j;
                }
            }

        }
        sum+=min;
        arr[specialj]=1;
    }
    printf("total cost is %d",sum);
    return 0;
}
