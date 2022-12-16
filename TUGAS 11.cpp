#include <iostream>
using namespace std;

int main (){
  int p, *i;

  cout << "Maksukan nilai =";
  cin >> p;

  i=&p;
  cout << *i <<" ";
  (*i)++;
  cout << *i <<" ";
  (*i)--;
  cout << *i <<" ";
  getchar();
}