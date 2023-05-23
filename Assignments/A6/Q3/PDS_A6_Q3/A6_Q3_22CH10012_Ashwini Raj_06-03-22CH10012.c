#include<stdio.h>
int main()
{   //initialising array and limit
    int arr[80],n;
    printf("Limit(>n) = ");
    scanf("%d", &n);
    int i = 0;
    while(i<=n){
        scanf("%d",&arr[i]);
        i++;}
    int j = n-1;
    while(j>=0){
        printf("%d ",arr[j]);
        j++;}
    printf("\n");
    char c[50],d[50];
    scanf("%s %s", &c, &d);
    //counting the length of strings
    int count1 = strlen(c);
    int count2 = strlen(d);
    //condition of anagrams
    if(count1 == count2 ){
            for(int i = 0; i != '\0';i+=1){
        if(c[i]==d[i]){

        printf("%s and %s are anagrams", c,d);
    }
    else printf("%s and %s are not anagrams",c,d);
        }
    }
    else{
        printf("%s and %s are not anagrams",c,d);
    }
}
