#include <iostream>
#include <limits>

unsigned long long silnia(unsigned long long n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * silnia(n - 1);
    }
}

int main() {
    long double e = 1;
    long double x = 1;
    unsigned long long mianownik = 1;
    long double epsilon;

    std::cout << "Podaj epsilon (np. 1e-20): ";
    std::cin >> epsilon;

    if (epsilon <= 0.0L) {
        std::cerr << "Epsilon musi byc liczba dodatnia!" << std::endl;
        return 1;
    }

    while (x > epsilon) {
        e += x;
        mianownik++;
        x = 1.0L / silnia(mianownik);
    }

    std::printf("Przyblizenie liczby e do %.0Lf miejsc po przecinku wynosi %.20Lf\n", -std::log10(epsilon), e);
    return 0;
}
