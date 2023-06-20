/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:42:09 by cschmied          #+#    #+#             */
/*   Updated: 2023/06/18 12:42:09 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

private:
  std::string type;

public:
  Weapon(std::string name);
  ~Weapon();
  const std::string& getType();
  void setType(std::string new_type);
};
#endif
