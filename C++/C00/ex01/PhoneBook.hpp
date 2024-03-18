/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:12:51 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/23 14:34:39 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>
# include <limits>

class PhoneBook {
	private:
		Contact	list[8];
		int	length;
	public:
		PhoneBook();
		void	addContact();
		void	display();
		void	search();
		~PhoneBook();
};

#endif