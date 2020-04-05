#include <bits/stdc++.h>
#define f(i , j , k) for(int i = j ; i < k ; ++i)

using namespace std;

int fixMod(int a, int b){ return ( (a % b) + b) % b; }

int main()
{
    freopen("TestCase.txt" , "r" , stdin) ;
    cout << "Enter string to be decrypted : " ; string s ; cin >> s ;cout << "\n" ;
    cout << "Enter key : " ; int key ; cin >> key ;cout << "\n" ;
    f( i , 0 , (int)s.size() )
        s[i] -= 97 ;

    char mp[26] = {} ;
    f(i , 0 , 26)
        mp[i] = char('A' + i) ;

    f( i , 0 , (int)s.size() )
        s[i] = mp[ fixMod( int(s[i]-key) , 26) ] ;


    cout << "\n" ;cout << s ;cout << "\n" ;
}
