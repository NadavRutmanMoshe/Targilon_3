#include <gtest/gtest.h>

int add(int a, int b) {
    return a + b;
}

TEST(AdditionTest, PositiceNumbers){
    EXPECT_EQ(add(1,2),3);
}
int main(int argc, char ** rgv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}