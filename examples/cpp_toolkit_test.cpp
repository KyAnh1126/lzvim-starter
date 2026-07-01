// test.cpp
#include <iostream>
#include <vector>

int unusedVariable = 5;

class Animal {
  public:
    void makeSound() {
        std::cout << "Some sound\n";
    }
};

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 10;
    std::cout << add(x, "5") << std::endl;
    Animal a;
    a.makeSound();

    std::vector<int> nums = {1, 2, 3};
    std::cout << nums[5] << '\n';
    for (auto n : nums) {
        std::cout << n << " ";
    }
    std::cout << 'Hello';

    return 0;
}
