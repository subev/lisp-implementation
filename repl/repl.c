#include <stdio.h>
#include <stdlib.h>

/* if on windows machine*/
#ifdef _WIN32

#include <string.h>
static char* buffer[2048];

char* readline(char* prompt) {
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy = malloc(strlen(buffer) + 1);
    strcpy(cpy, buffer);
    cpy[strlen(cpy) - 1] = '\n';
    return cpy;
}

void add_history(char* useless) {}

#else

#include <editline/readline.h>
#include <editline/history.h>

#endif

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
