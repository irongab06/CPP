/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:21:02 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/20 16:07:40 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	std::cout << "--------------------test with string-------------------" << std::endl;
	std::string	add[3] = {"hi", "my", "corrector"};
	int	size = 3;
	iter(add, size, fonct<std::string>);
	std::cout << "--------------------test with int-------------------" << std::endl;
	int	i[3] = {1, 2, 3};
	size_t s = 3;
	iter(i, s, fonct<int>);
	std::cout << "--------------------test with float-------------------" << std::endl;
	float	fl[3] = {1.10f , 2.10f, 3.10f};
	unsigned int ui = 3;
	iter(fl, ui, fonct<float>);
}
