#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#define TARGET 'e'

int main(int argc, char *argv[]){
  if(argv < 2){cout<<"one command line argument needed\n"; return -1;}
  int n = strlen(argv[1]);
  char *a = new char[n*2+3];
  if(!a){cout<<"allocation failed.\n"; return -1;}
  a[0] = '!';
  //







  cout<<a<<endl;

  string s = "!";
  s +=argv[1];
  s +=".";
  int pos =0;



  cout<<s<<endl;
}
