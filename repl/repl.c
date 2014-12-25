#include <stdio.h>

static char input[2048];

int main(int argc, char** argv)
{
    puts("Lispy version 0.0.0.1");
    puts("Press ctrl + c to exit");


    while (1) {
        fputs("Lispy> ", stdout);
        fgets(input, 2048, stdin);

        printf("You just entered: %s", input);
    }


    return 0;
}
