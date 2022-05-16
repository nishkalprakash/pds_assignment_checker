#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){
    char a1[100],a2[100]; //taking string input
printf("enter string 1\n");
scanf("%[^\n]%*c", a1);
printf("enter string 2\n");
scanf("%[^\n]%*c", a2);

int temp1=0,temp2=0,i,c,similarity=0;
for(i = 0; a1[i] != '\0'; ++temp1); //counts length
for(i = 0; a2[i] != '\0'; ++temp2);

if(temp1==temp2){
    printf("they have same length\n"); //same length condition just checks character similarity
    c=0;
    for(i=0;i<temp1;i++){
        if(a1[i]!=a2[i]){
            similarity++; //counts the similarity score
        }
    }
}
else{
    printf("they don't have same length\n");
    if(temp1>temp2){
        c=temp1-temp2; //no.of dash counter
    }
    else if(temp2>temp1){
        c=temp2-temp1;
    }
}
printf("your string is s1 : %s",a1);
printf("your string 2 is: %s",a2);
printf("their similarity is :%d ",similarity);


return 0;
}
