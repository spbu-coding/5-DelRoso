#include <stdio.h>

#pragma warning(disable : 4996)

void other()
{
    printf("##############################\n"
        "##############################\n"
        "###****@@@@@@***@@@@@@*****###\n"
        "###****@********@**********###\n"
        "###****@**@@@***@**@@@*****###\n"
        "###****@****@***@****@*****###\n"
        "###****@@@@@@***@@@@@@*****###\n"
        "##############################\n"
        "##############################\n"
        "***!!!It's a hack  attack!!!**\n"
        "******************************\n"
        "*******!!!Don't warry!!!******\n"
        "*******!!!!BE HAPPY!!!!*******\n"
        "******************************\n");
}           

void input()
{
    char buf[5];
    printf("Write some text:\n");
    scanf("%s", buf);
    printf("Written: %s\n", buf);
    fflush(stdout);
}

int main()
{
    printf("%p\n", &other);
    input();
        printf("Everythink is normal\n");
    return 0;
}