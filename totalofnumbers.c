#include <stdio.h>

int main()

{
    float n, s, i;

    printf("Insert a number: ");
    scanf("%f", &n);

for (i = 1; i <= n; i ++)

{
s += 1 / i;

}
printf("%.2f", s);
    return 0;
}