#include "gtest/gtest.h"

#include "../Matrix.h"

TEST(Matrix, ConstructorRowColumns) {
    Matrix<int> m(3, 4);

    ASSERT_EQ(3, m.getRows());
    ASSERT_EQ(4, m.getColumns());
}

// TEST SQUARE CONSTRUCTOR AND SIZE FUNCTION
TEST(Matrix, ConstructorSquare) {
    Matrix<int> m(3);

    ASSERT_EQ(3, m.size().first);
    ASSERT_EQ(3, m.size().second);
}


