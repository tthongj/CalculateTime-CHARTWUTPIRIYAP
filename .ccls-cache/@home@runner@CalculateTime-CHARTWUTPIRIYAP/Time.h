#include <iostream>
using namespace std;
#include <iomanip>

void getTime(int &h, int &m){
  char a;
  cout << "Enter hours and mins: ";
  cin >> h >> a >> m;
}

int subtract(int h1, int m1, int h2, int m2){
  int h, m;
  m= m2-m1;
  h= h2-h1;
  if(m<0){
    h-=1;
  }
  if(h<0){
    h+=24;
  }
  return h;
}

int subtract(int m1, int m2){
  int m;
  m= m2-m1;
  if(m<0){
    m+=60;
  }
  return m;
}