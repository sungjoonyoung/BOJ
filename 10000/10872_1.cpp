#include<iostream>
using namespace std;
long long factorial(long long x) {
	if(x==0)return 1;
	long long tmp=factorial(x-1);
	return tmp*x;
}
int main(void) {
    long long N;cin>>N;
	cout<<factorial(N);
} // 어떤 값이 나올 거 같으세요?