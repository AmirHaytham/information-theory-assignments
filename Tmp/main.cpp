#include <bits/stdc++.h>

using namespace std;

int main()
{

        int n , m ; cin >> n >> m ;
        vector< vector<int> > v( 4 , vector<int>(4 , 0) ) ;
        for(int i = 0 ; i < n ; ++i){
            for(int j = 0 ; j < m ; ++j){
                cout << v[i][j] << " " ;
            }
            cout << endl ;
        }
}
