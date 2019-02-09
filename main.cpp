#include <iostream>

int triangle(int n) {
    if (n == 0) {
        return n;
    } else {
        return n + triangle(n - 1);
    }
}

int gauss(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;

    std::cout << "Input: ";
    std::cin >> n;

    std::cout << std::endl <<  gauss(n);

    return 0;
}
