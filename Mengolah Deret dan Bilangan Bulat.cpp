#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#define vec vector<int>
#define pb push_back
using namespace std;

class Bil
{
private:
	vec v;
public:
	void SetA(int a){
		v.pb(a);
	}
	void DeleteA(int a){
		if(v.empty()) return;
		v.erase(v.begin() + a - 1);
	}
	int size(){
		return v.size();
	}
	double rata(){
		if(v.empty()) return -9.99;

		vec::iterator it;
		int sum = 0;
		for(it=v.begin(); it!=v.end(); ++it){
			sum += *it;
		}
		return (double)sum/v.size();
	}
};

int main()
{
	ios::sync_with_stdio(0);
	Bil angka;
	int n, awal, akhir = 0, count = 0;
	double rata1, rata2;

	// Bagian Pertama
	cin >> n;
	while(n != -9)
	{
		angka.SetA(n);
		cin >> n;
	}

	rata1 = angka.rata();
	awal = angka.size();

	// Bagian Kedua
	n = 0;
	cin >> n;
	while(n != -9){
		angka.DeleteA(n-count);
		count++;
		cin >> n;
	}

	rata2 = angka.rata();
	akhir = angka.size();

	cout.precision(2);
	cout << awal << " " << akhir << endl;
	cout << fixed << rata1 << " " << fixed << rata2 << endl;

	return 0;
}
