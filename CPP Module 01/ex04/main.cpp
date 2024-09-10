/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:28:34 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/06 09:28:34 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"
#include "StringReplacer.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty.\n";
        return 1;
    }

    std::string content = readFile(filename);
    if (content.empty()) {
        std::cerr << "Error: Could not read file or file is empty.\n";
        return 1;
    }

    std::string modifiedContent = replaceAll(content, s1, s2);
    writeFile(filename, modifiedContent);

    return 0;
}
