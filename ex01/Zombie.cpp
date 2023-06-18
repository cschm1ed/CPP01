/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:41:52 by cschmied          #+#    #+#             */
/*   Updated: 2023/06/18 12:41:52 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {
  std::cout << "Zombie " << name << " constructor called\n";
}

Zombie::~Zombie() { std::cout << "Zombie " << name << " destructor called\n"; }

void Zombie::set_name(std::string new_name) { name = new_name; }

void Zombie::announce() { std::cout << name << ": BraiiiiiiinnnzzzZ...\n"; }
