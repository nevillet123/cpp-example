#include <gtest/gtest.h>
#include "../Example.hpp"

class ExampleTests : public ::testing::Test {
    public:
    ExampleTests(){};

    void SetUp( ) { 
       // code here will execute just before each TEST_F 
    }

   void TearDown( ) { 
       // code here will be called just after each TEST_F
   }

};

TEST_F(ExampleTests, isTrue_shouldBeFalse){
  Example aExample("false");
  EXPECT_FALSE(aExample.isTrue());
}

TEST_F(ExampleTests, isTrue_shouldBeTrue){
  Example aExample("true");
  EXPECT_TRUE(aExample.isTrue());
}