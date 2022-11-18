/*
Name : Vankudoth Pavan
Department : Chemical Engineering
Roll no : 21CH10075
Package : Code blocks
Operating system : Windows
*/
#include<stdio.h>
int main()
{
    int m1[4]={8200,8300,6900,9200};
    int m2[4]={7700,3700,4900,9200};
    int m3[4]={1100,6900,500,8600};
    int m4[4]={800,900,9800,2300};

    int mincost=m1[0]+m2[0]+m3[0]+m4[0];
    int a=0,b=0,c=0,d=0;

    for(int i=0;i<4;i++){

        for ( int j=0;j<4;j++){

            if (i=j) continue;
        for(int k=0;k<4;k++){
                if (k==j|| k==i) continue;
        for(int l=0;l<4;l++){
                if (l==i|| l==j|| l==k) continue;
        if(m1[i]+m2[j]+m3[k]+m4[l]<mincost)
        {
            mincost=m1[i]+m2[j]+m3[k]+m4[l];

            a=i;b=j;c=k;d=l;
                              }

                         }
                 }
         }
    }
    printf(",%d\n",mincost);
    printf("%d %d %d %d",a+1,b+1,c+1,d+1);
    return (0);
}
