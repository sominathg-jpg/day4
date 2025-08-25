#include <stdio.h>
int binarySerch(int a[], int n, int ele)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == ele)
            return mid;
        else if (a[mid] < ele)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

int main()
{
    int a[] = {51, 45, 78, 64, 1, 22, 4, 3, 15, 6, 85};

    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    int position = binarySerch(a, n, 51);
    printf("element is present at after sorted postion  %d", position);
    return 0;
}