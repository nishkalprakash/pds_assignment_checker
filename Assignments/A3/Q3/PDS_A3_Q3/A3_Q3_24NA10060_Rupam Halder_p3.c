#include <stdio.h>
int main(){
int a,b,c,d;
printf("Enter four integers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a==b==c==d){
printf("NO");}
else if(a==b==c){printf("NO");
}
else if(b==c==d){printf("NO");
}
else if(c==d==a){printf("NO");
}
else if(d==a==b){printf("NO");
}
else if(a==b==c!=d){
printf("NO");
}
else if(a==b){
printf("YES");}
else if(a==c){
printf("YES");}
else if(a==d){
printf("YES");}
else if(b==c){
printf("YES");}
else if(b==d){
printf("YES");}
else if(c==d){
printf("YES");}

else{
printf("NO");}
return 0;
}
