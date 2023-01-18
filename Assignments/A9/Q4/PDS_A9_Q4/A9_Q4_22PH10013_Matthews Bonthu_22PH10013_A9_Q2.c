// NAME BONTHU MATTHEWS 
// ROLL NO:: 22PH10013 
// SECTION 14 
// ASSIGNMENT 9, QUESTION: 2
#include <stdio.h>
struct emp
{
    char name[100];
    int wage;
    int days;
};
int main ( )
{
    int i,n;
    int bp,hra,ta;
    printf("enter number of employee ");
    scanf("%d",&n);
    struct emp e[1000];
    for(i=0;i<n;i++)
    {
    	scanf("%s",e[i].name);
    	scanf("%d",&e[i].wage);
    	scanf("%d",&e[i].days);
    }

    for(i=0;i<n;i++)
    {
    	printf("%s ",e[i].name);
    	bp= (e[i].wage)*(e[i].days);
    	if(bp<1000)
    	{
    		 hra=(0.12)*bp;
    	}
    	else
    	{
    		 hra=(0.2)*bp;
    	}

    	if((e[i].days)>19)
    	{
             ta=(0.1)*bp;
    	}
    	else
    	{
    		 ta=0;
    	}
       double netsal= bp+hra+ta;
       printf("%f ",netsal);
    }
    return 0;
}