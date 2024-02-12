/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:14:15 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/08 15:14:15 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <fstream>
# include <iostream>
# include <string>
# include <sstream>
# include <cstdlib>

class   Replace {
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        Replace(const std::string &filename, const std::string &s1, const std::string &s2);
        ~Replace();
        void    replace();
};

#endif