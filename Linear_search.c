// Linear search implementation

#include <stdio.h>
int main()
{

    int A[] = {51, 45, 78, 64, 1, 22, 4, 3, 15, 6, 85};

    printf("enter a element for searching:\n");
    int ele;

    scanf("%d", &ele);
    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++)
    {
        if (ele == A[i])
        {
            printf("element found");
        }
    }

    return 0;
}