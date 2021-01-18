#include <iostream>
#include <string>

void evenodd(int number) {
    if (number % 2 == 0) {
        std::cout << "even" << '\n';
    }
    else {
        std::cout << "odd" << '\n';
    }
}

int main () {
    int a, b;
    std::cin >> a, b;

    std::string written[9] = { "one","two","three","four","five","six","seven","eight","nine" };
    if (1<a<9) {
        std::cout << written[a - 1] << "\n" << written[b - 1] << std::endl;
        evenodd(a);
        evenodd(b);
        std::cout << std::endl;
    }
    return 0;
}
