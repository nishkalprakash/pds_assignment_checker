#include <stdio.h>


int main()
{
    int m1[4],m2[4],m3[4],m4[4],i,j,k,l,fi,fj,fk,fl,min;
    printf("m1 --> ");
    for(i=0;i<4;i++)
    {
        scanf("%d", &m1[i]);
    }
    printf("\n");
    printf("m2 --> ");
    for(i=0;i<4;i++)
    {
        scanf("%d", &m2[i]);
    }
    printf("\n");
    printf("m3 --> ");
    for(i=0;i<4;i++)
    {
        scanf("%d", &m3[i]);
    }
    printf("\n");
    printf("m4 --> ");
    for(i=0;i<4;i++)
    {
        scanf("%d", &m4[i]);
    }
    min=m1[0]+m2[1]+m3[2]+m4[3];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i!=j)
            for(k=0;k<4;k++)
            {
                if(k!=i&&k!=j)
                for(l=0;l<4;l++)
                {
                    if(l!=i&&l!=j&&l!=k)
                    if(min>(m1[i]+m2[j]+m3[k]+m4[l]))
                    {
                    min=(m1[i]+m2[j]+m3[k]+m4[l]);
                    fi=i;
                    fj=j;
                    fk=k;
                    fl=l;
                    }
                }
            }   
        }
    }
    printf("Total cost= %d\nMachine1 - Vendor%d\nMachine2 - Vendor%d\nMachine3 - Vendor%d\nMachine4 - Vendor%d", min, fi+1, fj+1, fk+1, fl+1);
    printf("\n");
    
    return 0;
}