#pragma once
#include <iostream>

#ifdef _WIN32
#ifdef LEAVER_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif
#else
#define LEAVER_API
#endif

class LEAVER_API Leaver
{
public:
	void leave(std::string name);
};

