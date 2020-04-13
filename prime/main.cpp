#include <cmath>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

inline int is_prime(long int &);


int main(int argc, char** argv) {
    long int num = 0L;
    ifstream fin(argv[1], ios::in);

    while (!fin.eof()){
        fin >> num;
        printf("%d\n", is_prime(num));
    }

    return 0;
}

inline int is_prime(long int & number){

    auto last = static_cast<long int>(sqrt(number));

    for (long int i = 2; i < last; ++i) {
        if (number % i == 0)
            return 0;
    }
    return 1;
}
