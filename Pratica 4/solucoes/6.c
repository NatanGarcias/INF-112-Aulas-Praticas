#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int polSolve(char **s, int *l) {
    char *si = s[*l];
    *l += 1;
    if (strcmp(si, "+") == 0) {
        return polSolve(s, l) + polSolve(s, l);
    } else if (strcmp(si, "-") == 0) {
        return polSolve(s, l) - polSolve(s, l);
    } else if (strcmp(si, "*") == 0) {
        return polSolve(s, l) * polSolve(s, l);
    } else if (strcmp(si, "/") == 0) {
        return polSolve(s, l) / polSolve(s, l);
    } else {
        return atoi(si);
    }
}

char **readExpression(int *n) {
    /**
     * Exemplo de linha a ser lida:
     *  + 1 3
     *  + 1 / 2 1
     */
    int i = 0;
    size_t n_bytes = 100;
    char *token = NULL;
    char **tokens = NULL;
    char *line = NULL;
 
    line = (char *) malloc(n_bytes * sizeof(char));
    getline(&line, &n_bytes, stdin);
    tokens = (char **) malloc(strlen(line) * sizeof (char *)); 

    token = strtok(line, " \n");
    while (token != NULL) {
        tokens[i] = (char *) malloc((strlen(token) + 1) * sizeof (char));
        strcpy(tokens[i], token);
        i++;
        token = strtok(NULL, " \n");
    }
    *n = i;
    free(line);
    return tokens;
}

void deleteExpression(char **line, int n) {
    int i = 0;
    for (i = 0; i < n; i++)
        free(line[i]);
    free(line);
}

int main() {
    int n = 0;
    int m = 0;
    char **expression = readExpression(&n);
    printf("Resultado: %d\n", polSolve(expression, &m));
    deleteExpression(expression, n);
    return 0;
}
