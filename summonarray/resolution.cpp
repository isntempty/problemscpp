#include <iostream>

int main() {
    int n;
    unsigned long long int sum = 0,ar[999];
    
    std::cin >> n;
    for (int i=0; i < n; i++) {
        std::cin >> ar[i];
    }
    for (int i=0; i < n; i++) {
        sum = sum + ar[i];
    }
    std::cout << sum;
}
