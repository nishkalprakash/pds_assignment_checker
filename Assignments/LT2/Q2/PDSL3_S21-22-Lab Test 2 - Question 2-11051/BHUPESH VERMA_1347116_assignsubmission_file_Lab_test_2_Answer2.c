#include <stdio.h>
#include<limits.h>
int maxAlphaValue(int s[],int n){
    int cnt = 0;

    for(int i=1;i<n;++i){
        int k=0;

        for(int j=0;j<i;++j){
            if(s[j]%s[i]==0){ //checking if S[k] divisible by s[i] or not
                k+=1; //if it can then counter increases by 1
            }
        }

        if(cnt<k){ //if alpha for i > max alpha then max alpha changes to alpha fot i
            cnt=k;
        }
    }

    //returning the max alpha valuie
    return cnt;
    }

int main()
{
    int n;
    //accepting length of array
    printf("Enter n: ");
    scanf("%d",&n);

    int s[n];

    //accepting elements into array
    printf("Enter array s[ ]: ");
    for(int i=0;i<n;++i){
        scanf("%d",&s[i]);
    }

    //calling function to calculate max alpha
    int k =  maxAlphaValue(s,n);

    //printing output
    printf("Output: %d",k);
    return 0;
}
