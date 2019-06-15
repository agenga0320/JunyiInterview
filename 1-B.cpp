#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
    string str ,ans="";
    bool sw = false ;
    getline(cin,str) ;
    for(int a=0;a<str.length();a++){
        if(str[a]==' '){
            reverse(ans.begin(),ans.end()) ;
            if(sw)
                cout << " " ;
            cout << ans ;
            ans = "" ;
            sw = true ;
        }
        else
            ans += str[a] ;
    }
    reverse(ans.begin(),ans.end()) ;
    if(sw)
        cout << " " ;
    cout << ans ;
    cout << endl ;
    return 0 ;
}

