/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:10:02 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/22 15:10:02 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
# include <string>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
        int index;
    public:
        Contact();
        ~Contact();
        void    getContact();
        void    showContact(int i) const;
        void    showContactInfo(int i) const;
        std::string truncate(std::string field) const;
        std::string getField(std::string fields);
        void    setIndex(int i);
};