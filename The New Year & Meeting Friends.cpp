#include <iostream>
#include <cmath>

using namespace std;

void sortArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


int assignFriends(int friends[], int n) {
    sortArray(friends, n);


    int totalDistance = 0;
    int median=friends[1];
    for (int i = 0; i < n; i++) {
         totalDistance = totalDistance+ abs(friends[i] - median);

    }
    return totalDistance;
}









int main() {
    int n=3;


    int friends[n];

    for (int i = 0; i < 3; i++) {
        cin >>friends[i];
    }


    int minDistance = assignFriends(friends, n);
    cout <<minDistance<< endl;

    return 0;
}
