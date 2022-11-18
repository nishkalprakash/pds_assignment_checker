#include<stdio.h>
#include<math.h>
int main()
{ int i;
  double z,k,zi,s,si;


  printf("z = ");
  scanf("%lf\n",&zi);

  printf("k = ");
  scanf("%lf",&k);

  for(i=1;i<=k;i++){ s=sqrt(zi);
                     zi=zi-s;
                     if (zi>0){ printf("(%lf , %d)",zi,i);}


                     if (zi<0){ printf("(%lf , %d)",zi,i);}
  }



  return(0);

}
