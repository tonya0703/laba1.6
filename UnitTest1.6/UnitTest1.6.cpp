#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1.6/Real.h"
#include "../Project1.6/Real.cpp"
#include "../Project1.6/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16
{
	TEST_CLASS(UnitTest16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Real r;
			r.Init(2);
			float t = r.power(2);
			Assert::AreEqual(4, t, 0);
		}
	};
}
