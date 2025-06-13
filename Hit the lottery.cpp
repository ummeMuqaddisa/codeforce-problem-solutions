#include <iostream>
using namespace std;

int minCoinChange(int coins[], int amount, int size) {
    int remaining = amount;
    int count = 0;

    for (int i = 0; i < size; i++) {
        while (remaining >= coins[i]) {
            remaining = remaining-coins[i];
            count++;
        }
    }

    return count;
}

int main() {

    int coins[] = {100, 20, 10, 5, 1};
    int n;

    cin >> n;

    //int size = sizeof(coins) / sizeof(coins[0]);

    cout << minCoinChange(coins, n, 5) << endl;

    return 0;
}
