#include <iostream>
using namespace std;
 
// Returns sum of first
// n natural numbers
int recurSum(int n)
{
    if (n <= 1)
        return n;
    return n + recurSum(n - 1);
}
 
// Driver code
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    cout << recurSum(n);
    return 0;
}