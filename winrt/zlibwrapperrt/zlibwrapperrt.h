#pragma once
namespace zbwp {
	extern int M_OK;
	int compress(unsigned char *dest, unsigned long *destLen,
		const unsigned char *source, unsigned long sourceLen);

	int uncompress(unsigned char *dest, unsigned long *destLen,
		const unsigned char *source, unsigned long sourceLen);
	unsigned long tcrc32(unsigned long crc, const unsigned char *buf, unsigned int len);

}