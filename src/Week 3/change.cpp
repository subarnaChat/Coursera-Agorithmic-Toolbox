#include <iostream>

int get_change(int m) {
	
	int i=0,c=0;
	while(m>=1){
		if(m>=10){
			m=m-10;
			c++;
		}
		else if(m>=5 && m<28){
			m=m-5;
			c++;
		}
		else if(m>=1 && m<5){
			m=m-1;
			c++;
		}
	}
  
  return c;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
