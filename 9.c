int main() {
    int n;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Print the sum
    printf("Sum = %d\n", sum);

    return 0;
}
