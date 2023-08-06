/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:01:05 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/06 11:16:52 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

/*Foncteur grace a la redefinition de l'operateur () qui va faire agir comme une fonction*/
// struct Print
// {
// 	Print(int y): _y(y){};
// 	void operator()(int& x)
// 	{
// 		_y++;
// 		std::cout << x << std::endl;
// 		std::cout << _y << std::endl;
// 	}

// 	private:
// 		int _y;
// };

void	fct(int & elem)/*Envoie de reference pour que la valeur soit mdifier et aps seulement copier*/
{
	elem++;
}

void	fct2(int & elem)
{
	std::cout << elem << std::endl;
}

int main( void )
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//iter(tab, 10, fct);
	iter(tab, 10, fct);
	iter(tab, 10, fct2);
}