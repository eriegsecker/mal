#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "linenoise.h"

char *READ(char *input) {
    return input;
}

char *EVAL(char *input) {
    return input;
}

char *PRINT(char *input) {
    return input;
}

char *rep(char *input) {
    return PRINT(EVAL(READ(input)));
}

int main(void) {
    bool end_program = false;
    char *input = NULL;
    const char *history_filepath = "history.txt";

    linenoiseHistoryLoad(history_filepath);
    while (!end_program) {
        if ((input = linenoise("user> "))) {
            linenoiseHistoryAdd(input);
            printf("%s\n", rep(input));
            free(input);
        } else {
            end_program = true;
        }
    }
    linenoiseHistorySave(history_filepath);

    return 0;
}