/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:27:38 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/06 09:27:38 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"
#include <fstream>
#include <iostream>

std::string readFile(const std::string& filename) {
    // Convertir filename a const char* usando .c_str()
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: Could not open the file " << filename << std::endl;
        return "";
    }

    std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    file.close();
    return content;
}

void writeFile(const std::string& filename, const std::string& content) {
    // Convertir filename a const char* usando .c_str()
    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not open the file for writing: " << filename << ".replace" << std::endl;
        return;
    }

    outFile << content;
    outFile.close();
}

