// Copyright 2020 Uskova

#include "Fraction.h"
#include <stdio.h>

int main() {
    int n1 = 0;
    int n2 = 0;
    printf("Enter first number of N1");
    scanf("%d", &n1);
    printf("Enter second number of N1");
    scanf("%d", &n2);
    Fraction a(n1, n2);  // 1/2
    Fraction b(a);
    Fraction c;
    c = a + b;
    printf("+: %s", c.getValue());
    Fraction c2;
    c2 = c / a;
    printf("/: %s", c2.getValue());
    Fraction c3;
    c3 = c2 - c;
    printf("-: %s", c3.getValue());
    return 0;
}
