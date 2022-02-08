#include "pch.h"
#include "CppUnitTest.h"
#include "Bank.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BankAccount
{
	TEST_CLASS(BankAccount)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Bank* b1 = new Bank(0);
			b1->deposit(50);
		
		}
	};
}
