/*
 * crypt.cpp
 *
 */

#include <string>


	static std::string LETTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	/*
 	 * coreEncrypt (std::string)
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

	/*
	 * std::string coreEncrypt (std::string,int)
	 * Takes an input string and an input integer, and computes the Caesar
	 * Cipher of the input string, using the integer as a rotation key
	 *
	 * Inputs :
	 * string - this is expected to be all uppercase letters
	 * int  - this can be any integer (do negatives work?)
	 *
	 * Returns:
	 * string - The Caesar Cipher of the input string, rotated by int places
	 */
	std::string coreEncrypt(std::string ins, int key) {
		std::string outs = ins;

		for (unsigned int i = 0; i < ins.length() ; i++){
					outs[i] =  LETTERS[(int(ins[i]) + int('A') + key) % 26];
				}

		return outs;
	}

	/*
	 * string cleanInputs (string in)
	 *
	 * Modifies an input string so that it can be used in other functions
	 * Default behavior is to
	 */
	std::string cleanInputs(std::string ins) {
		std::string output;

		return output;
	}

	/*
	 * string enchancedEncrypt (String Ins, int rot)
	 *
	 * Encrypts a string using a Caesar Cipher, but based on the full span of
	 * the ASCII table, from [Space] through ~
	 *
	 * ins - an input string of printable ASCII characters
	 * rot  -a integer rotation value, to determine how far to turn the input
	 *
	 */
	std::string enhancedEncrypt(std::string ins, int rot) {
		std:: string out = ins;

		for (int i = 0; i < out.length; i++) {
			int val = int(ins[i]);
			out[i] = (val - int(' ')) + (rot % (1));
		}

		return out;
	}
