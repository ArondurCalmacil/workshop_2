
#include <iostream>
using namespace std;

int count (int array[], int n);

int count (int array[], int n){

    int even = 0;

    for (int i = 0; i < n; i++){
        if (array[i] % 2 == 0){
            even += 1;
        }
    }

    return even;
}