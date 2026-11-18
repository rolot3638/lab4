#include <stdio.h>
#include <math.h>
void task14() {
    double p, h;
    double p0 = 1.29;
    double z = 1.25e-4;
    printf("h\tp\n");
    for (h = 0; h <= 1000; h += 100) {
        p = p0 * exp(-z * h);
        printf("%.0f\t%.6f\n", h, p);
    }
}

void task21() {
    double x;
    for (int i = 1; i <= 11; i++) {
        x = i / 10.0;
        printf("sin %.1f = %.6f\n", x, sin(x));
    }
}

void task32() {
    double x;
    double p = 1, q = 1;
    int a = 1, b = 2;
    printf("Введіть x: ");
    scanf("%lf", &x);

    for (int i = 0; i < 6; i++) {
        p *= x - a;
        q *= x - b;
        a = 2 * a + 1;
        b = b * 2;
    }

    printf("Результат = %.6f\n", p / q);
}

void task35() {
    int n;
    long long c = 0, p;
    printf("Введіть n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        p = 1;
        for (int j = i; j <= 2 * i; j++)
            p *= j;
        c += p;
    }
    printf("C = %lld\n", c);
}

void task39() {
    long long a = 1, b = 1, c;

    for (int i = 2; i <= 40; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    printf("f40 = %lld\n", b);
}

void task43() {
    double s = 0, x;
    for (int i = 10; i <= 20; i++) {
        x = i / 10.0;
        s += sin(x);
    }
    printf("v = %.6f\n", s);
}

void task58() {
    double x = 2;
    double p = x;
    double s = 0;
    for (int i = 1; i <= 11; i += 2) {
        s += p / i;
        p *= x * x;
    }
    printf("S = %.6f\n", s);
}

void task82() {
    int n;
    double a, s = 0;
    printf("Введіть n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a);
        s += a;
    }
    printf("Сума = %.6f\n", s);
}

void task91() {
    int n;
    double a, s = 0;
    printf("Введіть n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a);
        s += a;
    }
    printf("Середнє арифметичне = %.6f\n", s / n);
}

void task95() {
    int n;
    double a[100];
    double s1 = 0, s2 = 1, s4 = 0;
    int sign = 1;
    printf("Введіть n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%lf", &a[i]);
    for (int i = 0; i < n; i++) {
        s1 += fabs(a[i]);
        s2 *= fabs(a[i]);
        s4 += sign * a[i];
        sign = -sign;
    }
    printf("a) %.6f\n", s1);
    printf("b) %.6f\n", s2);
    printf("c) ");
    for (int i = 0; i < n - 1; i++)
        printf("%.6f ", a[i] + a[i + 1]);
    printf("\nd) %.6f\n", s4);
}

int main() {
    int t;
    printf("Введіть номер завдання: ");
    scanf("%d", &t);
    switch (t) {
        case 14:
            task14();
            break;
        case 21:
            task21();
            break;
        case 32:
            task32();
            break;
        case 35:
            task35();
            break;
        case 39:
            task39();
            break;
        case 43:
            task43();
            break;
        case 58:
            task58();
            break;
        case 82:
            task82();
            break;
        case 91:
            task91();
            break;
        case 95:
            task95();
            break;
    }
}