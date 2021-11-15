#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int test_cases;
	cin >> test_cases;
	for(int i=0;i<test_cases;i++)
	{
		long long u;
		long long v;
		cin >> u >> v;
		int resto = 0;
		if ((u*v)%3 > 0){
			resto++;
		}
		cout << resto+(u*v)/3 <<'\n';
	}

	return 0;
}