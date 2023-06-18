/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:39:46 by cschmied          #+#    #+#             */
/*   Updated: 2023/06/18 12:39:49 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
  Zombie *vikram;

  Zombie guillaume("guillaume");
  guillaume.announce();
  std::cout << "\n";
  randomChump("Gregor");
  std::cout << "\n";
  vikram = newZombie("Vikram");
  vikram->announce();
  std::cout << "\n";
  delete vikram;
}
