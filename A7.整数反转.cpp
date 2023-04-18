#include<iostream>
#include<stdlib.h>
using namespace std;
int reverse(int x) {
	int rever = 0;
	while(x!=0) {
		int end = x%10;   //弹出  12345 % 10 =5
		//判断是否溢出 
		if (rever > INT_MAX / 10 || rever < INT_MIN / 10)  {
			return 0;
		}
		rever = rever*10 + end;//推入 5
		x /= 10; //12345 / 10 = 1234
	}
	return rever;
}
int main() {
	int x;
	cin>>x;
	cout<<reverse(x);
}
// [-2^31 ,2^31-1 ]
/*
12345 % 10 =5，=>   12345 / 10
1234 % 10 =4， =>    1234/10 = 123
123 % 10 =3，
12 % 10 =2，
1 % 10 =1， =>   1 / 10 =0
 -1234 %10 = -4, => -1234/10 = -123
*/
