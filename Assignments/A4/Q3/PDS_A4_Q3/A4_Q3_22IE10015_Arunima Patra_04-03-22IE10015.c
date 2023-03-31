#include<stdio.h>
//Section-2
//roll no-22IE10015
//Name-Arunima patra
//assignment no-4
//question no-3
int main(){
    int n;int l;
    printf ("Enter the no. of rows:");
    scanf ("%d", &n);
    for (int i=1; i<=n; i++){
            l=i-1;
        for (int j=1; j<=2*n-1; j++){
                if (j<=n-i){
                        printf (" ");
                }
                else if(j>n-i && j<=n){
                    if (l==9){
                            l=0;
                    }
                    else if (l>9){
                            l=l%10 +1;
                    }
                    else{
                            l++;
                    }
                    printf ("%d", l);

                }
        else if (j>n && j<=n+i-1){
            if (l==0){

             l=9;
            }
            else{
                    l--;
            }
            printf ("%d", l);
        }
                }
printf ("\n");

        }
return 0;
    }











