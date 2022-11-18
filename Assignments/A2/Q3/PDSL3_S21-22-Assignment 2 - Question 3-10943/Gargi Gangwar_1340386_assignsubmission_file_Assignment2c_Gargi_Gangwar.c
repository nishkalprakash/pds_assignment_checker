#include <stdio.h>

int main()
{
    int i,j,k,l,t,min,a,b,c,d; a=b=c=d=0;

    //initializing four arrays
    int m1[4]={8200, 8300, 6900, 9200};
    int m2[4]={7700, 3700, 4900, 9200};
    int m3[4]={1100, 6900, 500, 8600};
    int m4[4]={800, 900, 9800, 2300};

    //creating separate array to find combinations
    int total[256];
    for(i=0;i<4;i++)  //for m1
    {
        for(j=0;j<4;j++)    //for m2
        {
            for(k=0;k<4;k++)     //for m3
            {
                for(l=0;l<4;l++)    //for m4
                {
                    for(t=0;t<256;t++)
                    {
                     total[t]=m1[i]+m2[j]+m3[k]+m4[l];
                     if(t==0)
                     {
                         min=m1[0]+m2[1]+m3[2]+m4[3];   //giving some unique initial value to min
                     }


                       if(total[t]<min && i!=j!=k!=l)    //finding minimum
                      {
                          min=total[t];
                          a=i+1;
                          b=j+1;
                          c=k+1;
                          d=l+1;
                      }



                    }
                }
            }
        }
    }
    printf("Total cost=%d\n",min);
    printf("Machine1=Vendor%d\n",a);
    printf("Machine2=Vendor%d\n",b);
    printf("Machine3=Vendor%d\n",c);
    printf("Machine4=Vendor%d\n",d);
}

