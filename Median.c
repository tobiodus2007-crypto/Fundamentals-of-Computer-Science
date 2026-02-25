/*computer solution to compute the median and mean of a set of numbers arranged in decreasing number of magnitude*/
#include <stdio.h>
int main (void)
{
    int n, i;
    float mean, median, sum = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    float numbers[n];

    printf("Enter %d numbers in decreasing order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    mean = sum / n;

    if (n % 2 == 0) {
        median = (numbers[n/2 - 1] + numbers[n/2]) / 2;
    } else {
        median = numbers[n/2];
    }

    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);

    return 0;
}