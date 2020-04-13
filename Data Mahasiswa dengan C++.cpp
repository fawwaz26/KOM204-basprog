#include <iostream>
#include <iomanip>
#include <cstdio>
#define SIZE 100
using namespace std;
struct mahasiswa
{
    char nim[10];
    int usia, jenis;
    float ip;
};
typedef struct mahasiswa MHS;
int main()
{
    int n, m, x, y;
    MHS a[SIZE], temp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i].nim >> a[i].usia >> a[i].jenis >> a[i].ip;}
    cin >> m;
    for(int i = 0; i < m; i++)   {
        cin >> x >> y;
        temp = a[x-1];
        a[x-1] = a[y-1];
        a[y-1] = temp;}
 
    for(int i = 0; i < n; i++)   {
        cout<<setprecision(2)<<fixed;
        cout << a[i].nim << " " << a[i].usia << " " << a[i].jenis << " " << a[i].ip << endl;}
 
    return 0;
}
