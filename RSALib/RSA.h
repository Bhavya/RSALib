#pragma once
#include <stdint.h>
#include <stdlib.h>  

class RSA
{
public:
	RSA();
	virtual ~RSA();

	uint32_t GetPublicKey();
	uint32_t Encrypt(char* cleartext, char*output);
	uint32_t Encrypt(char* cleartext, char*output, uint32_t publickey);
	uint32_t Decrypt(char* ciphertext, char* output);

private:

	uint32_t GCD(uint32_t a, uint32_t b);
	uint32_t ExtendedEuclidean();
	uint32_t GetPrime();
	uint32_t GetRelativePrime(uint32_t basenum);
	uint32_t ModInverse(uint32_t basenum, uint32_t mod);

	void GenerateKeys();

	bool IsPrime(uint32_t num);

	uint32_t p, q, n, phi_n, e, d; 

};

