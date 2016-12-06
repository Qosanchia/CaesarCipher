/*
 * crypt.cpp
 *
 *  Created on: Dec 5, 2016
 *      Author: Qosanchia
 *
 *      Core functions for implementing the Caesar Cipher
 */
#include <iostream>
#include <string>
#include <cstdlib>

static char* LETTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

/*
 * crypt
 * Takes in a string, outputs a ROT13 version of the string
 * Should contain all-caps letters only, Later versions will expand this
 *
 */

std::string crypt(std::string ins) {
	std::string outs;
	//loop
	for (int i = 0; i<outs.length();i++){
		outs[i] =  LETTERS[(int(ins[i]) + 13) % 26];
	}

	return outs;
}
