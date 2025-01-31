#include <stdio.h>

int rev(int n, int ans);

int main() {
    int num;
    printf("Enter the number to reverse it: ");
    scanf("%d", &num);
    int revnum = rev(num, 0);
    printf("YOUR REVERSED NUMBER IS = %d\n", revnum);
    return 0;
}

int rev(int n, int ans) {
    if (n == 0) {
        return ans; // Base case: when n is 0, return the accumulated answer
    } else {
        ans = ans * 10 + (n % 10); // Build the reversed number
        return rev(n / 10, ans); // Recursive call with the next digit
    }
}