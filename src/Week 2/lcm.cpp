#include <iostream>
long long int gcd_naive(long long int a,long long int b) {
	if(b==0)
	return a;
	if(a==0)
	return b;
	
	if(a>b)
	return gcd_naive(a%b,b);
	else if(b>a)
	return gcd_naive(a,b%a);
	else
	return a;
  
}


int main() {
  long long int a, b;
  std::cin >> a >> b;
  std::cout << (a*b)/gcd_naive(a, b) << std::endl;
  return 0;
}
