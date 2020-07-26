#include <iostream>
#include <cassert>


int fibonacci_fast(int n) {
    int a=0,b=1,c;
    if(n==0)
    return a;
    for(int i=2;i<=n;i++){
    	c=a+b;
    	a=b;
    	b=c;
	}
    return b;
}


int main() {
    int n = 0;
    std::cin >> n;

    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
