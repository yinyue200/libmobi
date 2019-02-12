#pragma once
#include <ModernStream.h>
#include "pch.h"
#include <cstdio>

namespace Libmobi
{
	class CFileStream :public Libmobi::ModernStream
	{
	public:
		CFileStream(FILE * const);
		virtual ~CFileStream();
		FILE * const filehandle;
		virtual size_t Read(unsigned char * buff, size_t length);
		virtual void Seek(long pos, SeekOrigin origin);
		virtual int SeekNoThrow(long pos, SeekOrigin origin) noexcept;
		virtual size_t GetPosition();
	};
}


