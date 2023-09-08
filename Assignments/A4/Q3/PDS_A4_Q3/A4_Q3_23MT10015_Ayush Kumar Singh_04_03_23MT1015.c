#include<stdio.h>
#include<math.h>

int main(){
    int n,x;
    printf("Enter the integer ");
    scanf("%d",&n);
    int count=0;
    for (int i =0; i<100;i++){
        if(n%10!=0){
                n = n/10;
            count++;
        }else {break;}}
        printf("n of digits %d\n",count);
    int rev;
    for(int i=0; i<count; i++){
        x=n%10;
        rev = rev+x*pow(10,(i));
        n=n/10;
    }printf("%d", rev);
    if (rev == n){
        printf("YES");
    }else {printf("NO");}
return 0;
}
