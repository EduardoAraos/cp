#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int test_cases;
	cin >> test_cases;
	for(int i=0;i<test_cases;i++)
	{
		long long n;
		cin >> n;
		vector<int> arreglo1;
		vector<int> arreglo2;
		for (int j = 0; j < n; ++j)
		{
			long long num;
			cin >> num;
			arreglo1.push_back(num);
		}
		for (int j = 0; j < n; ++j)
		{
			long long num;
			cin >> num;
			arreglo2.push_back(num);
		}

		cout << u*u << " " << -v*v << '\n';
	}

	return 0;
}