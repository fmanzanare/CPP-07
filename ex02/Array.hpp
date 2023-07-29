/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:18:05 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/29 16:57:53 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T> class Array {
	private:
		T *_arr;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &cp);
		Array &operator=(const Array &cp);
		T &operator[](int idx);
		unsigned int getSize(void);
};

template <typename T> Array<T>::Array() {
	this->_arr = new T[0];
	this->_size = 0;
}

template <typename T> Array<T>::Array(unsigned int n) {
	this->_arr = new T[n];
	this->_size = n;
}

template <typename T> Array<T>::~Array() {
	delete[] this->_arr;
}

template <typename T> Array<T>::Array(const Array &cp) {
	this->_size = cp._size;
	this->_arr = new T[this->_size];
	for (int i = 0; i < (int)this->_size; i++) {
		this->_arr[i] = cp._arr[i];
	}
}

template <typename T> Array<T> &Array<T>::operator=(const Array &cp) {
	delete[] this->_arr;
	this->_size = cp._size;
	this->_arr = new T[this->_size];
	for (int i = 0; i < (int)this->_size; i++) {
		this->_arr[i] = cp._arr[i];
	}
	return (*this);
}

template <typename T> T &Array<T>::operator[](int idx) {
	if (idx > ((int)this->_size - 1) || idx < 0)
		throw std::out_of_range("Index is out of range!");
	else
		return (this->_arr[idx]);
}

template <typename T> unsigned int Array<T>::getSize(void) {
	return (this->_size);
}

#endif
