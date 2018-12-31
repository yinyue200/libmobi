#pragma once
#include <initializer_list>
class Initls
{
public:
	const std::initializer_list<unsigned>& list;
	constexpr Initls(const std::initializer_list<unsigned>& ls) noexcept :list(ls)  {
	};
};

