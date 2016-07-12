#include "gtest/gtest.h"

#include "../Matrix.h"

class MatrixSuite : public ::testing::Test {
public:
    MatrixSuite() : A(3), B(3) { }
protected:
    virtual void SetUp() {
            A.setValue(1, 0, 0);
            A.setValue(2, 0, 1);
            A.setValue(3, 0, 2);
            A.setValue(4, 1, 0);
            A.setValue(5, 1, 1);
            A.setValue(6, 1, 2);
            A.setValue(7, 2, 0);
            A.setValue(8, 2, 1);
            A.setValue(9, 2, 2);

            B.setValue(11, 0, 0);
            B.setValue(12, 0, 1);
            B.setValue(13, 0, 2);
            B.setValue(14, 1, 0);
            B.setValue(15, 1, 1);
            B.setValue(16, 1, 2);
            B.setValue(17, 2, 0);
            B.setValue(18, 2, 1);
            B.setValue(19, 2, 2);
    }

    Matrix<int> A;
    Matrix<int> B;

};


TEST_F(MatrixSuite, OperatorSum) {
        Matrix<int> sum(3);
        sum.setValue(12, 0, 0);
        sum.setValue(14, 0, 1);
        sum.setValue(16, 0, 2);
        sum.setValue(18, 1, 0);
        sum.setValue(20, 1, 1);
        sum.setValue(22, 1, 2);
        sum.setValue(24, 2, 0);
        sum.setValue(26, 2, 1);
        sum.setValue(28, 2, 2);

        ASSERT_EQ(sum, A + B);
}

TEST_F(MatrixSuite, OperatorSumInvalid) {
        Matrix<int> sum(4);
        ASSERT_THROW(A + sum, std::logic_error);
}

TEST_F(MatrixSuite, OperatorSub) {
        Matrix<int> sub(3);
        sub.setValue(-10, 0, 0);
        sub.setValue(-10, 0, 1);
        sub.setValue(-10, 0, 2);
        sub.setValue(-10, 1, 0);
        sub.setValue(-10, 1, 1);
        sub.setValue(-10, 1, 2);
        sub.setValue(-10, 2, 0);
        sub.setValue(-10, 2, 1);
        sub.setValue(-10, 2, 2);

        ASSERT_EQ(sub, A - B);
}

TEST_F(MatrixSuite, OperatorSubInvalid) {
        Matrix<int> sub(4);
        ASSERT_THROW(A - sub, std::logic_error);
}

TEST_F(MatrixSuite, OperatorMul) {
        Matrix<int> mul(3);
        mul.setValue(90, 0, 0);
        mul.setValue(96, 0, 1);
        mul.setValue(102, 0, 2);
        mul.setValue(216, 1, 0);
        mul.setValue(231, 1, 1);
        mul.setValue(246, 1, 2);
        mul.setValue(342, 2, 0);
        mul.setValue(366, 2, 1);
        mul.setValue(390, 2, 2);

        ASSERT_EQ(mul, A * B);
}

TEST_F(MatrixSuite, OperatorMulInvalid) {
        Matrix<int> mul(4);
        ASSERT_THROW(A * mul, std::logic_error);
}

TEST_F(MatrixSuite, OperatorDiv) {
        Matrix<int> mul(3);
        mul.setValue(1, 0, 0);
        mul.setValue(0, 0, 1);
        mul.setValue(0, 0, 2);
        mul.setValue(0, 1, 0);
        mul.setValue(1, 1, 1);
        mul.setValue(0, 1, 2);
        mul.setValue(0, 2, 0);
        mul.setValue(0, 2, 1);
        mul.setValue(1, 2, 2);

        ASSERT_EQ(mul, A / A);
}

TEST_F(MatrixSuite, OperatorIntPow) {
        Matrix<int> mul(3);
        mul.setValue(468, 0, 0);
        mul.setValue(576, 0, 1);
        mul.setValue(684, 0, 2);
        mul.setValue(1062, 1, 0);
        mul.setValue(1305, 1, 1);
        mul.setValue(1548, 1, 2);
        mul.setValue(1656, 2, 0);
        mul.setValue(2034, 2, 1);
        mul.setValue(2412, 2, 2);
        ASSERT_EQ(mul, A ^ 3);
}

TEST_F(MatrixSuite, OperatorBinarySum) {
        Matrix<int> sum(3);
        sum.setValue(12, 0, 0);
        sum.setValue(14, 0, 1);
        sum.setValue(16, 0, 2);
        sum.setValue(18, 1, 0);
        sum.setValue(20, 1, 1);
        sum.setValue(22, 1, 2);
        sum.setValue(24, 2, 0);
        sum.setValue(26, 2, 1);
        sum.setValue(28, 2, 2);

        ASSERT_EQ(sum, A += B);
}

TEST_F(MatrixSuite, OperatorBinarySub) {
        Matrix<int> sub(3);
        sub.setValue(-10, 0, 0);
        sub.setValue(-10, 0, 1);
        sub.setValue(-10, 0, 2);
        sub.setValue(-10, 1, 0);
        sub.setValue(-10, 1, 1);
        sub.setValue(-10, 1, 2);
        sub.setValue(-10, 2, 0);
        sub.setValue(-10, 2, 1);
        sub.setValue(-10, 2, 2);

        ASSERT_EQ(sub, A -= B);
}

TEST_F(MatrixSuite, OperatorBinaryMul) {
        Matrix<int> mul(3);
        mul.setValue(90, 0, 0);
        mul.setValue(96, 0, 1);
        mul.setValue(102, 0, 2);
        mul.setValue(216, 1, 0);
        mul.setValue(231, 1, 1);
        mul.setValue(246, 1, 2);
        mul.setValue(342, 2, 0);
        mul.setValue(366, 2, 1);
        mul.setValue(390, 2, 2);

        ASSERT_EQ(mul, A *= B);
}

TEST_F(MatrixSuite, OperatorBinaryDiv) {
        Matrix<int> mul(3);
        mul.setValue(1, 0, 0);
        mul.setValue(0, 0, 1);
        mul.setValue(0, 0, 2);
        mul.setValue(0, 1, 0);
        mul.setValue(1, 1, 1);
        mul.setValue(0, 1, 2);
        mul.setValue(0, 2, 0);
        mul.setValue(0, 2, 1);
        mul.setValue(1, 2, 2);

        ASSERT_EQ(mul, A /= A);
}