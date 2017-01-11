#include "RSA.h"



RSA::RSA()
{
	GenerateKeys();
}


RSA::~RSA()
{
}

uint32_t RSA::GetPublicKey()
{
	return e;
}

uint32_t RSA::Encrypt(char * cleartext, char * output)
{
	return uint32_t();
}

uint32_t RSA::Encrypt(char * cleartext, char * output, uint32_t publickey)
{
	return uint32_t();
}

uint32_t RSA::Decrypt(char * ciphertext, char * output)
{
	return uint32_t();
}

uint32_t RSA::GCD(uint32_t a, uint32_t b)
{
	return uint32_t();
}

uint32_t RSA::ExtendedEuclidean()
{
	return uint32_t();
}

uint32_t RSA::GetPrime()
{
	uint32_t num;

	while (1) {
		num = rand();
		if (IsPrime(num))
			break;
	}

	return num;
}

uint32_t RSA::GetRelativePrime(uint32_t basenum)
{
	return uint32_t();
}

uint32_t RSA::ModInverse(uint32_t basenum, uint32_t mod)
{
	return uint32_t();
}

void RSA::GenerateKeys()
{
	p = GetPrime();
	q = GetPrime();

	n = p*q;
	phi_n = (p - 1)*(q - 1);

	e = GetRelativePrime(phi_n);

	d = ModInverse(e, phi_n);

	return;
}

bool RSA::IsPrime(uint32_t num)
{
	return false;
}

