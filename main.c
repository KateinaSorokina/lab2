#include <stdio.h> 
#include <math.h>
int main() { double a = 0.0, b = 0.0, c = 0.0, d = 0.0, x = 0.0, y = 0.0;
printf("Введіть значення a: ");
if (scanf("%lf", &a) != 1) return 1;

printf("Введіть значення b: ");
if (scanf("%lf", &b) != 1) return 1;

printf("Введіть значення c: ");
if (scanf("%lf", &c) != 1) return 1;

printf("Введіть значення d: ");
if (scanf("%lf", &d) != 1) return 1;

printf("Введіть значення x: ");
if (scanf("%lf", &x) != 1) return 1;

printf("Введіть значення y: ");
if (scanf("%lf", &y) != 1) return 1;

printf("\n--- Результати обчислень ---\n");

double result1 = (a * b * sin(c)) / cos(d);
printf("Завдання 1 (Варіант 38): %.4f\n", result1);

double result2 = fabs(x) * fabs(x - 1.0);
printf("Завдання 2 (Варіант 45): %.4f\n", result2);

double result3 = (3.0 + exp(x - 1.0)) / (1.0 + x * x * fabs(y - tan(x)));
printf("Завдання 3 (Варіант 4): %.4f\n", result3);

double result4 = sqrt(1.0 - sin(x) * sin(x));
printf("Завдання 4 (Варіант 41): %.4f\n", result4);

double result5 = 1.0 / sqrt(a * x * x + b * x + c);
printf("Завдання 5 (Варіант 42): %.4f\n", result5);

return 0;
}
