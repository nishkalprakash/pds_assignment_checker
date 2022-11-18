/*chityala raviteja
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */
#include <stdio.h>
int main(){
    int n,num[20],sum,a,length,length1;
    printf("Enter n:");
    scanf("%d",&n);
    printf("enter elements:");
    for(a=0;a<n;a++){
        scanf("%d",&num[a]);
    }
    int largesum=0,largesum1,largesumarray[20],largesumarray1[20];
    for (a=0;a<n;a++){
        int sum=0,c=0,b;
        for (b=a;b<n;b++){
            sum+=num[b];
            //checking sum from a to n whwere a varies from 0 to n
            if (sum>largesum){
                largesum=sum;
                int d=0;
                for (c=a;c<=b;c++){
                    largesumarray[d]=num[c];
                    //storing the elements which gives large sum at that moment in an array
                    d++;
                    length=d;
            }
            }
            else if(sum==largesum){
                int d=0;
                largesum1=sum;
                for (c=a;c<=b;c++){
                    largesumarray1[d]=num[c];
                    //storing the elements which gives same large sum at that moment in different array
                    d++;
                    length1=d;
            }
            }
                        }
        }
        printf("largest sum= %d\n",largesum);
        printf("sub-arrays=");
        for(a=0;a<length;a++){
            printf("%d ",largesumarray[a]);
        }
        if (largesum1==largesum){
            printf("or ");
            for(a=0;a<length1;a++){
            printf("%d ",largesumarray1[a]);
        }
        }
        return 0;
    }