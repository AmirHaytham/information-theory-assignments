#include <bits/stdc++.h>
#define f(i , j , k) for(int i = j ; i < k ; ++i)
using namespace std;

const int nMax = 1000 ;

int row_text , row_key , col_text , col_key , cnt ;

int key[nMax][nMax] ;
int Text_arr[nMax][nMax] ;
int res[nMax][nMax] ;
char arr_c[nMax][nMax] ;


void multiply(){

        bool passed = col_text == row_key  ; // verify mathematically :)
        //res(row_text , col_key) = Text_arr(row_text,col_text) * key(row_key,col_key)
        if (!passed){
            cout << " \n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<  Warning >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n"  ;
            cout << "\t| As mathematically definition , it is not correct !! \t|\n\t| col_text : " << col_text
            << "\t\t\t\t\t\t|" << endl << "\t| row_key : " << row_key << "\t\t\t\t\t\t|" << "\n" ;
            cout << "\t| The row_key and col_text are not equal to each other\t|" << "\n" ;
            cout << "=============================================================================\n\n\n\n\n" ;
            assert(false) ;
        }
        f(r , 0 , row_text)
            f(c , 0 , col_key)
                f(k , 0 , col_text)
                    res[r][c] += key[k][c] * Text_arr[r][k];

}

int main() {

    freopen("TestCase.txt" , "r" , stdin) ;
    cout << "Enter the number of key row : "     ; cin >> row_key ;cout << "\n" ;
    cout << "Enter the number of key column : "  ; cin >> col_key ;cout << "\n" ;

    f(i , 0 , row_key)f(j , 0 , col_key)cin >> key[i][j] ;

    cout << "\n" ;
    cout << "Enter plain Text : " ; string s ; cin >> s ;cout << "\n" ;
    row_text = (int)s.size() / col_key ;
    col_text = col_key ;

    f(i , 0 , row_text)f(j , 0 , col_text)Text_arr[i][j] = (int)s[cnt++] ;
    f(i , 0 , row_text)f(j , 0 , col_text)Text_arr[i][j] -= 97 ;

    multiply() ;

    f(i , 0 , row_text){
        f(j , 0 , col_key){
            cout << res[i][j] << " " ;
        }
        cout << "\n" ;
    }
    cout << "\n" ;
    f(i , 0 , row_text){
        f(j , 0 , col_key){
            res[i][j] %= 26 ;
            res[i][j] += 97 ;
            arr_c[i][j] = char(toupper(res[i][j]));
        }
    }

    f(i , 0 , row_text){
        f(j , 0 , col_key){
            cout << arr_c[i][j] << " " ;
        }
        cout << "\n" ;
    }
    cout << "\n" ;

}
