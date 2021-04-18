//Simple C++ program to encrypt and decrypt a string

#include <iostream>
using namespace std;
#include<iostream>
#include<math.h>
#include "stdafx.h"
using namespace std;

#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//Here is the deeper look at the steps of encryption algorithm :
//1 : Creating Keys
//
//Select two large prime numbers x and y
//Compute n = x * y
//where n is the modulus of private and the public key
//Calculate totient function, ø(n) = (x − 1)(y − 1)
//Choose an integer e such that e is coprime to ø(n) and 1 < e < ø(n).
//e is the public key exponent used for encryption
//Now choose  d, so that d · e mod ø(n) = 1, i.e., >code>d is the multiplicative inverse of e in mod ø(n)
//2: Encrypting Message
//
//Messages are encrypted using the Public key generated and is known to all.
//
//The public key is the function of both e and n i.e. {e, n}.
//
//If M is the message(plain text), then ciphertext
//
//C = M ^ n(mod n)
//3: Decrypting Message
//
//The private key is the function of both d and n i.e{ d, n }.
//
//If C is the encrypted ciphertext, then the plain decrypted text M is
//
//M = C ^ d(mod n)
//You might be wondering how to write a source code for this program.


void Crypto()
{

	int i, x;
	char str[100];



	cout << "Please enter a string:\t";
	cin >> str;

	cout << "\nPlease choose following options:\n";
	cout << "1 = Encrypt the string.\n";
	cout << "2 = Decrypt the string.\n";
	cin >> x;

	//using switch case statements
	switch (x)
	{
		//first case for encrypting a string
	case 1:
		for (i = 0; (i < 100 && str[i] != '\0'); i++)
			str[i] = str[i] + 2; //the key for encryption is 3 that is added to ASCII value

		cout << "\nEncrypted string: " << str << endl;
		break;

		//second case for decrypting a string
	case 2:
		for (i = 0; (i < 100 && str[i] != '\0'); i++)
			str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value

		cout << "\nDecrypted string: " << str << endl;
		break;

	default:
		cout << "\nInvalid Input !!!\n";
	}
	

}