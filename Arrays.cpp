#include <iostream>
using namespace std;
int main() {
    //Сумиране на масив:
//    const int size = 10;
//    int arr[size] {12, 235,1234,564,1324,654,234,654,234, 120};
//    int sum = 0;
//    for(int i = 0; i < size; i++){
//        int currentNumber = arr[i];
//        sum += currentNumber;
//    }
//    cout << sum << endl;


    /*
     TODO:
     Да се напише кознолно приложение, което прочита на първи цяло числа, което представяля дължина на масив.
     На следващите н реда да се въведът стойност на масива.
     Накрая програмата да изпечатва на-големи и най-малкия елемент на масива.
     * */
    /*
    int size;
    cin >> size;
    int* arr = new int[size];

    for(int i = 0; i < size; i++){
        int number;
        cin >> number;
        arr[i] = number;
        //cin >> arr[i]; Директно записваме стойности в масива.
    }

    int min = INT_MAX;
    int max = INT_MIN;

    for(int i =0; i < size; i++) {
        int currentNumber = arr[i];
        if (min > currentNumber) {
            min = currentNumber;
        }

        if (max < currentNumber) {
            max = currentNumber;
        }
    }

        cout << "Max: " << max << ", Min: " << min;

*/
    /*
    //dynamically create array
    cout << "Enter the length of the arr: ";
    int size;
    cin >> size;
    int* arr = new int[size]; //Динамично създаване на масив
    //set array values!
    for(int i = 0; i < size; i++){
        cout << "Enter value for item: " << i << " ";
        int number;
        cin >> number;
        arr[i] = number;
    }

    //printing the arr
    for(int i = 0; i < size; i++){
        cout << arr[i] << ", ";
    }
    */

    /*
     * static arr
    const int size = 50;
    int arr[size];

    for(int i = 0; i < size; i++){

    }
    */



//    population by index
    int arr[40];
    arr[0] = 5;
    arr[1] = 10;
    arr[2] = 50;
    arr[3] = 600;


//      population with for
    for (int i = 0; i < 40; i++){
        int number;
        cin >> number;
        arr[i] = number;
    }

    cout << arr[3];
    return 0;
}
