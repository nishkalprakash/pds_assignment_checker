/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
Package:CodeBlocks
Operating system:Windows*/
#include<stdio.h>
int main(){
    char name[20];
    char pswd[15];
    int i,countLC=0,countUC=0,countSC=0,countInt=0;
    printf("enter username:");
    scanf("%s",name);
    printf("enter password:");
    scanf("%s",pswd);
    int arr[256]={0};
    for(i=0;i<16;i++){
        if(pswd[i]==' ')
            continue;
            arr[pswd[i]]++;
    }
    for(i=0;i<256;i++){
        if(arr[i]>=5){
            printf("do not repeat a character for more than 5 times\n");
        }
    }
    for(i=0;pswd[i]!='\0';++i){
        printf("length of password is %d",i);
    }
    if((i<8)||(i>15)){
        printf("length of password should be greater than 8 and less than 15");
    }
    for(i=0;i<16;i++){
        char ch=pswd[i];
        if(ch=='\0')
            break;
        if(ch>='a' && ch<='z'){
            countLC++;
        }
        else if(ch>='A' && ch<='Z'){
            countUC++;
        }
        else if(ch>='0' && ch<='9'){
            countInt++;
        }
        else{
            countSC++;
        }

    }
    if(countLC<1){
        printf("password should contain atleast one lowercase letter\n");
    }
    else if(countUC<1){
        printf("Password should contain atleast one uppercase letter\n");
    }
    else if(countSC<2){
        printf("Password should contain atleast two special characters\n");
    }
    else if(countInt<1){
        printf("Password should contain atleast one integer\n");
    }
    return 0;
}
