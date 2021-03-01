#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1.3/Money.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{ 
			Money z;

			
			bool k=1;
			k = z.getk500(); 
			Assert::AreEqual(k, true);
		}
	};
}
