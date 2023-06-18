/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:42:09 by cschmied          #+#    #+#             */
/*   Updated: 2023/06/18 12:42:09 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "violence.hpp"

Weapon::Weapon(std::string name) : type(name) {
  std::cout << "weapon " << name << " constructor called\n";
}

Weapon::~Weapon() { std::cout << "weapon " << type << " destructor called\n"; }

const std::string &Weapon::getType() { return type; }

void Weapon::setType(std::string new_type) { type = new_type; }
