#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TestCase.txt" , "r" , stdin) ;
    cout << "Enter string : " ;string s ;cin >> s ;cout << "\n" ;
    cout << "Enter key : " ; int key ; cin >> key ;cout << "\n" ;
    char mp[26] ;

    for(int i = 0 ; i < 25 ; ++i)
        mp[i] = char( 'A' + i ) ;

    for(int i = 0 ; i < s.size() ; ++i)s[i]-=97 ;

    for(int i = 0 ; i < s.size() ; ++i)
        s[i] = mp[int(s[i]+key)%26] ;

    cout << "\n" ;cout << s ;cout << "\n" ;


}
