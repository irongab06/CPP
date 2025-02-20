/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:03:27 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 09:03:29 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

bool	create_file_and_open(std::string filename);
void	find_and_replace(const std::string& filename, std::ifstream& in_file,
			const std::string& s1, const std::string& s2);

#endif