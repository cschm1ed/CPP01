/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:39:31 by cschmied          #+#    #+#             */
/*   Updated: 2023/06/18 12:39:37 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {
  std::cout << "Zombie " << name << " constructor called\n";
}

Zombie::~Zombie() { std::cout << "Zombie " << name << " destructor called\n"; }

void Zombie::announce() { std::cout << name << ": BraiiiiiiinnnzzzZ...\n"; }
