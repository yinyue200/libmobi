#include "pch.h"
#include "ModernStream.h"
#include <string>
using namespace Libmobi;
size_t ModernStream::Read(unsigned char * buff, size_t length) {
	return 0;
}
void ModernStream::Seek(long pos, SeekOrigin origin) {

}
int ModernStream::SeekNoThrow(long pos, SeekOrigin origin) noexcept {
	return 0;
}
size_t ModernStream::GetPosition() {
	return 0;
}
ModernStream::ModernStream()
{
}


ModernStream::~ModernStream()
{
}
