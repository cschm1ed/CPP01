#include "Harl.hpp"

int main() {
    Harl    Karen;

    std::cout << "\n---- info level ----\n";
    Karen.complain("info");
    std::cout << "--------------------\n\n";
    std::cout << "---- debug level ---\n";
    Karen.complain("debug");
    std::cout << "--------------------\n\n";
    std::cout << "--- warning level --\n";
    Karen.complain("warning");
    std::cout << "--------------------\n\n";
    std::cout << "---- error level ---\n";
    Karen.complain("error");
    std::cout << "--------------------\n";
    return 0;
}