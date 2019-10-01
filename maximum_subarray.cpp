#include<iostream>

using namespace std;

int main(){
	int array[] ={
		13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7
	};
	int n = 16;
	int best = 0;
	int sum = 0;
	for(int k=0;k<n;k++){
		sum = max(array[k],sum + array[k]);
		best = max(best, sum);
		//cout << sum << "  " << best << "\n";
	}
	cout << best << "\n";
}
