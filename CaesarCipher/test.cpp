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
std::string coreEncrypt(std::string input, int n);

int main () {

std:: string input = "TEST";
int key = 10;
	std::cout << "Test 1, ROT13 default behavior" << "\n";
	std::cout << "Input: " << input << "\n";
	std::cout << "Output: " << coreEncrypt(input);
	std::cout << "\nDecrypted:" << coreEncrypt(coreEncrypt(input));

	std::cout << "\nTest 2, arbitrary key" << "\n";
	std::cout << "Input: " << input << " key = " << key << "\n";
	std::cout << "Output: " << coreEncrypt(input,key) << "\n";
	std::cout << "Decryption: " << coreEncrypt(coreEncrypt(input,key), 26-key);
	return 0;
}

