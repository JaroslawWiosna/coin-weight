//============================================================================
// Name        : 
// Author      : 
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
#include <gtest/gtest.h>

class CoinTest : public ::testing::Test
{

};


TEST_F(CoinTest, bare)
{

}

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
