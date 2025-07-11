#include <stdio.h>
#include <limits.h>

int min(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

void minmax(int arr[], int i, int j, int f[]) {
    int g[2], h[2];
    int mid;
    if (i == j)
   {
        f[0] = arr[i];
        f[1] = arr[i];
        return;
    }
else if (i == j - 1)
   {
        f[0] = min(arr[i], arr[j]);
        f[1] = max(arr[i], arr[j]);
        return;
    }
 else
{
        mid = (i + j) / 2;
        minmax(arr, i, mid, g);
        minmax(arr, mid + 1, j, h);
        f[0] = min(g[0], h[0]);
        f[1] = max(g[1], h[1]);
    }
}

int main() {
    int arr[100], n, f[2];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    f[0] = INT_MAX;
    f[1] = INT_MIN;

    minmax(arr, 0, n - 1, f);
    printf("The minimum element is: %d\n", f[0]);
    printf("The maximum element is: %d\n", f[1]);

    return 0;
}
