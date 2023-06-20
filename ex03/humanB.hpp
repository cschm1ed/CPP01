/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:42:09 by cschmied          #+#    #+#             */
/*   Updated: 2023/06/18 12:42:09 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "weapon.hpp"
#include <iostream>

class HumanB {

private:
  std::string	name;
  Weapon		*weapon;

public:
  HumanB(std::string name);
  ~HumanB();
  void setWeapon(Weapon new_weapon);
  void attack();
};

#endif
