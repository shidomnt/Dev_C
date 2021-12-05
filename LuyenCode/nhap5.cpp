#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
int **Matrix_Malloc(int row, int col)
{
    int **matrix = (int **)malloc(row * sizeof(int*));
    for (int i = 0; i < row; i++)
    {
        matrix[i] = (int *)malloc(col * sizeof(int));
    }
    return matrix;
}
int **Matrix_In(int **matrix, int row, int col)
{
    matrix = Matrix_Malloc(row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Nhap Matran[%d][%d]\n", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    return matrix;
}
void Matrix_Out(int **matrix, int row, int col)
{
    puts("Ma tran :");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int **Matrix_Sum(int **matrix1, int r1, int c1, int **matrix2, int r2, int c2)
{
    if (r1 != r2 || c1 != c2)
    {
        return NULL;
    }
    int **matrix_sum = Matrix_Malloc(r1, c1);
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return matrix_sum;
}
int **Matrix_Mul(int **matrix1, int r1, int c1, int **matrix2, int r2, int c2)
{
    if (c1 != r2)
    {
        return NULL;
    }
    int **matrix_mul = Matrix_Malloc(r1, c2);
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int sum = 0;
            for (int k = 0; k < c1; k++)
                sum += matrix1[i][k] * matrix2[k][j];
            matrix_mul[i][j] = sum;
        }
    }
    return matrix_mul;
}
int Matrix_Save(int **matrix, int row, int col, const char *name)
{
    FILE *fp = fopen("E:/matran.txt", "a");
    fprintf(fp,"===================================");
    fprintf(fp, "\n%s: \n", name);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            fprintf(fp, "%d\t", matrix[i][j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}
void Matrix_Delete(int **matrix, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}
int main()
{
    int row1, col1;
    puts("===Ma tran 1===");
    printf("Nhap so hang: ");
    scanf("%d", &row1);
    printf("Nhap so cot: ");
    scanf("%d", &col1);
    int **matran1 = Matrix_In(matran1, row1, col1);
    int row2, col2;
    puts("===Ma tran 2===");
    printf("Nhap so hang: ");
    scanf("%d", &row2);
    printf("Nhap so cot: ");
    scanf("%d", &col2);
    int **matran2 = Matrix_In(matran2, row2, col2);
    int **matran_tong = Matrix_Sum(matran1, row1, col1, matran2, row2, col2);
    int **matran_tich = Matrix_Mul(matran1, row1, col1, matran2, row2, col2);
    puts("\n===Ma tran 1===");
    Matrix_Out(matran1, row1, col1);
    puts("\n===Ma tran 2===");
    Matrix_Out(matran2, row2, col2);
    puts("\n===Ma tran tong===");
    if (matran_tong != NULL)
        Matrix_Out(matran_tong, row1, col1);
    else
        puts("Hai ma tran khong cung cap!");
    puts("\n===Ma tran tich===");
    if (matran_tich != NULL)
        Matrix_Out(matran_tich, row1, col2);
    else
        puts("So cot cua ma tran 1 khac so cot cua ma tran 2!");
    Matrix_Save(matran1, row1, col1, "Ma tran 1");
    Matrix_Save(matran2, row2, col2, "Ma tran 2");

    Matrix_Delete(matran1, row1, col1);
    Matrix_Delete(matran2, row2, col2);
    if (matran_tong != NULL)
    {
        Matrix_Save(matran_tong, row1, col1, "Ma tran tong");
        Matrix_Delete(matran_tong, row1, col1);
    }
    if (matran_tich != NULL)
    {
        Matrix_Delete(matran_tich, row1, col2);
        Matrix_Save(matran_tich, row1, col2, "Ma tran tich");
    }
    puts("Nhan phim bat ki de thoat chuong trinh . . .");
    getch();
}