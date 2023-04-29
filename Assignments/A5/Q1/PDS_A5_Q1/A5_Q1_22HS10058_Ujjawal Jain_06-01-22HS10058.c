/*sec2
Assignment no.6
Roll no. 22HS10058
Name - Ujjawal Jain
Question no. 1
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n>100) {
            printf("Error : n > 100");
    }
    else{
        int nom[100];
        for(int i= 0 ; i<n; i++){
            scanf("%d",&nom[i]);
        }
        printf("Original Array : ");
        for(int i= 0 ; i<n; i++){
            printf(" %d",nom[i]);
        }
        int temp,f;
        f=0;
        for(int i= 0 ; i<n; i++){
            if(nom[i]<0){
                temp = nom[i];
                for(int t= i;t>=f;t--){
                    nom[t] = nom[t-1];

                }
                nom[f]= temp;
                f++;
            }


        }
        printf("\nRearranged Array : ");
        for(int i= 0 ; i<n; i++){
        printf(" %d",nom[i]);
    }




    }



    return 0;
}
