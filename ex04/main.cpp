/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:42:18 by cschmied          #+#    #+#             */
/*   Updated: 2023/06/18 12:42:18 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cout << "ERROR: input must be: ./sed <filename> <str1> <str2>\n";
    return 1;
  }

  std::string filename = argv[1];
  std::string str1 = argv[2];
  std::string str2 = argv[3];
  std::ifstream file_in(filename);
  std::ofstream file_out(filename + ".replace");
  std::string tmp;
  size_t pos;

  while (std::getline(file_in, tmp)) {
    while ((pos = tmp.find(str1)) != tmp.npos) {
      tmp.erase(pos, str1.size());
      tmp.insert(pos, str2);
    }
    file_out << tmp;
  }
  file_in.close();
  file_out.close();
  return 0;
}
