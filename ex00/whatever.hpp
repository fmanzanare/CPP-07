/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:44:05 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/28 18:54:56 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T> void swap(T &x, T &y) {
	T	aux;

	aux = x;
	x = y;
	y = aux;
}

template <typename T> T &max(T &x, T &y) {
	if (x > y)
		return (x);
	else
		return (y);
}

template <typename T> T &min (T &x, T &y) {
	if (x < y)
		return (x);
	else
		return (y);
}

#endif
