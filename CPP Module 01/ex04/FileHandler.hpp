/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:17:14 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/06 09:17:14 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

#include <string>

std::string readFile(const std::string& filename);
void writeFile(const std::string& filename, const std::string& content);

#endif
