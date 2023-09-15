#include <stdio.h>
#include <stdlib.h>
int main(){
  printf("23AG10047\n Vedaant Nigam\n");
  int a[50],n,b,i;
  printf("enter number of elements\n");
  scanf("%d",&n);
  for(i=0;i<=n-1;){b = rand()%50;
    if(b>=10){a[i]=b;i++;}
  }
  for(i=0;i<=n-1;i++){printf("%d ",a[i]);}
  printf("\n");
  int m,s;
  for(i=0;i<=n-1;i++){for(m=i+1;m<=n-1;m++){for(s=m+1;s<=n-1;s++){if(a[i]+a[m]+a[s]==60){printf("a[%d]=%d +a[%d]= %d +a[%d]= %d= %d\n",i,a[i],m,a[m],s,a[s],a[i]+a[m]+a[s]);}
	else continue;
      }
    }
      }
  return 0;
}
