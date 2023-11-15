/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:51:36 by rciaze            #+#    #+#             */
/*   Updated: 2023/11/15 15:43:56 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/main.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void){
	return ;
}

std::string* Contact::getFirstName() {
	return &FirstName;
}

void Contact::setFirstName(const std::string &name) {
	FirstName = name;
}

std::string* Contact::getLastName() {
	return &LastName;
}

void Contact::setLastName(const std::string &name) {
	LastName = name;
}

std::string* Contact::getNickname() {
	return &Nickname;
}

void Contact::setNickname(const std::string &name) {
	Nickname = name;
}

std::string* Contact::getPhoneNumber() {
	return &PhoneNumber;
}

void Contact::setPhoneNumber(const std::string &nb) {
	PhoneNumber = nb;
}

std::string* Contact::getDarkestSecret() {
	return &DarkestSecret;
}

void Contact::setDarkestSecret(const std::string &secret) {
	DarkestSecret = secret;
}

void	Contact::AddTo(std::string *str, int *boolean){
	
	if (std::getline(std::cin, *str)) {perror(""); CtrlD();}
	if (!std::cin.eof() && *str != "") {
		if (!check_letters(*str)) {
			std::cout << RED << "Wrong input type." << NC << std::endl;
			return ;
		}
		*boolean = 0;
	}
	else if (std::cin.eof())
		CtrlD() ;
}

void	Contact::AddPhone(std::string *str, int *boolean){
	if (std::getline(std::cin, *str)) {perror(""); CtrlD();}
	if (!std::cin.eof() && *str != "") {
		if (!check_number(*str)) {
			std::cout << RED << "Wrong input type." << NC << std::endl;
			return ;
		}
		*boolean = 0;
	}
	else if (std::cin.eof())
		CtrlD() ;
}

void	Contact::PrintContactTab(PhoneBook *Phone) {
	int 		i = 0;

	std::cout << "├─────────────────────────────────────────────────────────┤" << std::endl;
	for (i = 0; i < Phone->NumberOfEntries; i++) {
    	std::cout << "│" << i + 1 << " ";
		PrintTabElmt(Phone->tab[i].FirstName);
		PrintTabElmt(Phone->tab[i].LastName);
		PrintTabElmt(Phone->tab[i].Nickname);
		PrintTabElmt(Phone->tab[i].PhoneNumber);
		PrintTabElmt(Phone->tab[i].DarkestSecret);
		std::cout << "│" << std::endl;
		if (i < Phone->NumberOfEntries - 1)
			std::cout << "├─────────────────────────────────────────────────────────┤" << std::endl;
	}
	std::cout << "├─────────────────────────────────────────────────────────┤" << std::endl;
}

void	Contact::PrintStuff(Contact contact){
	std::cout << "\n	First name     :  " << contact.FirstName << std::endl;
	std::cout << "	Last name      :  " << contact.LastName << std::endl;
	std::cout << "	Nickname       :  " << contact.Nickname << std::endl;
	std::cout << "	Phone number   :  " << contact.PhoneNumber << std::endl;
	std::cout << "	Darkest secret :  " << contact.DarkestSecret << "\n" << std::endl;
	
}

