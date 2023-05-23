/* Name-Meet Modi
   Roll No-22ME10053
   Ques-07)03

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    char **X;
    char **Y;
    int n,m;
    int i,j,k=0;
    char *str;
    str = (char*)malloc(100*sizeof(char));

    printf("Enter the size of array X :");
    scanf("%d",&n);
    X = (char**)malloc(n*sizeof(char*));
    for(i=0;i<n;i++){
        X[i]= (char*)malloc(100*sizeof(char));
        k=0;
        do{
            scanf("%c",(X[i] +k));
        }while(*(X[i] + k) !='\n');
    }

    printf("\n Enter the size of array Y :");
    scanf("%d",&m);
    Y = (char**)malloc(m*sizeof(char*));
    for(i=0;i<m;i++){
        Y[i]= (char*)malloc(100*sizeof(char));
        k=0;
        do{
            scanf("%c",(Y[i] +k));
        }while(*(Y[i] + k) !='\n');
    }

    printf("Printing %d names (stored in X) :\n",n);
    for(i=0;i<n;i++){
        printf(" %d) ",i+1);
        k=0;
        do{
            printf("%c",*(X[i]+k));
        } while(*(X[i]+k) !='\n');
        printf("\n");
    }
    printf("Printing %d names (stored in Y) :\n",m);
    for(i=0;i<m;i++){
        printf(" %d)",i+1);
        k=0;
        do{
            printf("%c",*(Y[i]+k));
        }while(*(Y[i]+k) !='\n');
        printf("\n");
    }


    char **Z;
    int p=0,q=0,r=0;
    Z = (char**)malloc((m+n)*sizeof(char*));
    for(i=0;i<n;i++){
        Z[i]= (char*)malloc(100*sizeof(char));
        Z[i]=X[i];
    }
    k=0;
    for(j=i;k<m;j++,k++){
        Z[j] =(char*)malloc(100*sizeof(char*));
        Z[j]= Y[k];
    }

     char temp[100];
     for(i=0;i<m+n;i++){
        for(j=0;j<m+n-i;j++){
            if(strcmp(Z[j],Z[j+1])>0){
                strcpy(temp,Z[j]);
                strcpy(Z[j],Z[j+1]);
                strcpy(Z[j+1],temp);
            }
        }
     }


    for(i=0;i<m+n;i++){
       printf("%d) \n ", i+1);
       do{
        printf("%c",*(Z[i]+k));
       }while(*(Z[i] + k) !='\n');

    }



    return 0;
}
