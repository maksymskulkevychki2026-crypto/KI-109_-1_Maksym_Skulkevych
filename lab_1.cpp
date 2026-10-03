#include <iostream>
#include <stdio.h>


int main() {
    int n, h, m, s;
    printf("Entry seconds: ");
    scanf_s("%d", &n);

    h = n / 3600;
    m = (n % 3600) / 60;
    s = n % 60;

    printf("h, m, s\n");

    printf("%d %d %d", h, m, s);

    return 0;
}