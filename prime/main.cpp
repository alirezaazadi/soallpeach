#include <cmath>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

inline int is_prime(long int &);


int main(int argc, char** argv) {
    long int num = 0L;
    string input = argv[1];
    ifstream fin(input, ios::in);

    while (!fin.eof()){
        fin >> num;
        printf("%d\n", is_prime(num));
    }

    return 0;
}

inline int is_prime(long int & number){
    //Primality test
    if (number <= 13){
        if (number == 4 || number == 6 || number == 8 ||
            number == 9 || number == 10 || number == 12)
            return 0;
        return 1;
    }

    if (number % 2 == 0 || number % 3 == 0 || number % 5 == 0 ||
        number % 7 == 0 || number % 2 == 11 || number % 13 == 0)
        return 1;

    long int last = static_cast<long int>(sqrt(number));

    for (long int i = 5; i < last; i+=6) {
        if (number % i == 0 || (number % (i + 2) == 0))
            return 0;
    }
    return 1;
}
