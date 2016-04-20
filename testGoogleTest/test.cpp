/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <gtest/gtest.h>
#include "MyStack.h"

TEST(StackTest,testPop){
    MyStack st;
    st.push(8);
    EXPECT_EQ(8, st.pop());
}

TEST(StackTest, testAll){
    MyStack st;
    st.push(5);
    st.push(25);
    
    int retval=st.pop();
    
    EXPECT_EQ(25, retval);  //SHOULD BE 25
    EXPECT_NE(0, retval);
    EXPECT_GT(26, retval);
    EXPECT_LT(24, retval);
    EXPECT_TRUE(retval==25)<<"return val somehow is not equal to 25";   //SHOULD BE ==25
}