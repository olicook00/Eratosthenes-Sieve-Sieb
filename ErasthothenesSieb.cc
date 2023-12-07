#include <iostream>
#include <cmath>  // Include cmath for sqrt function
using namespace std;

const int n = 100000;  // Use const for array size
int counter = 0;
bool prim[n + 1];

int main() {
    for (int i = 2; i <= n; i = i + 1) {
        prim[i] = true;
    }

    for (int i = 2; i <= n; i = i + 1) {
        for (int j = 2; j <= sqrt(i); j = j + 1) { 
            if (i % j == 0) {
                prim[i] = false;
            }
        }
    }
    for (int k = 2; k <= n; k = k + 1) {
        if (prim[k] == true){
            counter = counter + 1;
        }
    }
       cout << "There are " << counter << " prime numbers between 1 and " << n << endl;
       return 0;
}
