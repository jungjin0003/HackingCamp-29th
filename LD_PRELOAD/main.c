#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp = fopen("A.txt", "r");

    char buf[32];
    fgets(buf, sizeof(buf), fp);
    printf("%s", buf);
    fclose(fp);

    return 0;
}