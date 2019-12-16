#include <iostream>
using namespace std;
int hole[10];
int main(){
    int a=9999;
    int i=1,j=1;
    while(a--){
        hole[i%10-1]++;
        i=i+j+1;
        j++;
        }
    for(i=0;i<10;i++) cout<<hole[i]<< " " <<i+1<<endl;
    return 0;
}
