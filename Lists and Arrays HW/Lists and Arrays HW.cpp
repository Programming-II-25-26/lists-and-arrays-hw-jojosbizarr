#include <iostream>
using namespace std;

int arr[7] = { 12, 35, 1, 10, 34, 1 };

int arr2[5] = { 10, 20, 30, 40, 50 };

void get_alternates() {
    for (int i2 = 0; i2 < 5; i2 += 2) {
        cout << arr2[i2] << " ";
    }
}

int getSecondLargest() {

    int largest = 0;
    int secondlargest = 0;


    for (int i = 0; i < 6; i++) {
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest) {
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

int main()
{
    cout << getSecondLargest() << endl << endl;
    get_alternates();
    cout << endl;
    return 0;
}
