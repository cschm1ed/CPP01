#include "Harl.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "ERROR: input must be: ./harlFilter <level>\n";
        return (1);
    }

    Harl    Karen(argv[1]);
    Karen.complain();
    return 0;
}