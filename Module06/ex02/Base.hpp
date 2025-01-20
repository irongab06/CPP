/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:23:09 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/20 13:23:10 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include <cstdlib>

class Base
{
	public:
		virtual ~Base();
	private:
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif