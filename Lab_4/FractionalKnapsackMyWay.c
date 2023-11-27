#include <stdio.h>

float p[] = {1,1,1};
float w[] = {2, 2, 2};
float x[] = {};
float Capacity = 20;
float totalProfit = 0;

int main()
{
    int n = sizeof(p) / sizeof(p[0]);
    int m = sizeof(w) / sizeof(w[0]);
    int i, j, k, l;
    float temp, temp1, temp2;

    if (n == m)
    {
        for (i = 0; i <= n - 1; i++)
        {
            // calculate the profit/weight
            x[i] = p[i] / w[i];

            printf("Profit/Weight In No Specific Order is: %f\n", x[i]);
        }

        // Use Bubble Sort to sort x[i] in decreasing order

        for (j = n - 1; j >= 1; j--)
        {
            for (k = 0; k <= j - 1; k++)
            {
                if (x[k] < x[k + 1])
                {
                    // swap
                    temp = x[k];
                    x[k] = x[k + 1];
                    x[k + 1] = temp;

                    temp1 = p[k];
                    p[k] = p[k + 1];
                    p[k + 1] = temp;

                    temp1 = w[k];
                    w[k] = w[k + 1];
                    w[k + 1] = temp;
                }
            }
        }

        printf("\n\nProfit/Weight In Decreasing Order: ");
        for (i = 0; i <= n - 1; i++)
        {
            printf("%f ", x[i]);
        }

        // Conditioning

        for (l = 0; l <= n-1 ; l++)
        {
            if (Capacity > 0 && w[l] <= Capacity)
            {
                Capacity = Capacity - w[l];

                totalProfit = totalProfit + p[l];
            }
            else
            {
                totalProfit += p[l] * (Capacity / w[l]);
                break; // Fractional part handled
            }
        }

        printf("\nTotal Profit: %f\n", totalProfit);
    }

    return 0;
}
