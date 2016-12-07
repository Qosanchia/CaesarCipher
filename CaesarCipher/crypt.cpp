/*
 * crypt.cpp
 *
 */

#include <string>


	static std::string LETTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	/*
 	 * crypt
 	 * Takes in a string, outputs a ROT13 version of the string
 	 * Should contain all-caps letters only, Later versions will expand this
 	 *
 	 */

	std::string coreEncrypt(std::string ins) {
		std::string outs = ins;
		//loop

		for (unsigned int i = 0; i < ins.length() ; i++){
			outs[i] =  LETTERS[(int(ins[i]) + int('A') + 13) % 26];
		}

		return outs;
	}
