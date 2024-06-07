// print out all Armstrong numbers between 1 and 500.
// sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong
// number
//   153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

#include <iostream>
using namespace std;
int main()
{
    int last;
    

    for (int i = 1; i <= 500; i++)
    {
        int j = i;
        int sum = 0;
        while (j > 0)
        {
            last = j % 10;
            sum += last * last * last;
            j /= 10;
        }
        if (i == sum)
        {
            cout << i << " ";
        }
    }
}
