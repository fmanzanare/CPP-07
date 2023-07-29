/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:44:31 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/29 15:59:16 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T> void addOne(T &x) {
	x++;
}

template <typename T> void iter(T *x, int y, void(*fun)(T &elem)) {
	for (int i = 0; i < y; i++)
		fun(x[i]);
}

#endif
