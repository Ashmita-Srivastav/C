#include <math.h>
#include <stdio.h>
int main() {
    int a, b, c, d;
    float r1, r2, rp, ip;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    d= (b * b) - 4 * a * c;

    // condition for real and different roots
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots are real and distinct \n");
        printf("root1 = %.2f and root2 = %.2f", r1, r2);
    }

    // condition for real and equal roots
    else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("The roots are real and equal\n");
        printf("root1 = root2 = %.2f;", r1);
    }

    // if roots are not real
    else {
        rp = -b / (2 * a);
        ip = sqrt(-d) / (2 * a);
        printf("The roots are imaginary\n");
        printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi", rp, ip, rp, ip);
    }

    return 0;
} 
