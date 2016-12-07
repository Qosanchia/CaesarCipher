/*
 * test.cpp
 *
 *  Created on: Dec 6, 2016
 *      Author: Qosanchia
 *
 *      Contains test cases for the Caesar Cipher project
 */
#include <string>
#include <iostream>

std::string coreEncrypt(std::string input);

int main () {


	std::cout << "Input : Test\n";
	std::cout << "Output: ";
	std::cout << coreEncrypt("TEST");
	std::cout << "\n Decrypted:";
	std::cout << coreEncrypt(coreEncrypt("TEST"));
	return 0;
}

