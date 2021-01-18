#include <iostream>
#include <string>

int main () {
    int loop1=1;
    int max;
    while(loop1==1) {
        std::cout << "n. max: ";
        std::cin >> max;
        if(max%2==0) {
            std::cout << "n. max tem que se impar!" << std::endl;
        }
        else {
            loop1=0;
        }
    }
    for (int i=0; i <= max; i++) {
        for (int j=i+1; j <= max-i; j++) {
            std::cout << j;
        }
        std::cout << std::endl;
        for (int j=1; j <= i+1; j++) {
            std::cout << " ";
        }    
    }
}
