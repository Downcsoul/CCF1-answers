/// 注意：取余数算正负 
#include <iostream>
using namespace std;
int main(){
        int i;
        cin >> i;
        if(i<0) {cout << '-';i=-i;}
        do{
                if(i%10)cout << i%10 ;
                i /= 10;
        }while(i);
        cout << endl;
        return 0;
}

