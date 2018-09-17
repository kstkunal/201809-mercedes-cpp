#include <stdio.h> //for c style printf


// for c++ cout
#include <iostream>
using namespace std;

int main()
{
    int a=65;
    float b=2.5;
    char c='A';

    printf("using printf with right formats: a=%i\tb=%f\tc=%c\n", a, b, c);

    cout << "using cout with auto formatting: " << "a = "<< a
         <<"\tb = "<< b
         <<"\tc = "<< c
         <<endl;


    printf("using printf with user formatting: a=%c\tb=%i\tc=%i\n", a, b, c);

    cout << "using cout with user formatting: "
         << "a = "<< (char)a
         <<"\tb = "<< (int)b
         <<"\tc = "<< (int)c
         <<"\n";


    return 0;
}
