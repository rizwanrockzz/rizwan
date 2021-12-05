// #include <stdio.h>

// int main()
// {
//     int a[20], size, i, j, k;
//     printf("enter the no.of elements: ");
//     scanf("%d", &size);
//     printf("enter the array elements: ");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < size; i++)
//     {
//         for (j = i + 1; j < size; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 for (k = j; k < size; k++)
//                 {
//                     a[k] = a[k + 1];
//                 }
//                 size--;
//                 j--;
//             }
//         }
//     }
//     for (i = 0; i < size; i++)
//     {
//         printf("%d\t", a[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n;
    char str[100][100], s[100];
    printf("Enter number of names :\n");
    scanf("%d", &n);
    printf("Enter names in any order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(s, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], s);
            }
        }
    }
    printf("\nThe sorted order of names are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}