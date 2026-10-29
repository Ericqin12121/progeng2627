
#include <iostream>

int smallest_factor(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}

bool is_prime(int n) {
    if (smallest_factor(n) == n) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int a, b;
    std::cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (is_prime(i)) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
