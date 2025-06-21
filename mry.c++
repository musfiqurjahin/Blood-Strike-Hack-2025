#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int[]> ptr(new int[100]);

    std::cout << "Memory managed by unique_ptr!" << std::endl;

    // No need to delete manually, it auto-cleans up
    return 0;
}
