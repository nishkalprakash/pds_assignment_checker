/*name : vyshnavi_lagudu
dept : EE
roll number:21EE10044
assignment class :3
package : code blocks
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int m,x,n,k;
	float f;
	printf("number of machines:");
	scanf("%d",&m);
	printf("day number(1-7):");
	scanf("%d",&x);
	switch(x)
	{
		case 1:n=m;
		       printf("number of manufactured cars:%d",n);
		       break;
		case 2:n=round(m+(m/2)+(m/4));
		       printf("number of manufactured cars:%d",n);
		       break;
		case 3:printf("machines under inspection:");
		       scanf("%d",&k);
		       n=round((m-k)+((m-k)/2)+((m-k)/4));
		       printf("number of manufactured cars:%d",n);
		       break;
		case 4:printf("boosting fraction:");
		       scanf("%f",&f);
		       n=round(m+f);
		       printf("number of manufactured cars:%d",n);
		       break;
		case 5:printf("boosting fraction:");
		       scanf("%f",&f);
		       n=round(m+f);
		       printf("number of manufactured cars:%d",n);
		       break;
		case 6:printf("machines under inspection:");
		       scanf("%d",&k);
		       n=round((m-k)+((m-k)/2)+((m-k)/4));
		       printf("number of manufactured cars:%d",n);
		       break;
		case 7:printf("boosting fraction:");
		       scanf("%f",&f);
		       n=round(m+f);
		       printf("number of manufactured cars:%d",n);
		       break;
		default:printf("invalid day number");
	}
    return 0;
}
