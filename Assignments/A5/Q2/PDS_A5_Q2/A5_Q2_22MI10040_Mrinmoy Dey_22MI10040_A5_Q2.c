/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Assignment 05
*/
int primecheck(int n){
    int a=0;
    if (n==2){
        return 1;
    }
    else{
        for (int i=2;i<n;i++){
            if (n%i==0) a++;
        }
    }
    if (a==0) return 1;
    else return 0;
}
int main(){
    int n;
    int i=2;
    printf("Enter the number :: ");
    scanf("%d",&n);
    int a=-1;
    if ((n<4)||(n%2!=0)) printf("%d",a);
    else{
        while (i<n){
            if ((primecheck(i)==1)&&(primecheck(n-i)==1)){
                printf("%d,%d",i,n-i);
                break;
            }
            i++;
        }
    }
}
