// Copyright 2020 Uskova

#include "Fraction.h"
#include <stdio.h>

int main() {
    int n1 = 0;
    int n2 = 0;
    printf("Enter first number");
    scanf("%d", &n1);
    printf("Enter second number");
    scanf("%d", &n2);
    Fraction a(n1, n2);  // 1/2
    Fraction b(a);
    Fraction c;
    c = a + b;
    printf("+: %s", c.getValue());
    Fraction c2;
    c2 = n1 / n2;
    printf("/: %s", c2.getValue());
    Fraction c3;
    c3 = n1 - n2;
    printf("-: %s", c3.getValue());
    return 0;
}
