#include <iostream>

int main() {
    long long n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    while (n > 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }

        std::cout << n << "\n";
    }

    return 0;
}