#include <stdio.h>
#include <string.h>

int main(int argc, char *args[])
{
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);

    printf("Hello, world!\n");
    char ch;
    FILE *fp;

    char *s = "password";
    char cmd[16];
    char flag[128];
    char tmp[64];
    scanf("%s", cmd);
    if(strncmp(s, cmd, 8) == 0){
        scanf("%s", tmp);
        sprintf(flag, "FLAG{%s}\n", tmp);
        printf("%s", flag);
        fp = fopen("../flag/flag.txt", "w");
        fprintf(fp, "%s", flag);
        fclose(fp);
    }else{
        printf("fail\n");
    }
    return 0;
}