#include <stdio.h>
int main()
{
    int a,b,c,d;
    while(1)
    {
        printf("enter a single digit number\n");
        scanf("%d",&a);
        if(a>0)
        {
            if(a==5)
            {
                printf("enter a single digit number\n");
                scanf("%d",&b);
                if(b==1)
                {
                    printf("enter a single digit number\n");
                    scanf("%d",&c);
                    if(c>0)
                    {
                        printf("enter a single digit number\n");
                        scanf("%d",&d);
                        if(d==7)
                        {
                            printf("pattern found");
                        }
                        else
                        {
                            printf("pattern not found");
                        }
                        else
                        {
                            break;
                        }
		    }
                else
                {
                    break;
                }
		}
		else{
		  break;}}
            else
            {
                printf("program terminated");
                return 0;
            }
	    }
    }
}

	
    
