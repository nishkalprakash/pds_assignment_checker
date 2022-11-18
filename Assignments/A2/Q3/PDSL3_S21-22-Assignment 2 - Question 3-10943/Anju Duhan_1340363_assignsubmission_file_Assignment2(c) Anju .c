#include<stdio.h>
main()
{
int m1[4], m2[4], m3[4], m4[4];
printf("enter price for machine 1 ");
for(int i=0,i<4,i++)
{
scanf("%d",&m1[i]);
}
printf("enter price for machine 2 ");
for(int i=0,i<4,i++)
{
scanf("%d",&m2[i]);
}
printf("enter price for machine 3 ");
for(int i=0,i<4,i++)
{
scanf("%d",&m3[i]);
}
printf("enter price for machine 4 ");
for(int i=0,i<4,i++)
{
scanf("%d",&m4[i]);
}
int location, minimum;
for(int i=0,i<4,i++)
{
if ( m1[i] < minimum )
        {
            minimum = m1[i];
            location = i+1;
            total_cost=total_cost+m1[i];
            printf("machine 1 - vendor %d", location);
        }

}
for(int i=0,i<4,i++)
{
if ( m2[i] < minimum )
        {
            minimum = m2[i];
            location = i+1;
            total_cost=total_cost+m2[i];
            printf("machine 2 - vendor %d", location);
        }

}
for(int i=0,i<4,i++)
{
if ( m3[i] < minimum )
        {
            minimum = m3[i];
            location = i+1;
            total_cost=total_cost+m3[i];
            printf("machine 3 - vendor %d", location);
        }

}
for(int i=0,i<4,i++)
{
if ( m4[i] < minimum )
        {
            minimum = m4[i];
            location = i+1;
            total_cost=total_cost+m4[i];
            printf("machine 4 - vendor %d", location);
        }

}
printf("total cost= %d", total_cost);
return 0;
}

