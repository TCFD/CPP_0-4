/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:00:46 by zbp15             #+#    #+#             */
/*   Updated: 2023/12/08 15:23:22 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define NC					"\e[0m"
# define RED				"\e[31m"
# define GREEN				"\e[32m"
# define PURPLE				"\e[35m"
# define CYAN				"\e[36m"

#include <iostream>
#include "Brain.hpp"

class Animal {
	protected :
		std::string type;
	public :
		Animal();
		Animal(const Animal &src);
		virtual ~Animal();
		Animal &operator=(const Animal &src);
		std::string getType() const;
		virtual void makeSound() const = 0;
		//virtual Brain* getBrain() const = 0;
};

#endif