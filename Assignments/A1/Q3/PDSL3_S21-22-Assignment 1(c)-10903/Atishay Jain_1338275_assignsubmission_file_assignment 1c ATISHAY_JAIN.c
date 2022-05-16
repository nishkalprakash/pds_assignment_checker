#include<stdio.h>
int main()
{
  int day,m,n,k;
    float f;

    printf("enter no of machines: " );
	    		scanf("%d",&m);

    printf("enter day: " );
	    		scanf("%d",&day);

    switch(day)
    {
	    case 1:
	    		n=m;
	    		break;

	    case 2:
	    		n=m+(m*3+2)/4;
		    	break;
	    case 6:
	    case 3:

    			printf("enter machines under inspection: " );
	    		scanf("%d",&k);
		    	n=((m-k)*7+2)/4;
	    		break;

	    default:
		    	printf("enter boosting factor:" );
	    		scanf("%f",&f);
		    	n=(int)(m+f*m+0.5);
	    		break;
    }

    printf("the number of manifactured cars is: %d ",n);
    getch();

    return 0;
}


