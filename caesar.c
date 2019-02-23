/*Name:Phil
 *Date:
 *Description: Simple Caesar Cipher program
 *Each letter taken as represents a number. a=1, b=2, c=3
 *Currently only viable for lowercase letters
 *Shift key for this example will be (3)
 *Input: Enter (e) for encrypt or (d) for decrypt
 *Output: Will out put to a file the encrypted phrase.
 * */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>




int main(int argc, char const *argv[])
{
	int key = 3;
	char userInput[50];
	char lett1[1];
	char result[50];

	printf("Please enter (e) for encrypt or (d) for decrypt: ");
	scanf("%s", lett1);

	if(lett1 == 'e'){
		printf("Please enter the plaintext you want to encrypt: ");

		//grab plaintext from user to manipulate
		fgets(userInput, sizeof(userInput), stdin);	

		int i=0;

		while(userInput[i] != NULL){

			result += caesarEncrypt(userInput, key)
		}

		printf("The cipher text is: %s\n", result);

	}else if (lett1 == 'd'){

		printf("Please enter the plaintext you want to decrypt: ");
		//grab plaintext from user to manipulate
		fgets(userInput, sizeof(userInput), stdin);

		int i=0;

		while(userInput[i] != NULL){

			result += caesarEncrypt(userInput, key)
		}

		printf("The decryption result is: %s\n", result);
		
	}else{

		printf("Sorry you can only encryp and decrypt.");

	}

	return 0;
}

char caesarEncrypt(char* input, int key){

	int i=0;
	char cyph;
	char cypherInfo;

	while(input != '\0' && input.length()-1 > i){

		//Ascii letters for lowercase start at 97
		//Mod'd by 26 letters in the alphabet
		//Add uppercase letter based on start of uppercase A in ascii
		cypherInfo = ((input[i] + key) - 97) % 26;
		//add 97 back to get correct ascii value
		cypherInfo += 97;

		cyph = (char) cypherInfo;

		i++;
	}

	return cyph;

}

char caesarDecrypt(char* input, int key){
	
	int i=0;
	char cyph;
	char cypherInfo;

	while(input != '\0' && input.length()-1 > i){

		//Ascii letters for lowercase start at 97
		//Mod'd by 26 letters in the alphabet
		//Add uppercase letter based on start of uppercase A in ascii
		//Subtract to do decryption
		cypherInfo = ((input[i] - key) + 97) % 26;
		//subtract 97 back to get correct ascii value
		cypherInfo -= 97;

		cyph = (char) cypherInfo;

		i++;
	}

	return cyph;

}



