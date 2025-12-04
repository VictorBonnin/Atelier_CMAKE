#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <operation> <a> <b>\n", argv[0]);
        return EXIT_FAILURE;
    }

    char *op = argv[1];
    double a = atof(argv[2]);
    double b = atof(argv[3]);
    double r = 0;
    int success = 1;

    if (strcmp(op, "add") == 0) {
        r = _add(a, b);
    } 
    else if (strcmp(op, "sub") == 0) {
        r = _sub(a, b);
    } 
    else if (strcmp(op, "mul") == 0) {
        r = _mul(a, b);
    } 
    else if (strcmp(op, "div") == 0) {
        if (b == 0.0) {
            fprintf(stderr, "Erreur : Division par zero impossible.\n");
            return EXIT_FAILURE;
        }
        r = _div(a, b);
    } 
    else {
        fprintf(stderr, "Erreur : Operateur '%s' inconnu.\n", op);
        success = 0;
    }

    if (success) {
        printf("%g\n", r);
    } else {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
