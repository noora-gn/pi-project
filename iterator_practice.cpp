#include <iostream>
#include <iterator> // for iterator
#include <vector> // for vectors 

using namespace std;


int main()
{
    vector<int> ar = {2,4,6,8,10};
    vector<int> ::iterator ptr;
    cout << "My vector elements are: ";
    for (ptr = ar.begin(); ptr < ar.end (); ptr++)
        cout << *ptr<< " ";

    return 0;
}