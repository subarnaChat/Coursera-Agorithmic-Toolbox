#include <iostream>

int gcd_naive(int a, int b) {
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
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_naive(a, b) << std::endl;
  return 0;
}
