#include <stdio.h>

#define MAX_ITEMS 3

float profit[MAX_ITEMS] = {1, 1, 1};
float weight[MAX_ITEMS] = {2, 2, 2};
float profitToWeight[MAX_ITEMS];
float Capacity = 20;
float totalProfit = 0;

// Function to perform bubble sort on profitToWeight array
void bubbleSort() {
    for (int i = 0; i < MAX_ITEMS - 1; i++) {
        for (int j = 0; j < MAX_ITEMS - i - 1; j++) {
            if (profitToWeight[j] < profitToWeight[j + 1]) {
                // swap
                float temp = profitToWeight[j];
                profitToWeight[j] = profitToWeight[j + 1];
                profitToWeight[j + 1] = temp;

                temp = profit[j];
                profit[j] = profit[j + 1];
                profit[j + 1] = temp;

                temp = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Calculate profit-to-weight ratio for each item
    for (int i = 0; i < MAX_ITEMS; i++) {
        profitToWeight[i] = profit[i] / weight[i];
        printf("Profit/Weight for Item %d: %f\n", i + 1, profitToWeight[i]);
    }

    // Sort items in decreasing order of profit-to-weight ratio
    bubbleSort();

    // Fill the knapsack
    for (int i = 0; i < MAX_ITEMS; i++) {
        if (Capacity > 0 && weight[i] <= Capacity) {
            // Take the whole item
            Capacity -= weight[i];
            totalProfit += profit[i];
        } else {
            // Take a fraction of the item
            totalProfit += profit[i] * (Capacity / weight[i]);
            break;
        }
    }

    printf("\nTotal Profit: %f\n", totalProfit);

    return 0;
}