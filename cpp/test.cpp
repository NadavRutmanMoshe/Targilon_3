#include <gtest/gtest.h>
#include "math.h"

TEST(AdditionTest, PositiceNumbers){
    EXPECT_EQ(add(1,2),3);
}
int main(int argc, char ** argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}