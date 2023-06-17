
#include <iostream>

int main() {
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "pointer: " << stringPTR << "\n";
	std::cout << "reference: " << &stringREF << "\n";
	std::cout << "str address: " << &brain << "\n\n";

	std::cout << "str val: " << brain << "\n";
	std::cout << "pointer val: " << *stringPTR << "\n";
	std::cout << "reference val: " << stringREF << "\n\n";

	return 0;
}
