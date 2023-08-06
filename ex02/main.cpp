/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 12:26:47 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/06 13:29:24 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// int main()
// {
// 	Array<int>	test(4);
// 	std::cout << test.size() << std::endl;
// 	try
// 	{
// 		for(int i = 0; i < 4; i++)
// 			test[i] = i;
// 		for(int i = 0; i < 8; i++)
// 			std::cout << test[i] << std::endl;
// 	}
// 	catch (std::exception const& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	return (1);
// }

int main()
{
	Array<char>	test(4);
	std::cout << test.size() << std::endl;
	try
	{
		for(int i = 0; i < 4; i++)
			test[i] = i + 68;
		for(int i = 0; i < 8; i++)
			std::cout << test[i] << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (1);
}