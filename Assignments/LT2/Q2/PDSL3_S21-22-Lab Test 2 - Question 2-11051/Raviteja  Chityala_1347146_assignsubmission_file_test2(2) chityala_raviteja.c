/*chityala raviteja
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */
#include <stdio.h>
//defining function which returns the max alpha value
int maxalphavalue(int s[],int n){
    int alpha=0,a,b,maxalpha=0;
    for (a=1;a<n;a++){
        for (b=0;b<a;b++){
            if ((s[b]%s[a])==0){
                alpha++;
                if (maxalpha<alpha){
                    maxalpha=alpha;
                }
            }
        }
        alpha=0;
    }
    return maxalpha;
}
int main(){
    int s[100],n,a,output;
    printf("enter no. of elements in sequence:");
    scanf("%d",&n);
    //taking value of n as input to avoid printing garbage values in the array 
    printf("Enter array s[]:");
    for (a=0;a<n;a++){
        scanf("%d",&s[a]);
    }
    output=maxalphavalue(s,n);
    printf("output=%d",output);
    return 0;
}