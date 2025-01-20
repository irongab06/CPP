/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:21:06 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/20 16:04:59 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <string>
#include <iostream>

template <typename A, typename L, typename F>
void	iter(A add, L size, F f) { for (L i = 0; i < size; i++)f(add[i]); }
template <typename T>
void	fonct(T add) { std::cout << add << std::endl; }

#endif
