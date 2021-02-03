#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float A[100];
    for (int aux = 0; aux<100; aux++){
        A[aux] = 100000;
    }
    for (int aux = 0; aux<100; aux++){
        std::cin >> A[aux];
    }

    for (int aux = 0; aux<100; aux++){
        if (A[aux] <= 10) {
            std::cout << setprecision(1)<<fixed<<"A["<< aux <<"] = " << A[aux] <<std::endl;
        }
    }
    return 0;
}