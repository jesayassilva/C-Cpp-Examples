#include <iostream>
#include <vector>

int main() {
    std::vector<int> vetor(10);


    for (int i = 0; i < 10; i++) {
        int x;
        std::cin >> x;
        vetor[i] = x;
    }

    for (int i = 9; i >= 0; i--) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
