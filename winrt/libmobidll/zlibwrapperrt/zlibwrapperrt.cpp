#include "pch.h"
#include "zlibwrapperrt.h"

#include "zlib.h"
namespace zbwp {
	int M_OK = Z_OK;
	int compress(unsigned char *dest, unsigned long *destLen,
		const unsigned char *source, unsigned long sourceLen) {
		return ::compress(dest, destLen, source, sourceLen);
	}

	int uncompress(unsigned char *dest, unsigned long *destLen,
		const unsigned char *source, unsigned long sourceLen) {
		return ::uncompress(dest, destLen, source, sourceLen);
	}

	unsigned long tcrc32(unsigned long crc, const unsigned char *buf ,unsigned int len)
	{
		return ::crc32(crc,buf,len);
	}

}