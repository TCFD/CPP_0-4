/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:50:02 by rciaze            #+#    #+#             */
/*   Updated: 2023/12/01 15:04:07 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string FristType) : type(FristType){
}

Weapon::~Weapon() {
}

const std::string&	Weapon::getType(void){
	
	return (this->type);
}

void				Weapon::setType(std::string NewType){
	this->type = NewType;
}
