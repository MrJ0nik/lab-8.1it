﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 8.1it/lab 8.1it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestFindThirdDot)
		{
			
			char str[] = "a.b.c.d.e";  
			Assert::AreEqual(5, find(str));  

		}

		TEST_METHOD(TestChangeEveryFourthCharacter)
		{
			
			char str[] = "abcdefghi";  
			char expected1[] = "abc.efg.i";
			Assert::AreEqual(expected1, change(str)); 


		}
	};
}
