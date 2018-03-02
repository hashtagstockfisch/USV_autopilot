#include "gtest/gtest.h"
#include "../Header/DummyClass.h"

namespace {
	class DummyTest : public ::testing::Test {
	protected:
		DummyClass _uut;
	};
	TEST_F(DummyTest, TestingDummyReturningThree) {
		ASSERT_EQ(3, _uut.ReturnThree());
	}
}
