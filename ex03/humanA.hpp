/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:42:09 by cschmied          #+#    #+#             */
/*   Updated: 2023/06/18 12:42:09 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "weapon.hpp"
#include <iostream>

class HumanA {

private:
  std::string name;
  Weapon &weapon;

public:
  HumanA(std::string name, Weapon &weapon);
  ~HumanA();
  void attack();
};

#endif
