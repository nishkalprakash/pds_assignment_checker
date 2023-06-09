// name: md hasib reza
// roll:22ec10047

#include<stdio.h>
#include<stdlib.h>

struct record{
    char rollno[10];
    char branch[2];
    struct dob {
    int dd;
    int mm;
    int yy;
    };}
void read_record(struct record*a, int n){
    for(int i=0;i<n;i++)
    {
        scanf("%s ",a[i].rollno);
        scanf("%s ",a[i].branch);
        scanf("%d%d%d",&a[i].dob.dd,&a[i].dob.mm,&a[i].dob.yy);

    }
}

  };
  int main(){
  int n;
  scanf("%d",&n);
  printf("%d",n);

  struct record*a=(struct record*)malloc(n*sizeof(struct record));
  read_record(a,n);

  int Y,m=0;
  scanf("%d",&Y);
  for(int i=0;i<n;i++){
    if(a[i].dob.yy<Y){
        free(a[i]);
        m++;
    }
  }


return 0;
  }







