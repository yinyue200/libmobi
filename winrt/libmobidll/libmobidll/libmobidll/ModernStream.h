#pragma once

namespace Libmobi {
	enum SeekOrigin
	{
		Begin,
		Current,
		End
	};
	class __declspec(dllexport) ModernStream
	{
	public:
		virtual size_t Read(unsigned char * buff, size_t length)=0;
		virtual void Seek(long pos,SeekOrigin origin)=0;
		virtual int SeekNoThrow(long pos, SeekOrigin origin) noexcept=0;
		virtual size_t GetPosition()=0;
		ModernStream();
		virtual ~ModernStream();
	};
}


