/*
(a)

ALGORITHM:
~ Create Array
~ Store length of array in a variable suppose n
~ start=0 
~ end=n-1
~ while start<end:
    swap arr[start] and arr[end]
    start+1
    end-1
~end

PSEUDOCODE:

ReverseArray(arr,n):
    start <- 0
    end <- n-1
    while start<end do
        temp <- arr[start]
        arr[start] <- arr[end]
        arr[end] <- temp
        start <- start + 1
        end <- end-1
    end while loop
    return arr
end

*/

/*
(b)

ALGORITHM:
~ Read matrix A of dimension m*n
~ Read matrix B of dimension n*p
~ If column(A) != rows(B) -> stop(not possible)
~ size of new matrix C = m*p fill it with 0
~ For each row i in matrix A:
    For each column j in matrix B:
        Initialize C[i][j]=0
        For each position k from 0 to n-1:
            Multiply: A[i][k] x B[k][j]
            Add this product to C[i][j]
~ C will contain the output 
~ end

PSEUDOCODE:

MatrixMultiply(A,B,m,n,p):
    read matrix A of dimension m*n
    read matrix B of dimension n*p
    create C[m][p]
    for i <-0 to m-1 do
        for j <- 0 to p-1 do
            c[i][j] <- 0
            for k <- 0 to n-1 do
                c[i][j] <- c[i][j] + (A[i][k] * B[k][j])
            end for loop
        end for loop
    end for loop
    Return c
End


*/


/*
(c)

ALGORITHM:
~ Read a matrix for example A is a matrix
~ Read matrix and its dimension A[m][n]
~ Create matrix T[n][m]
~ For each i in (0 to m-1):
    for j in (0 to n-1):
        T[j][i] = A[i][j]
~ Display T
~ End


PSEUDOCODE:

TransposeMatrix(A,m,n):
    read matrix A
    create T[n][m]
    for i <- 0 to n-1 do
        for j <- o to m-1 do
            T[j][i] <- A[i][j]
        end for loop
    end for loop
    return T
end


*/