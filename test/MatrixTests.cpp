#include "gtest/gtest.h"

#include "../Matrix.h"

TEST(Matrix, ConstructorRowColumns) {
    Matrix<int> m(3, 4);

    ASSERT_EQ(3, m.getRows());
    ASSERT_EQ(4, m.getColumns());
}
