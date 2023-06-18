/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:40:27 by cschmied          #+#    #+#             */
/*   Updated: 2023/06/18 12:40:29 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

private:
  std::string name;

public:
  Zombie(std::string name);
  ~Zombie(void);

  std::string get_name(void);
  void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
