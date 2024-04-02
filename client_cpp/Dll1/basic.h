#pragma once

#ifdef CPP_DLL_EXPORTS
#define CPP_DLL_API __declspec(dllexport)
#else
#define CPP_DLL_API __declspec(dllimport)
#endif

#include <iostream>

namespace Basic
{
	class CPP_DLL_API Units
	{
	public:
		static int Add(int a, int b);
		static void PrintHelloWorld();
		/*static int Add£ß2(int a, int b);
		static void PrintHelloWorld£ß2();*/
	};
}

