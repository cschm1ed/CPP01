/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:41:52 by cschmied          #+#    #+#             */
/*   Updated: 2023/06/18 12:41:52 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
  Zombie *horde = zombieHorde(10, "Rick and Morty fans");

  for (int i = 1; i <= 10; i++) {
    std::cout << i << " ";
    horde[i].announce();
  }

  delete[] horde;
  return 0;
}
