#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
    long long a=0,b=1,c=1;
    if(n==0)
    return a;
    else{
    for(long long i=2;i<=n;i++){
    	c=(a+b)%10;
    	a=b;
    	b=c;
	}

    return c ;
}
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }
