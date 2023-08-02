/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:37:55 by fmanzana          #+#    #+#             */
/*   Updated: 2023/08/02 11:40:09 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void) {
	Array<int> a = Array<int>();

	std::cout << "a size: " << a.size() << std::endl;
	try {
		std::cout << a[2] << std::endl;
	} catch (std::out_of_range &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	Array<int> b(25);

	b[0] = 1;
	std::cout << "b[0]: " << b[0] << std::endl;

	a = b;
	a[0] = 2;
	std::cout << "b[0] (after -a- assgination): " << b[0] << std::endl;
	std::cout << "a[0]: " << a[0] << std::endl;

	std::cout << "b size: " << b.size() << std::endl;
	std::cout << "a (after assignation) size: " << a.size() << std::endl;

	return (0);
}
