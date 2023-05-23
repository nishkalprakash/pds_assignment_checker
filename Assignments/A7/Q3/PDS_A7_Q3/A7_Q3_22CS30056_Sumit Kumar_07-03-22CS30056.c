#include<stdio.h>
#include<stdlib.h>
/*Name-Sumit Kumar
Roll no.-22CS30056
Section-2
Program-names array
*/
void swap(char **z,char** y){
char *r=**z;
**z=**y;
**y=*r;
}
int  del(char **z,int c,char**l){
 int y=0;
 for(int i=0;i<c;i++){
    for(int j=i+1;j<c;j++){
        if(!strcmp(z[i],z[j])){
           y++;
           for(int k=j;k<c-1;k++){
            strcpy(z[k],z[k+1]);

           }
           c--;
           j--;
           }
    }
 }
 return y;
}
void sort(char** z,int *c)
{
    for(int i=0;i<c;i++){
        for(int j=i+1;j<c;j++){
            if(strcmp(z[j-1],z[j])>0){
                char **v=z[j-1];z[j-1]=z[j];z[j]=v;
            }
        }
    }
    for(int i=0;i<c;i++){
        for(int j=i+1;j<c;j++){
            if(strcmp(z[j-1],z[j])>0){
                char **v=z[j-1];z[j-1]=z[j];z[j]=v;
            }
        }
    }
}
int main(){
    int n;
    printf("Enter the number of names to store in X:");
    scanf("%d",&n);
    char**x=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
        char in[100];
        printf("Enter the name %d:",i+1);
        scanf(" %[^\n]",in);
        x[i]=(char *)malloc((strlen(in)+1)*sizeof(char));
        strcpy(x[i],in);
    }
    int m;
    printf("Enter the number of names to store in Y:");
    scanf("%d",&m);
    char**y=(char**)malloc(m*sizeof(char*));
    for(int i=0;i<m;i++){
        char in[100];
        printf("Enter the name %d:",i+1);
        scanf(" %[^\n]",in);
        y[i]=(char *)malloc((strlen(in)+1)*sizeof(char));
        strcpy(y[i],in);
    }
    printf("## After reading X ##\nPrinting %d names (names stored in X):\n#Name\n===========================\n",n);
    for(int q=0;q<n;q++){
        printf(" %d %s\n",q+1,x[q]);

    }
    printf("## After reading Y ##\nPrinting %d names (names stored in y:\n#Name\n===========================\n",m);
    for(int q=0;q<m;q++){
        printf(" %d %s\n",q+1,y[q]);

    }
    char**z=(char**)malloc((m+n)*sizeof(char*));
    for(int i=0;i<m;i++){
        z[i]=(char *)malloc((strlen(x[i])+1)*sizeof(char));
        strcpy(z[i],x[i]);
    }
    for(int i=0;i<n;i++){
            z[i+m]=(char *)malloc((strlen(y[i])+1)*sizeof(char));
        strcpy(z[i+m],y[i]);

    }char**l=(char**)malloc((m+n)*sizeof(char*));
    for(int i=0;i<m;i++){
        l[i]=(char *)malloc((strlen(x[i])+1)*sizeof(char));
        strcpy(l[i],x[i]);
    }
    for(int i=0;i<n;i++){
            l[i+m]=(char *)malloc((strlen(y[i])+1)*sizeof(char));
        strcpy(l[i+m],y[i]);

    }
    sort(z,m+n);//Sorting the array in ascending order of names

    int h=del(z,m+n,l);//deleting duplicates
    printf("## After reading Z ##\nPrinting %d names (names stored in z:\n#Name\n===========================\n",m+n);
    for(int q=0;q<m+n-h;q++){
        printf(" %d %s\n",q+1,z[q]);
    }
}
