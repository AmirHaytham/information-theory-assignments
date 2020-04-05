#include <bits/stdc++.h>
#define f(i , j , k) for(int i = j ; i < k ; ++i)

using namespace std;

int main()
{
    freopen("TestCase.txt" , "r" , stdin) ;
    cout << "Enter string : " ;string s ;cin >> s ;cout << "\n" ;
    cout << "Enter key : " ; int key ; cin >> key ;cout << "\n" ;
    map<int , char> mp ;

    f(i , 0 , 25)
        mp[i] = char( 'A' + i ) ;

    f(i , 0 , (int)s.size() )s[i]-=97 ;

    f(i , 0 , (int)s.size())
        s[i] = mp[int(s[i]+key)%26] ;

    cout << "\n" ;cout << s ;


}
