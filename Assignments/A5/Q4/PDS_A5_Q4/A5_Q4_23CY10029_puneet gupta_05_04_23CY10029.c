#include <stdio.h>

int main ()
{
	int a[100],b[100],c[100],mark[19999],i ,j,k,stu=20,l,m,n;  
	
	for(i=0;i<20;i++)
        a[i]=rand()%1001+1000;
	for(j=0;j<20;j++)
        b[j]=rand()%11+15;
	for(k=0;k<20;k++)
	c[k]=rand()%101;
	for(l=0;l<20;l++){
        
	printf(" roll:%d\t age:%d\t marks:%d \n",a[l],b[l],c[l]);}
        
	for(m=0;m<19;m++){
for(n=m+1;n<19;n++)
if (c[m]==c[n])
printf("%d\t  %d\t %d  \n",a[m],b[m], c[m]);
printf("%d\t  %d\t %d  \n",a[n],b[n], c[n]);
}
        return 0;

}
