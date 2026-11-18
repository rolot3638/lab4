#include <stdio.h>
#include <math.h>

void task4() {
    int count = 0;

    for (int a = 1; a < 100; a++) {
        if (a % 3 == 1 && a % 4 == 2 &&
            a % 5 == 3 && a % 6 == 4) {
            printf("%d\n", a);
            count++;
        }
    }

    printf("Кількість = %d\n", count);
}

void task40() {
    int n;
    long long v = 1;

    printf("Введіть n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        v *= 2 * i - 1;

    printf("v = %lld\n", v);
}

void task41() {
    int n;
    long long v = 1;

    printf("Введіть n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        v *= 2 * i;

    printf("v = %lld\n", v);
}

void task102() {
    int n;
    double people, area;
    double sumPeople = 0, sumArea = 0;

    printf("Введіть кількість районів: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Район %d: ", i);
        scanf("%lf%lf", &people, &area);

        sumPeople += people;
        sumArea += area;
    }

    if (sumArea != 0)
        printf("Середня щільність = %.6f\n", sumPeople / sumArea);
    else
        printf("Площа не може дорівнювати 0.\n");
}

void task137() {
    int a, b, c, sum;

    printf("Трицифрові числа:\n");

    for (int n = 100; n <= 999; n++) {
        a = n / 100;
        b = n / 10 % 10;
        c = n % 10;

        sum = a * a * a + b * b * b + c * c * c;

        if (sum == n)
            printf("%d\n", n);
    }
}

void task146() {
    int n, a, b, found;

    for (n = 52; n <= 100; n += 2) {
        found = 0;

        for (a = 2; a <= n / 2; a++) {
            int primeA = 1;

            for (int i = 2; i < a; i++) {
                if (a % i == 0) {
                    primeA = 0;
                    break;
                }
            }

            if (primeA) {
                b = n - a;
                int primeB = 1;

                for (int i = 2; i < b; i++) {
                    if (b % i == 0) {
                        primeB = 0;
                        break;
                    }
                }

                if (primeB) {
                    printf("%d = %d + %d\n", n, a, b);
                    found = 1;
                    break;
                }
            }
        }

        if (!found)
            printf("%d — не представлено\n", n);
    }
}

void task193() {
    double m, g, c, a;

    printf("Введіть m, g, c: ");
    scanf("%lf%lf%lf", &m, &g, &c);

    a = g;

    if (c == 1) {
        if (m == g)
            printf("m є членом прогресії.\n");
        else
            printf("m не є членом прогресії.\n");
        return;
    }

    if (c > 1) {
        while (a < m)
            a *= c;
    } else if (c > 0) {
        while (a > m)
            a *= c;
    }

    if (a == m)
        printf("m є членом прогресії.\n");
    else
        printf("m не є членом прогресії.\n");
}

void task209() {
    double e, a, sum = 0;
    double power = 2;
    double fact = 1;
    int n = 1;

    printf("Введіть epsilon: ");
    scanf("%lf", &e);

    if (e <= 0) {
        printf("Epsilon має бути більшим за 0.\n");
        return;
    }

    a = power / fact;

    while (fabs(a) >= e) {
        sum += a;

        n++;
        power *= 2;
        fact *= n - 1;

        a = power / fact;
    }

    printf("Сума = %.10f\n", sum);
}

void task258() {
    double a = 2, b = 4;
    double x, y, root, den;

    printf("Значення функції:\n");

    for (int i = 0; i < 8; i++) {
        if (i == 0) x = -5;
        if (i == 1) x = -4;
        if (i == 2) x = -3;
        if (i == 3) x = -2;
        if (i == 4) x = 0;
        if (i == 5) x = 4;
        if (i == 6) x = 7;
        if (i == 7) x = 10;

        root = 1 + 2 * cos(x * x) * cos(x * x) * cos(x * x);
        den = 4 * a * x - b;

        if (root < 0 || den == 0) {
            printf("x = %.0f — функція не визначена\n", x);
        } else {
            y = 3.2 * a * b * x * x
                - (5 * a * sqrt(root)) / den;

            printf("x = %.0f, y = %.6f\n", x, y);
        }
    }
}

void task265() {
    double a = 3, b = 0.2;
    double x, y, den, t;

    printf("Значення функції:\n");

    for (int i = -10; i <= 10; i++) {
        x = i / 2.0;

        if (cos(x) == 0) {
            printf("x = %.1f — функція не визначена\n", x);
            continue;
        }

        t = tan(x);
        den = fabs(0.3 * t * t * t - 2);

        if (den == 0) {
            printf("x = %.1f — функція не визначена\n", x);
        } else {
            y = 2.05 * a * x * x * x
                - (3 * b * sqrt(5 - 2 * sin(4 * x) *
                sin(4 * x) * sin(4 * x))) / den;

            printf("x = %.1f, y = %.6f\n", x, y);
        }
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