/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:37:15 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/05 18:02:00 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T, typename F>
void	iter(T *addr, int taille, F fct)
{
	for(int i = 0; i < taille; i++)
		fct(addr[i]);
}

#endif