/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:36:10 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/07 16:36:10 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int check_input(int argc)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    return (0);
}

int main(int argc, char **argv)
{
    if (check_input(argc))
        return (1);
    Replace replace(argv[1], argv[2], argv[3]);
    try {
        replace.replace();
    }
    catch (char *e) {
        std::cerr << "error" << e << std::endl;
    }
    return (0);
}