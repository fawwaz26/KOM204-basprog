#include <iostream>
#include <cstdio>
#include <list>
#include <iomanip>
  
 
using namespace std;
  
class Person {
   private:
      string nama, status;
      int usia, tb;
      double bb, imt;
      double IMT() { double t=(double)tb/100.0; return (bb/(t*t)); }
   public:
      Person() { nama=""; usia=tb=0; bb=0.0; }
      void setPerson(string nm, int u, int t, double b) {
         nama=nm; usia=u; tb=t; bb=b;
         imt=IMT(); status=Status();
      }
 
      string Status() {
         double t=IMT();
         if (t<17.0) return "sangat kurus";
         else if (t<18.5) return "kurus";
         else if (t<25.0) return "normal";
         else if (t<28.0) return "gemuk";
         else return "sangat gemuk"; }
       
      string getNama() { return nama; }
      int getUsia() { return usia; }
      int getTinggi() { return tb; }
      double getBerat() { return bb; }
      double getIMT() { return imt; }
      string getStatusGizi() { return status; }
      void cetak() {
         cout << nama << " " << usia << " " << tb << " ";
         cout << fixed << setprecision(2) << bb<< " " << imt << " " << status << endl;
      }
};
  
int main()
{
  int usia, tb, n, sum=0;
  int sakur=0, kur=0, norm=0, gem=0, sagem=0;
  string nama;
  double bb;
  list <Person> p;
  list <Person>::iterator it;
  Person data;
  scanf("%d", &n);
  int sumtb=0;
  for(int i=0;i<n;i++)
  {
    cin >> nama;
    scanf("%d %d %lf", &usia, &tb, &bb);
    sumtb+=tb;
    data.setPerson(nama, usia, tb, bb);
    p.push_back(data);
  }
  double ratatb = (1.0*sumtb)/n;
  for (it=p.begin();it!=p.end();it++) 
  {
        (*it).cetak();
        if ((*it).getTinggi() > ratatb) sum++;
        if ((*it).Status() == "sangat kurus") sakur++;
        else if ((*it).Status() == "kurus") kur++;
        else if ((*it).Status() == "normal") norm++;
        else if ((*it).Status() == "gemuk") gem++;
        else sagem++;
  }
    cout << ratatb << endl;
    cout << sum << endl;
    printf("%d %d %d %d %d\n", sakur, kur, norm, gem, sagem);
}