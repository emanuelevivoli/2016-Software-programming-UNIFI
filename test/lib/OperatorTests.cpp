#include "gtest/gtest.h"

#include "../../Matrix.h"


class MatrixSuite : public ::testing::Test, protected Matrix{
public:
    MatrixSuite() : Matrix(3) { }
protected:
    virtual void SetUp() {
        A = new Matrix<int>(3);
        B = new Matrix<int>(3);
        sum = new Matrix<int>(3);
        sub = new Matrix<int>(3);
        mul = new Matrix<int>(3);
        div = new Matrix<int>(3);
        int_pow = new Matrix<int>(3);
        binary_sum = new Matrix<int>(3);
        binary_mul = new Matrix<int>(3);
        binary_sub = new Matrix<int>(3);
        binary_div = new Matrix<int>(3);
        binary_int_pow = new Matrix<int>(3);

        int l = (A->getColumns()*A->getRows());
        for(int i=0; i< l; ++i)
            A->ptr[i]= i;

        l=(B->getColumns()*B->getRows());
        for(int i=0; i< l; ++i)
            B->ptr[i]= l-i;

        // CREATING MATRIX SUM = A + B
        l = (sum->getColumns()*sum->getRows());
        for(int i=0; i< l; ++i)
            sum->ptr[i]= l;

        // CREATING MATRIX SUB = A - B
        l=(sub->getColumns()*sub->getRows());
        for(int i=0; i< l; ++i)
            sub->ptr[i]= 2*i-l;

        // CREATING MATRIX MUL = A * B
        mul[0]=9;
        mul[1]=6;
        mul[2]=3;
        mul[3]=54;
        mul[4]=42;
        mul[5]=30;
        mul[6]=99;
        mul[7]=78;
        mul[8]=57;

        //CREATING MATRIV DIV = A / B
        /*
         *  div = nulptr if matrix is "Singular matrix"
         */

        //CREATING MATRIX INT_POW = A^3
        int_pow[0]=180;
        int_pow[1]=234;
        int_pow[2]=288;
        int_pow[3]=558;
        int_pow[4]=720;
        int_pow[5]=882;
        int_pow[6]=936;
        int_pow[7]=1206;
        int_pow[8]=1476;

        //CREATING MATRIX BINARY_SUM -> A += B
        *binary_sum = *sum;

        //CREATING MATRIX BINARY_MUL -> A *= B
        *binary_mul = *mul;

        //CREATING MATRIX BINARY_SUB -> A -= B
        *binary_sub = *sub;

        //CREATING MATRIX BINARY_DIV -> A /= B
        *binary_div = *div;

        //CREATING MATRIX BINARY_INT_POW -> A ^= 3
        *binary_int_pow = *int_pow;

    }

    Matrix<int>* A;
    Matrix<int>* B;
    Matrix<int>* sum;
    Matrix<int>* sub;
    Matrix<int>* mul;
    Matrix<int>* div;
    Matrix<int>* int_pow;
    Matrix<int>* binary_sum;
    Matrix<int>* binary_mul;
    Matrix<int>* binary_sub;
    Matrix<int>* binary_div;
    Matrix<int>* binary_int_pow;

};


TEST_F(MatrixSuite, OperatorSum) {
        ASSERT_EQ((*sum), (*A) + (*B));
}

TEST_F(MatrixSuite, OperatorSub) {
        ASSERT_EQ((*sub), (*A) - (*B));
}

TEST_F(MatrixSuite, OperatorMul) {
        ASSERT_EQ((*mul), (*A) * (*B));
}

TEST_F(MatrixSuite, OperatorDiv) {
        ASSERT_EQ((*div), (*A) / (*B));
}

TEST_F(MatrixSuite, OperatorIntPow) {
        ASSERT_EQ((*int_pow), (*A) ^ 3);
}

TEST_F(MatrixSuite, OperatorBinaryAdd) {
        ASSERT_EQ((*binary_sum), (*A) += (*B));
}

TEST_F(MatrixSuite, OperatorBinarySub) {
        ASSERT_EQ((*binary_sub), (*A) -= (*B));
}

TEST_F(MatrixSuite, OperatorBinaryMul) {
        ASSERT_EQ((*binary_mul), (*A) *= (*B));
}

TEST_F(MatrixSuite, OperatorBinaryDiv) {
        ASSERT_EQ((*binary_div), (*A) /= (*B));
}

TEST_F(MatrixSuite, OperatorBinaryIntPow) {
        ASSERT_EQ( (*binary_int_pow), (*A)^=3);
}
