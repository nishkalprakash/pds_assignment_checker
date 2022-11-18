/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3
package          : code blocks
*/
#include<time.h>
#include<math.h>
int main()
{
	srand(time(NULL));
	long long int k;
	double De,p,D=0;
	int n;
	printf("enter n ");
	scanf("%d",&n);
	printf("enter k");
	scanf("%lld",&k);
	for(int i=n;i<=k;k++)
	{
		D=D+n*n;
	}
	p=D/k;
	De=sqrt(p);
	printf("%f",De);
}
