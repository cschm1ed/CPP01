
#include "sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "ERROR: input must be: ./sed <filename> <str1> <str2>\n";
		return 1;
	}

	std::string 	filename = argv[1];
	std::string		str1 = argv[2];
	std::string		str2 = argv[3];
	std::ifstream	file_in(filename);
	std::ofstream 	file_out(filename + ".replace");
	std::string 	tmp = NULL;
	size_t				pos;

	while (std::getline(file_in, tmp)) {
		while ((pos = tmp.find(str1)) != tmp.npos) {
			tmp.erase(pos, pos + str1.size());
			tmp.insert(pos, str2);
		}
		file_out << tmp;
	}
	file_in.close();
	file_out.close();
	return 0;
}
