#include <stdio.h>

int main()
{
    char user[50], pass[50];
    char symbols[11] = {'!','@','#','*','<','>','?', '/' ,'+','$','_'};
    int count[200], flag, strlen_pass, strlen_user, upper = 0, lower = 0,symbol=0,digit=0;
    for(int i=0; i<200; i++){
        count[i] = 0;
    }

    printf("username:");
    scanf("%s",user);
    printf("password:");
    scanf("%s",pass);

    for(strlen_pass = 0; strlen_pass<50; ++strlen_pass)
    {
        if(pass[strlen_pass] == '\0') break;
    }

    for(strlen_user = 0; strlen_user<50; ++strlen_user){
        if(user[strlen_user] == '\0') break;
    }

    //printf("%s %s\n",pass, user);

    //printf("%d %d\n", strlen_pass, strlen_user);

    if(strlen_pass > 15|| strlen_pass<8){
        printf("Unacceptable1");
        return 1;
    }

    if(strlen_pass >= strlen_user)
    {
        for(int i=0; i<strlen_pass-strlen_user+1; i++){
            for(int j=0; j<strlen_user; j++){
                //printf("%c%c ",pass[i+j], user[j]);
                if (pass[i+j] != user[j]){
                    //printf("%c%c ",pass[i+j], user[j]);
                    flag = 1;
                    break;
                }
                flag =0;
            }
            //printf("\n");
            if(flag == 0){
            printf("unacceptable");
            return 2;
        }
        }
    }

    flag =0;
    for(int i=0; i<strlen_pass;i++){
        for(int j = 0; j<11; j++){
            if(pass[i] == symbols[j])
                symbol++;
                flag = 0;
        }

        if(pass[i] <= 'z' && pass[i] >='a'){
            lower++;
            flag =0;
        }

        if(pass[i] <= 'Z' && pass[i] >= 'A'){
            upper++;
            flag = 0;
        }

        if(pass[i] <= '9' && pass[i]>='0'){
            digit++;
            flag++;
        }

        if(flag > 5){
            printf("unacceptable");
            return 3;
        }
        count[pass[i]]++;
    }

    if(symbol <2 || lower==0 || upper ==0)
    {
        printf("unacceptable");
        return 4;
    }

    for(int i=0; i<200; i++){
        if(count[i]>5){
            printf("unacceptable");
            return 5;
        }
    }

    printf("acceptable");

    return 0;
}
