/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:46:09 by gabrrodr          #+#    #+#             */
/*   Updated: 2025/01/22 15:59:15 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

void    identify(Base& p) {
    try {
        (void)dynamic_cast< A& >(p);
        std::cout << "A" << std::endl;
    } catch (std::exception &e) {}
    try {
        (void)dynamic_cast< B& >(p);
        std::cout << "B" << std::endl;
    } catch (std::exception &e) {}
    try {
        (void)dynamic_cast< C& >(p);
        std::cout << "C" << std::endl;
    } catch (std::exception &e) {}
}

void    identify(Base* p) {
    if (dynamic_cast< A* >(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast< B* >(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast< C* >(p))
        std::cout << "C" << std::endl;
}

Base*   generate() {
    if (std::rand() % 3 == 0)
        return new A;
    else if (std::rand() % 3 == 1)
        return new B;
    else
        return new C;
}

int main() {
    
    Base*   test1 = generate();
    Base*   test2 = generate();
    Base*   test3 = generate();
    Base*   test4 = generate();
    Base*   test5 = NULL;

    std::cout << "test1 = "; identify(test1); std::cout << std::endl;
    std::cout << "test1 = "; identify(*test1); std::cout << std::endl;
    
    std::cout << "test2 = "; identify(test2); std::cout << std::endl;
    std::cout << "test2 = "; identify(*test2); std::cout << std::endl;
    
    std::cout << "test3 = "; identify(test3); std::cout << std::endl;
    std::cout << "test3 = "; identify(*test3); std::cout << std::endl;
    
    std::cout << "test4 = "; identify(test4); std::cout << std::endl;
    std::cout << "test4 = "; identify(*test4); std::cout << std::endl;
    
    std::cout << "test5 = "; identify(test5); std::cout << std::endl;
    std::cout << "test5 = "; identify(*test5); std::cout << std::endl;
    
    delete test1;
    delete test2;
    delete test3;
    delete test4;
    delete test5;

    return 0;
}