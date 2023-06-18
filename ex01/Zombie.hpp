/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:41:52 by cschmied          #+#    #+#             */
/*   Updated: 2023/06/18 12:41:52 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

private:
  std::string name;

public:
  Zombie(void);
  ~Zombie(void);

  std::string get_name(void);
  void announce(void);
  void set_name(std::string new_name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
