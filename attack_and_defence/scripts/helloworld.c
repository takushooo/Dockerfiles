#include <stdio.h>
#include <string.h>

int main(int argc, char *args[])
{
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);

    printf("Hello, world!\n");
    char fname[] = "../flag/flag.txt";
    char ch;
    FILE *fp;

    char *s = "password";
    char cmd[16];
    char flag[128];
    char tmp1[]="FLAG{";
    char tmp2[64];
    char tmp3[]="}";
    scanf("%s", cmd);
    if(strncmp(s, cmd, 8) == 0){
        scanf("%s", tmp2);
        sprintf(flag, "%s%s%s\n", tmp1, tmp2, tmp3);
        printf("%s", flag);
        fp = fopen("flag.txt", "w");
        fprintf(fp, "%s", flag);
        fclose(fp);
    }else{
        printf("fail\n");
    }
    return 0;
}