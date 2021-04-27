#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.1C/Money.cpp"
#include "../Project5.1C/MyException.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51C
{
	TEST_CLASS(UnitTest51C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money a(0,0,0,0,0,0,0,0,0,0,0);
			bool k = a.getk500();
			Assert::AreEqual(k, false);
		}
	};
}
