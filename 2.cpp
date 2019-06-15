#include<iostream>
using namespace std ;
int main()
{
    int num ;
    cin >> num ;
    num -= (num/3 +num/5 -num/15*2) ;
    cout << num << endl ;
    return 0 ;
}
