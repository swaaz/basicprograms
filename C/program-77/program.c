#include <stdio.h>

int main()
{
int m, n, p, q, c, d, k, sum = 0;
int mat1[10][10], mat2[10][10], mat3[10][10];

printf(“Enter number of rows and columns of mat1 matrix\n”);
scanf(“%d%d”, &m, &n);
printf(“Enter elements of matrix 1\n”);

for (c = 0; c < m; c++)
for (d = 0; d < n; d++)
scanf(“%d”, &mat1[c][d]);

printf(“\nEnter number of rows and columns of mat2 matrix\n”);
scanf(“%d%d”, &p, &q);

if (n != p)
printf(“\nThe matrices can’t be multiplied with each other.\n”);
else
{
printf(“\nEnter elements of matrix2\n”);

for (c = 0; c < p; c++)
for (d = 0; d < q; d++)
scanf(“%d”, &mat2[c][d]);

for (c = 0; c < m; c++) {
for (d = 0; d < q; d++) {
for (k = 0; k < p; k++) {
sum = sum + mat1[c][k]*mat2[k][d];
}

mat3[c][d] = sum;
sum = 0;
}
}

printf(“\nProduct of the matrices:\n”);

for (c = 0; c < m; c++) {
for (d = 0; d < q; d++)
printf(“%d\t”, mat3[c][d]);

printf(“\n”);
}
}

return 0;
}