// Name: Ramya
// Task 2: Matrix Operations
// CodeAlpha Internship

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j, k;
    int choice;

    printf("--- MATRIX OPERATIONS ---\n");
    printf("1.Addition\n2.Multiplication\n3.Transpose\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter rows cols: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter Matrix A:\n");
        for(i=0;i<r1;i++) for(j=0;j<c1;j++) scanf("%d",&a[i][j]);
        printf("Enter Matrix B:\n");
        for(i=0;i<r1;i++) for(j=0;j<c1;j++) scanf("%d",&b[i][j]);

        printf("Result:\n");
        for(i=0;i<r1;i++) {
            for(j=0;j<c1;j++) {
                c[i][j] = a[i][j] + b[i][j];
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else if(choice == 2) {
        printf("Enter rows cols for A: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows cols for B: ");
        scanf("%d %d", &r2, &c2);
        if(c1!= r2) {
            printf("Multiplication not possible\n");
            return 0;
        }
        printf("Enter Matrix A:\n");
        for(i=0;i<r1;i++) for(j=0;j<c1;j++) scanf("%d",&a[i][j]);
        printf("Enter Matrix B:\n");
        for(i=0;i<r2;i++) for(j=0;j<c2;j++) scanf("%d",&b[i][j]);

        printf("Result:\n");
        for(i=0;i<r1;i++) {
            for(j=0;j<c2;j++) {
                c[i][j]=0;
                for(k=0;k<c1;k++) c[i][j] += a[i][k]*b[k][j];
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else if(choice == 3) {
        printf("Enter rows cols: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter Matrix:\n");
        for(i=0;i<r1;i++) for(j=0;j<c1;j++) scanf("%d",&a[i][j]);

        printf("Transpose:\n");
        for(i=0;i<c1;i++) {
            for(j=0;j<r1;j++) {
                printf("%d ", a[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}