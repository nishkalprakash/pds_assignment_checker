/*section 2
roll no.: 22mi31014
name :MOhit Pant
question 3
Assignment No.:4*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>0;k--){
                printf(" ");

        }
        for(int j=0;j<i;j++){
            printf("%d",(j+i)%10);
        }
        for(int m=2;m<=i;m++){
            printf("%d",m%10);
        }
        printf("\n");
    }

return 0;
}
