#include "gtest/gtest.h"

#include "../Matrix.h"
#include "../math_exception.h"
#include "../index_exception.h"

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

TEST_F(MatrixSuite, Row) {
        Matrix<int> r(1, 3);
        r.setValue(1, 0, 0);
        r.setValue(2, 0, 1);
        r.setValue(3, 0, 2);

        Matrix<int> row = A.Row(0);

        ASSERT_EQ(row.getRows(), 1);
        ASSERT_EQ(row.getColumns(), 3);
        ASSERT_EQ(row, r);
}

TEST_F(MatrixSuite, Column) {
        Matrix<int> r(3, 1);
        r.setValue(1, 0, 0);
        r.setValue(4, 1, 0);
        r.setValue(7, 2, 0);

        Matrix<int> column = A.Column(0);

        ASSERT_EQ(column.getRows(), 3);
        ASSERT_EQ(column.getColumns(), 1);
        ASSERT_EQ(column, r);
}

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

        Matrix<int> somma = A + B;

        ASSERT_EQ(sum, somma);
}

TEST_F(MatrixSuite, OperatorSumInvalid) {
        Matrix<int> sum(4);
        ASSERT_THROW(A + sum, math_exception);
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
        ASSERT_THROW(A - sub, math_exception);
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

        Matrix<int> m = A * B;

        ASSERT_EQ(mul, m);
}

TEST_F(MatrixSuite, OperatorMulInvalid) {
        Matrix<int> mul(4);
        ASSERT_THROW((A * mul), math_exception);
}

TEST_F(MatrixSuite, OperatorDiv) {
        Matrix<int> C(3);
        C.setValue(2, 0, 0);
        C.setValue(4, 0, 1);
        C.setValue(6, 0, 2);
        C.setValue(8, 1, 0);
        C.setValue(10, 1, 1);
        C.setValue(12, 1, 2);
        C.setValue(14, 2, 0);
        C.setValue(16, 2, 1);
        C.setValue(18, 2, 2);

        Matrix<int> mul(3);
        mul.setValue(1, 0, 0);
        mul.setValue(2, 0, 1);
        mul.setValue(3, 0, 2);
        mul.setValue(4, 1, 0);
        mul.setValue(5, 1, 1);
        mul.setValue(6, 1, 2);
        mul.setValue(7, 2, 0);
        mul.setValue(8, 2, 1);
        mul.setValue(9, 2, 2);

        ASSERT_EQ(mul, C / 2);
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

        Matrix<int> pow = A ^ 3;

        ASSERT_EQ(mul, pow);
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

TEST_F(MatrixSuite, OperatorBinarySumInvalid) {
        Matrix<int> sum(4);
        ASSERT_THROW(A += sum, math_exception);
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

TEST_F(MatrixSuite, OperatorBinarySubInvalid) {
        Matrix<int> sub(4);
        ASSERT_THROW(A -= sub, math_exception);
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

TEST_F(MatrixSuite, OperatorBinaryMulInvalid) {
        Matrix<int> mul(4);
        ASSERT_THROW(A *= mul, math_exception);
}

TEST_F(MatrixSuite, Determinant) {
        Matrix<float> C(3);
        C.setValue(1., 0, 0);
        C.setValue(3., 0, 1);
        C.setValue(5., 0, 2);
        C.setValue(7., 1, 0);
        C.setValue(8., 1, 1);
        C.setValue(9., 1, 2);
        C.setValue(11., 2, 0);
        C.setValue(2., 2, 1);
        C.setValue(14., 2, 2);

        ASSERT_EQ(C.det(), -273);
}

TEST_F(MatrixSuite, DeterminantException) {
        Matrix<int> C(2, 3);

        ASSERT_THROW(C.det(), math_exception);
}

TEST_F(MatrixSuite, Reduced) {
        Matrix<float> C(3);
        C.setValue(1, 0, 0);
        C.setValue(3, 0, 1);
        C.setValue(5, 0, 2);
        C.setValue(7, 1, 0);
        C.setValue(8, 1, 1);
        C.setValue(9, 1, 2);
        C.setValue(11, 2, 0);
        C.setValue(2, 2, 1);
        C.setValue(14, 2, 2);

        Matrix<float> reduced(3);
        reduced.setValue(1, 0, 0);
        reduced.setValue(3, 0, 1);
        reduced.setValue(5, 0, 2);
        reduced.setValue(0, 1, 0);
        reduced.setValue(-13, 1, 1);
        reduced.setValue(-26, 1, 2);
        reduced.setValue(0, 2, 0);
        reduced.setValue(0, 2, 1);
        reduced.setValue(21, 2, 2);

        ASSERT_EQ(C.reduced(), reduced);
}

TEST_F(MatrixSuite, ReducedException) {
        Matrix<int> C(3);
        C.setValue(1, 0, 0);
        C.setValue(2, 0, 1);
        C.setValue(3, 0, 2);
        C.setValue(1, 1, 0);
        C.setValue(2, 1, 1);
        C.setValue(3, 1, 2);
        C.setValue(1, 2, 0);
        C.setValue(4, 2, 1);
        C.setValue(3, 2, 2);
        ASSERT_THROW(C.reduced(), math_exception);
}

TEST_F(MatrixSuite, Transpose) {
        Matrix<int> C(3);
        C.setValue(1, 0, 0);
        C.setValue(4, 0, 1);
        C.setValue(7, 0, 2);
        C.setValue(2, 1, 0);
        C.setValue(5, 1, 1);
        C.setValue(8, 1, 2);
        C.setValue(3, 2, 0);
        C.setValue(6, 2, 1);
        C.setValue(9, 2, 2);

        ASSERT_EQ(A.transpose(), C);
}

TEST_F(MatrixSuite, NotEqual) {
        ASSERT_TRUE(A != B);
        ASSERT_FALSE(A == B);
}

TEST_F(MatrixSuite, Max) {
        ASSERT_EQ(A.max(), 9);
        ASSERT_EQ(B.max(), 19);
}

TEST_F(MatrixSuite, Min) {
        ASSERT_EQ(A.min(), 1);
        ASSERT_EQ(B.min(), 11);
}

TEST_F(MatrixSuite, Rank) {
        ASSERT_EQ(A.rank(), 2);
        ASSERT_EQ(B.rank(), 2);

        Matrix<int> C(3);
        C.setValue(1, 0, 0);
        C.setValue(3, 0, 1);
        C.setValue(5, 0, 2);
        C.setValue(7, 1, 0);
        C.setValue(8, 1, 1);
        C.setValue(9, 1, 2);
        C.setValue(11, 2, 0);
        C.setValue(2, 2, 1);
        C.setValue(14, 2, 2);
        ASSERT_EQ(C.rank(), 3);

}