#include <bits/stdc++.h>
#include <vector>

using std::vector;

double get_optimal_value(double capacity, vector<double> weights, vector<double> values,int n) {
  double value = 0.0000;
  double a;
  for(int i=0;i<n;i++){
  	if(capacity==0)
  	return value;
  	else{
  	a=weights[i]<capacity?weights[i]:capacity;
	  value=value+(a*values[i]/weights[i]);	
	  capacity=capacity-a;
	  weights[i]=weights[i]-a;
	  }
  }

  // write your code here

  return value;
}

int main() {
  int n,i,j;
  double capacity,temp;
  std::cin >> n >> capacity;
  vector<double> values(n);
  vector<double> weights(n);
  vector<double> ratio(n);
  for (i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
    ratio[i]=values[i]/weights[i];
  }
  
  for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++) {
         if (ratio[i] < ratio[j]) {
            temp = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = temp;
 
            temp = weights[j];
            weights[j] = weights[i];
            weights[i] = temp;
 
            temp = values[j];
            values[j] = values[i];
            values[i] = temp;
         }
      }
   }

  double optimal_value = get_optimal_value(capacity, weights, values,n);
  std::cout<<std::fixed;
  std::cout<<std::setprecision(4);
  std::cout << optimal_value << std::endl;
  return 0;
}
