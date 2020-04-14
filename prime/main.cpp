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
    //Primality test
    if (
            (number % 2 == 0 && (number != 2))
            ||(number % 3 == 0 && (number != 3))
            ||(number % 5 == 0 && (number != 5))
            || (number % 7 == 0 && (number != 7))
            || (number % 11 == 0 && (number != 11))
            || (number % 13 == 0 && (number != 13))
            ||(number % 997 == 0 && (number != 997))
            ||(number % 857 == 0 && (number != 857))
            ||(number % 787 == 0 && (number != 787))
            || (number % 773 == 0 && (number != 773))
            ||(number % 983 == 0 && (number != 983))
            ||(number % 907 == 0 && (number != 907))

            )
            return 0;
    else {
        auto last = static_cast<long int>(sqrt(number));

        for (long int i = 5L; i <= last; i += 6) {
            if (number % i == 0 || (number % (i + 2) == 0))
                return 0;
        }
        return 1;
    }
}
