#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Erreur de parametres\n");
        return 1;
    }

    char *op = argv[1];
    double a = atof(argv[2]);
    double b = 0.0;
    double r = 0.0;

    if (strcmp(op, "add") == 0 ||
        strcmp(op, "sub") == 0 ||
        strcmp(op, "mul") == 0 ||
        strcmp(op, "div") == 0) {

        if (argc != 4) {
            printf("Erreur de parametres\n");
            return 1;
        }

        b = atof(argv[3]);

        if (strcmp(op, "add") == 0) {
            r = _add(a, b);
        } else if (strcmp(op, "sub") == 0) {
            r = _sub(a, b);
        } else if (strcmp(op, "mul") == 0) {
            r = _mul(a, b);
        } else if (strcmp(op, "div") == 0) {
            r = _div(a, b);
        }

    } else if (strcmp(op, "car") == 0) {
        // opération unaire : on ne prend que le premier nombre
        r = car(a);
    } else {
        printf("Erreur de parametres\n");
        return 1;
    }

    printf("%lf\n", r);
    return 0;
}
