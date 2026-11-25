#include <stdio.h>
#include <math.h>

void task258() {
    double a = 2, b = 4, x, y;
    int i;

    double x1[] = {-5, -4, -3, -2, 0, 4, 7, 10};

    printf("\nЗавдання 258:\n");

    for (i = 0; i < 8; i++) {
        x = x1[i];

        if (4 * a * x - b != 0) {
            y = 3.2 * a * b * x * x
                - (5 * a * sqrt(1 + 2 * cos(x * x) * cos(x * x)))
                / (4 * a * x - b);

            printf("x = %.0f   y = %.6f\n", x, y);
        }
    }
}

void task265() {
    double a = 3, b = 0.2;
    double x, y, r, d;
    int i;

    printf("\nЗавдання 265:\n");

    for (i = -10; i <= 10; i++) {
        x = i / 2;

        r = 5 - 2 * sin(4 * x) * sin(4 * x) * sin(4 * x);
        d = fabs(0.3 * tan(x) * tan(x) * tan(x) - 2);

        if (r >= 0 && d != 0) {
            y = 2.05 * a * x * x
                - (3 * b * sqrt(r)) / d;

            printf("x = %.1f   y = %.6f\n", x, y);
        }
    }
}

void task4() {
    int a, k = 0;

    printf("\nЗавдання 4:\n");

    for (a = 1; a < 100; a++) {
        if (a % 3 == 1 &&
            a % 4 == 2 &&
            a % 5 == 3 &&
            a % 6 == 4) {
            
            printf("Число: %d\n", a);
            k++;
        }
    }

    printf("Кількість таких чисел: %d\n", k);
}

void task41() {
    int n, i;
    long long p = 1;

    printf("\nЗавдання 41:\n");
    printf("Введіть n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        p = p * (2 * i);
    }

    printf("Результат: %lld\n", p);
}

void task102() {
    int n, i;
    double p, a;
    double ap = 0, aa = 0;

    printf("\nЗавдання 102:\n");
    printf("Введіть кількість районів: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Район %d:\n", i);

        printf("Кількість жителів: ");
        scanf("%lf", &p);

        printf("Площа: ");
        scanf("%lf", &a);

        ap += p;
        aa += a;
    }

    if (aa != 0) {
        printf("Середня щільність населення: %.6f\n",
               ap / aa);
    }
}

void task193() {
    double m, g, c, x;
    int i;
    int found = 0;

    printf("\nЗавдання 193:\n");
    printf("Введіть m, g, c: ");
    scanf("%lf%lf%lf", &m, &g, &c);

    x = g;

    for (i = 1; i=1000; i++) {
        if (fabs(x - m) < 1e-10) {
            found = 1;
            break;
        }

        if (c == 0) {
            break;
        }

        x = x * c;
    }

    if (found)
        printf("Число m є членом прогресії.\n");
    else
        printf("Число m не є членом прогресії.\n");
}

void task40() {
    int n, i;
    long long p = 1;

    printf("\nЗавдання 40:\n");
    printf("Введіть n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        p = p * (2 * i - 1);
    }

    printf("Результат: %lld\n", p);
}

void task209() {
    double e, a, sum = 0, f;
    int n, i;

    printf("\nЗавдання 209:\n");
    printf("Введіть e: ");
    scanf("%lf", &e);

    if (e <= 0) {
        printf("e має бути більшим за 0.\n");
        return;
    }

    for (n = 1; ; n++) {
        f = 1;

        for (i = 1; i <= n - 1; i++) {
            f = f * i;
        }

        a = pow(2, n) / f;

        if (fabs(a) >= e) {
            sum = sum + a;
        }
        else if (n >= 3) {
            break;
        }
    }

    printf("Сума: %.10f\n", sum);
}

void task146() {
    int n, a, b, i;
    int prost;

    printf("\nЗавдання 146:\n");

    for (n = 52; n <= 100; n += 2) {
        printf("%d = ", n);

        for (a = 2; a < n; a++) {
            prost = 1;

            for (i = 2; i < a; i++) {
                if (a % i == 0) {
                    prost = 0;
                    break;
                }
            }

            if (prost) {
                b = n - a;

                if (b >= 2) {
                    prost = 1;

                    for (i = 2; i < b; i++) {
                        if (b % i == 0) {
                            prost = 0;
                            break;
                        }
                    }

                    if (prost) {
                        printf("%d + %d\n", a, b);
                        break;
                    }
                }
            }
        }
    }
}

void task137() {
    int n, a, b, c, s;

    printf("\nЗавдання 137:\n");

    for (n = 100; n <= 999; n++) {
        a = n / 100;
        b = (n / 10) % 10;
        c = n % 10;

        s = a * a * a + b * b * b + c * c * c;

        if (s == n)
            printf("%d\n", n);
    }
}

int main() {
    int t;

    printf("Введіть номер завдання: ");
    scanf("%d", &t);

    switch (t) {
        case 258:
            task258();
            break;

        case 265:
            task265();
            break;

        case 4:
            task4();
            break;

        case 41:
            task41();
            break;

        case 102:
            task102();
            break;

        case 193:
            task193();
            break;

        case 40:
            task40();
            break;

        case 209:
            task209();
            break;

        case 146:
            task146();
            break;

        case 137:
            task137();
            break;

    }
}