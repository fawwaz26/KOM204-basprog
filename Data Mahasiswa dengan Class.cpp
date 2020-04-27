#include <iostream>
#include <iomanip>
#include <cstring>
#define SIZE 100
using namespace std;
 
// Definisi tipe data
class mhs
{
    // data members
    private:
        string nim;
        int usia, jenkel;
        float ipk;
     
    public:
        void setmhs(string n, int u, int j, float i)
        {
            nim=n; usia=u; jenkel=j; ipk=i;
        }
 
        string getNim() { return nim; }
        int getUsia() { return usia; }
        int getJenkel() { return jenkel; }
        float getIPK() { return ipk; }
};
 
// Program utama
int main()
{
    string nim;
    int n, m, x, y, usia, jenkel;
    float ipk;
    mhs a[SIZE], temp;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> nim >> usia >> jenkel >> ipk;
        a[i].setmhs(nim, usia, jenkel, ipk);
    }
     
    cin >> m;
    for (int i=0; i<m; ++i)
    {
        cin >> x >> y;
        temp = a[x-1];
        a[x-1] = a[y-1];
        a[y-1] = temp;
    }
    for (int i=0; i<n; ++i)
    {
        cout << fixed << setprecision(2);
        cout << a[i].getNim() << " " << a[i].getUsia() << " " << a[i].getJenkel() << " " << a[i].getIPK() << endl;
    }
    return 0;
}