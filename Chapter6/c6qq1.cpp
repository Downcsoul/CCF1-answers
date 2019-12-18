#include<iostream>
using namespace std;
int f(int m);
int main(){
	int n;
	cin >> n;
	cout << f(n);
	return 0;
}

int f(int m){
	if(m<10)return m;
	else{
		int sum = 0;
		while(m>9){
			sum += m%10;
			m = m/10;
		}
		sum += m;
		return f(sum);
	}
	
	
}

 

