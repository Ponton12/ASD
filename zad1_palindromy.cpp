#include <iostream>

bool czy_palindrom(int n) {
    int oryginal = n;
    int odwrocona = 0;

    while (n != 0) {
        odwrocona = odwrocona * 10 + (n % 10);
        n /= 10;
    }

    return oryginal == odwrocona;
}

int main() {
    printf("Liczby dziesietne ktore przed i po podniesieniu do kwadratu sa palindromami:\n");
    for (int i = 1; i <= 1000; i++) {
        if (czy_palindrom(i) && czy_palindrom(i * i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
