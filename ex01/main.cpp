/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:52:35 by fmanzana          #+#    #+#             */
/*   Updated: 2023/08/02 18:36:32 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>

int main(void) {
	int		arr[10] = {0,1,2,3,4,5,6,7,8,9};
	char	str[10] = "aBcDeFgHi";

	::iter(arr, 10, &addOne<int>);
	for (int i = 0; i < 10; i++) {
		std::cout << arr[i];
		if (i < 9)
			std::cout << ", ";
	}
	std::cout << std::endl;

	::iter(str, 10,&addOne<char>);
	for (int i = 0; i < 10; i++)
		std::cout << str[i];
	std::cout << std::endl;

	return (0);
}
