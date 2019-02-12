#include "pch.h"
#include "CFileStream.h"


size_t Libmobi::CFileStream::Read(unsigned char * buff, size_t length)
{
	return fread(buff, 1, length, this->filehandle);
}

void Libmobi::CFileStream::Seek(long pos, SeekOrigin origin)
{
	SeekNoThrow(pos, origin);
}

int Libmobi::CFileStream::SeekNoThrow(long pos, SeekOrigin origin) noexcept
{
	switch (origin)
	{
	default:
	case Libmobi::Begin:
		return fseek(filehandle, pos, SEEK_SET);
	case Libmobi::Current:
		return fseek(filehandle, pos, SEEK_CUR);
	case Libmobi::End:
		return fseek(filehandle, pos, SEEK_END);
	}
}

size_t Libmobi::CFileStream::GetPosition()
{
	return ftell(filehandle);
}



Libmobi::CFileStream::CFileStream(FILE *const file):filehandle(file)
{
}

Libmobi::CFileStream::~CFileStream()
{
}
