/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/
#include<stdio.h>
main()
{
    int i,j,m,n;
    printf("Enter the number of terms in Polynomial 1:\n");
    scanf("%d",&m);
    printf("Enter the number of terms in Polynomial 2:\n");
    scanf("%d",&n);

    int a[m],b[n],product[m+n];
    printf("Enter the Elements of Polynomial 1:\n");
    for(i=0;i<m;i++){
        printf("Enter x^%d Co-Efficient:\n",i);
        scanf("%d",&a[i]);
    }

    printf("Enter the Elements of Polynomial 2:\n");
    for(i=0;i<n;i++){
        printf("Enter x^%d Co-Efficient:\n",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<m+n;i++){
        product[i]=0;
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i]!=0 && b[j]!=0)
                product[i+j]+=a[i]*b[j];
        }
    }
    printf("The resultant polynomial after multiplication is:\n");
    for(i=m+n-1;i>=0;i--){
        if(product[i]!=0){
            if(i!=0){
                printf("%d x^%d + ",product[i],i);
            }
            else{
                printf("%d x^%d\n",product[i],i);
            }
        }
    }
}
