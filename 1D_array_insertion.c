#include <stdio.h>

int main() {
    int a[100], n, i, p, v;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position and value to insert: ");
    scanf("%d", &p);
    scanf("%d", &v);

    for(i = n; i >= p; i--)
        a[i] = a[i - 1];

    a[p - 1] = v;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
