/*Name:Phil
 *Date:
 *Description: Simple Caesar Cipher program
 *Each letter taken as represents a number. a=1, b=2, c=3
 *Currently only viable for lowercase letters
 *Shift key for this example will be (3)
 *Input: Enter (e) for encrypt or (d) for decrypt
 *Output: Will out put to a file the encrypted phrase.

 *Design for implementation taken from http://practicalcryptography.com/ciphers/
 * 
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char caesarEncrypt(char* input, int key);

int main(int argc, char const *argv[])
{
	int key = 3;
	char userInput[100];
	char var;
	char result;
   
	printf("Please enter (e) for encrypt or (d) for decrypt: ");
	
   scanf(" %c", &var);
	if(var == 'e'){
		printf("Please enter the plaintext you want to encrypt: ");
 

		int i=0;

     //printf("Here : %s.n", userInput); 
	 //grab plaintext from user to manipulate
	  while(fgets(userInput, sizeof(userInput), stdin) != '\n'){
         /*size_t len = strlen(buffer);
         if (len > 0 && buffer[len-1] == '\n') {
            buffer[--len] = '\0';
         }*/
			result += caesarEncrypt(userInput, key);

      
		}

		//printf("The cipher text is: %s\n", result);

	}/*else if (lett1 == 'd'){

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
*/
	return 0;
}

char caesarEncrypt(char* input, int key){

	int i=0;
	char cyph;
	char cypherInfo;

	while(input != '\0' && strlen(input)-1 > i){

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
   printf("Here is the %c\n", cyph);
}

char caesarDecrypt(char* input, int key){
	
	int i=0;
	char cyph;
	char cypherInfo;

	while(input != '\0' && strlen(input)-1 > i){

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



