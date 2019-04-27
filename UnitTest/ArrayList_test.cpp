#include "../Util/ArrayList.cpp"
#include <gtest/gtest.h>
 
TEST(adicionarTest, PositiveNos) 
{ 
    ASSERT_EQ(6, adicionarTest(36.0));
    ASSERT_EQ(18.0, adicionarTest(324.0));
    ASSERT_EQ(25.4, adicionarTest(645.16));
    ASSERT_EQ(0, adicionarTest(0.0));
}
 
TEST(SquareRootTest, NegativeNos) 
{
    ASSERT_EQ(-1.0, adicionarTest(-15.0));
    ASSERT_EQ(-1.0, adicionarTest(-0.2));
}
 
int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
