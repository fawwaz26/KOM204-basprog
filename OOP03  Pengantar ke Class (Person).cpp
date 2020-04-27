#include <iostream>
#include <iomanip>
#include <cstring>
#define SIZE 1000
using namespace std;
 
class Person
{
private:
    string nama;
    int usia, tb;
    float bb;
public:
    void setPerson(string s, int u, int t, float b)
    {
        nama = s; usia = u; tb = t; bb = b;
    }
    string getName() {return nama;};
    int getUsia() {return usia;};
    int getTinggi() {return tb;};
};
  
int main()
{
    int n, usia, tb, jumlah, i;
    float bb, sum = 0, rata;
    string nama;
    Person a[SIZE];
    cin >> n;
    sum=0;
    for(i=0;i<n;i++)
    {
        cin >> nama >> usia >> tb >> bb;
        a[i].setPerson(nama, usia, tb, bb);
        cout << a[i].getName() << " " << a[i].getUsia() << endl;
        sum+=a[i].getTinggi();
    }
 
    rata = sum/n;
    cout << fixed << setprecision(2);
    cout << rata << endl;
    jumlah = 0;
    for(i=0;i<n;i++)
    {
        double t = 1.0*a[i].getTinggi();
        if (t > rata) jumlah++;
    }
    cout << jumlah << endl;
}