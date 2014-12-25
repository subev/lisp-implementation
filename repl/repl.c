#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv)
{
    puts("Lispy version 0.0.0.1");
    puts("Press ctrl + c to exit");


    while (1) {
        char* input = readline("Lispy> ");
        add_history(input);

        printf("You just entered: %s \n", input);

        free(input);
    }


    return 0;
}
