#include <stdio.h>

int main() {
    int a[100], n, i, key, f = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Element found at position %d", i + 1);
            f = 1;
            break;
        }
    }

    if(f == 0)
        printf("Element not found");

    return 0;
}
