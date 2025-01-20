/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:21:17 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/20 16:03:52 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <string>
#include <iostream>

template <typename T>
void		swap(T &x, T &y) { T	tmp = x; x = y; y = tmp; }
template <typename T>
T const&	min(T const &x, T const &y) {return (x < y ? x : y); }
template <typename T>
T const&	max(T const &x, T const &y) {return (x > y ? x : y); }

#endif
