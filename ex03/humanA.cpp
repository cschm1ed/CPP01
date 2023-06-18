/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:42:09 by cschmied          #+#    #+#             */
/*   Updated: 2023/06/18 12:42:09 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "violence.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {
  std::cout << "constructor human " << name << " with weapon "
            << weapon.getType() << " called\n";
}

HumanA::~HumanA() { std::cout << "destructor human " << name << " called\n"; }

void HumanA::attack() {
  std::cout << name << " attacks with their " << weapon.getType() << "\n";
}
