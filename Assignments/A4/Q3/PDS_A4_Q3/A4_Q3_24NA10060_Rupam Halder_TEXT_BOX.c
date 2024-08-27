# include <stdio.h>
int main(){
int row,col;
scanf("%d",&row);
for(int t=0;t<=row;row){
col=row+t;
for(row-t*col){
printf(" ");}
}
for(int i=0;i<=row;row++){

printf("%d %d",row+i,row-i);

}



}