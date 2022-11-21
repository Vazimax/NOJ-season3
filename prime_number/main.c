int main() {

    int number, i, res = 0;
    scanf("%d", &number);

    if (number == 0 || number == 1)
    res = 1;

    for (i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            res = 1;
        break;
        }
    }

    if (res == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}
