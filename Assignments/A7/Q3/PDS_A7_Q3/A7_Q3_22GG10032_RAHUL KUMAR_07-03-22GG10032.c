/*
* Section- 02
* Name - Rahul kumar
* Roll no. - 22GG10032
* Assignment - 07
* Question Number -03
*/
#include<stdio.h>
int main(){
    int n,m,size;
    char *x,*y;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter the %d name : \n",i);
        char str[size];
        scanf("%s",str);
        printf(" name%d is %s\n",i,str);


    }
     printf("Enter the value of m : ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        printf("Enter the %d name : \n",i);
        char str[size];
        scanf("%s",str);
        printf(" name%d is %s\n",i,str);


    }
      return 0;
}
