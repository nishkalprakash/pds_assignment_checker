#include<stdio.h>
void main()
{

    int m1[4]={8200,8300,6900,9200};
    int m2[4]={7700,3700,4900,9200};
    int m3[4]={1100,6900,500,8600};
    int m4[4]={800,900,9800,2300};
    int i,j,k,l,s=0,i1,j1,k1,l1,c=1000000;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            {
                for(k=0;k<4;k++)
                {
                    for(l=0;l<4;l++)
                    {
                        if((i!=j) &&(j!=k)&& (k!=l)&& (i!=k) &&(i!= l)&& (j!=l))
                           {


                        s=m1[i]+m2[j]+m3[k]+m4[l];
                        if (c>s){
                            c=s;
                            i1=i+1;j1=j+1;k1=k+1;l1=l+1;}
                           }
                    }
                }
            }
    }
    printf("total cost = %d\n",c);
    printf("machine 1 = vendor%d\n",i1);
    printf("machine 2 = vendor%d\n",j1);
    printf("machine 3 = vendor%d\n",k1);
    printf("machine 4 = vendor%d\n",l1);
}
