# include <stdio.h>
int main()
{
    int r;
    printf("Which no solution you want: ");
    scanf("%d",&r);

    if(r==1)
    {
        char ip[10];
        scanf("%s",&ip);

    }

    if(r==3) // when user will give the value of r as 3 the code for third part will run.
    {

        char a[1024];
        scanf("%[^\n]%*c",a);
        int l,v=0,c=0,blank=0,sentences=0, NC=0,SC=0;
        for(l=0; a[l]!='\0'; l++)
        {
            if((a[l]>=65 && a[l]<=90) || (a[l]<=122 && a[l]>=97))
            {
                switch(a[l])
                {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    v++;
                    break;
                default:
                    c++;
                }
            }
            if(a[l]==' ')
                blank++;
            if (a[l]=='.')
                sentences++;

            switch(a[l])
            {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                NC++;
                break;
            }
            if((a[l]>=32&&a[l]<=47)||(a[l]>=58&&a[l]<=64)||(a[l]>=91&&a[l]<=96)||(a[l]>=123&&a[l]<=126))
                SC++;



        }
        printf("\n  vowels:%d \n consonants:%d \n  words:%d\n sentences:%d\n numeric characters: %d\n special printable characters:%d",v,c,blank+1,sentences,NC,SC);
    }

return 0;
}
