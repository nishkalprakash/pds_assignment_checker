//Roll No:23MF10042
//Name:Theyanesh Eswaramoorthy Rajahkrishnan
#include<stdio.h>
#include<stdlib.h>
void findmax1(int a[][20],int m1,int n1)
{
    int imax,jmax,sumax=0,sum1;
    for(int i=0; i<m1-2; i++)
    {
        for(int j=0; j<n1-2; j++)
        {
            sum1=0;
            for(int i1=0; i1<3; i1++)
                for(int j1=0; j1<3; j1++)
		  sum1+=a[i1+i][j1+j];
            if(sum1>sumax)
            {
                sumax=sum1;
                imax=i;
                jmax=j;
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%d ",a[imax+i][jmax+j]);
        printf("\n");
    }
    printf("sum=%d",sumax);
}


void findmin1(int a[][20],int m1,int n1)
{
    int imin,jmin,sumin=100,sum2;
    for(int i=0; i<m1-2; i++)
    {
        for(int j=0; j<n1-2; j++)
        {
            sum2=0;
            for(int i1=0; i1<3; i1++)
                for(int j1=0; j1<3; j1++)
		  sum2+=a[i1+i][j1+j];
            if(sum2<sumin)
            {
                sumin=sum2;
                imin=i;
                jmin=j;
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%d ",a[imin+i][jmin+j]);
        printf("\n");
    }
    printf("sum=%d",sumin);
}
void findminmax(int a[][20],int m,int n)
{
  int max=0,s[m],min=10,imin,jmin;
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
	{
	  if(a[i][j]>max)
	    {
	      max=a[i][j];
	    }
	}
      s[i]=max;
      max=0;
    }
  for(int i=0;i<m;i++)
    if(s[i]<min){
      min=s[i];
      imin=i;}
  for(int i=0;i<n;i++)
    if(a[imin][i]==min)
      jmin=i;
  printf("minmax=%d, row=%d, col=%d",min,imin+1,jmin+1);
}
	      
void findmaxmin(int a[][20],int m,int n)
{
  int max=0,s[m],min=10,imax,jmax;
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
	{
	  if(a[i][j]<min)
	    {
	      min=a[i][j];
	    }
	}
      s[i]=min;
      min=10;
    }
  for(int i=0;i<m;i++)
    if(s[i]>max){
      max=s[i];
      imax=i;}
  for(int i=0;i<n;i++)
    if(a[imax][i]==max)
      jmax=i;
  printf("maxmin=%d, row=%d, col=%d",max,imax+1,jmax+1);
}	  
  


int main()
{
  int x[20][20],m,n,y[4][4]= {{6,0,5,3},{2,7,3,9},{1,5,7,8},{3,4,6,7}};
    printf("Enter m and n for m*n\n");
    scanf("%d%d",&m,&n);
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            x[i][j]=(rand()% 10);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d ",x[i][j]);
        printf("\n");
    }
    printf("FINDMAX\n");
    findmax1(x,m,n);
    printf("\nFINDMIN\n");
    findmin1(x,m,n);
    printf("\nFINDMINMAX\n");
    findminmax(x,m,n);
    printf("\nFINDMAXMIN\n");
    findmaxmin(x,m,n);
    

}
//int summ(int a[][20],int i1,int j1)
//{
//    int su=0;
//    for(int i=0; i<3; i++)
//        for(int j=0; j<3; j++)
//            su+=a[i1+i][j1+j];
//    return su;
//}
//
//
