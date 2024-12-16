#include <cstdio>  // For scanf and printf

int main() {
    char n[100005]; // To hold the input number as a string (max length 100000)
    scanf("%s", n); // Read the input string

    int sum = 0; // Variable to store the sum

    // Loop through each character of the string until we reach the null character '\0'
    for (int i = 0; n[i] != '\0'; i++) {
        int digit = n[i] - '0'; // Convert the character to an integer
        if (digit == 2) {
            sum += 4; // If the digit is 2, add 4 to the sum
        } else if (digit == 3) {
            sum += 9; // If the digit is 3, add 9 to the sum
        } else {
            sum += digit; // For any other digit, add its value to the sum
        }
    }

    // Check if the sum is divisible by 9
    if (sum % 9 == 0) {
        printf("YES\n"); // Output "YES" if divisible by 9
    } else {
        printf("NO\n"); // Output "NO" if not divisible by 9
    }

    return 0;
}
