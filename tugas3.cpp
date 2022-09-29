#include <iostream>
using namespace std;
#define phi 3.1415;
int main () {

  double jari_jari, tinggi, luas, volume;

  count << "masukan nilai jari-jari tabung =";
  cin >> jari_jari ;
  cout << "masukan nilai tinggi tabung =";
  cin >> tinggi ;

  luas = jari_jari*jari_jari*phi;
  volume = luas*tinggi;

  cout << "luas tabung adalah " << luas << endl;
  cout << "volume tabung adalah " << volume << endl;
  return 0;
}