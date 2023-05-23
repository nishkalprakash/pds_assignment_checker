/*
Name - Mohul Dutta
Roll No. - 22EC30035
question 3 - lab 7- alphabetic*/
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char **X;
  //  n=n+1;
    char ch;
    int k1=0,k2=0;
    int sz=30;
    X=(char **)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        k1=0;
        X[i]=(char*)malloc(sz*sizeof(char));
        do{
            if(k1>=sz)
            {
                X[i]=realloc(X[i],(sz+=10)*sizeof(char));
            }
            X[i][k1]=getchar();
            k1++;
        }
        while(X[i][k1-1]!='\n');
        k1--;
        X[i][k1]='\0';
    }

    printf("\tName\n\n");
    printf("==================\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\n\n",i+1,X[i]);
    }
    int m;
    scanf("%d",&m);
    getchar();
    //m=m+1;
    char **Y;
    Y=(char **)malloc(m*sizeof(int));
    for(int i=0;i<m;i++){
        k1=0;
        Y[i]=(char*)malloc(sz*sizeof(char));
        do{
            if(k1>=sz)
            {
                Y[i]=realloc(Y[i],(sz+=10)*sizeof(char));
            }
            Y[i][k1]=getchar();
            k1++;
        }
        while(Y[i][k1-1]!='\n');
        k1--;
        Y[i][k1]='\0';
    }
    printf("\tName\n\n");


    printf("==================\n");
    for(int i=0;i<m;i++){
        printf("%d\t%s\n\n",i+1,Y[i]);
    }
    char **Z;
    //m=m-1;
    //n=n-1;
    Z=(char **)malloc((m+n-2)*sizeof(int));
    for(int i=0;i<n;i++)
        strcpy(Z[i],X[i]);
    for(int i=0;i<m;i++)
        strcpy(Z[i+n],Y[i]);
    for(int i=0;i<m+n;i++){
        printf("%d\t%s\n\n",i,Z[i]);
    }


    free(X);
    free(Y);

}
