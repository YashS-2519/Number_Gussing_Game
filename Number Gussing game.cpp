#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
  int n;
  cout<<endl<<"Simple Number Gussing Game"<<endl;
  int rn = rand()%100;
  
  again:
  cout<<endl<<"Enter number b/w 1-100: ";
  cin>>n;

  if(rn!=n){
    
    rn > n ? cout<<"Two low! "<<endl : cout<<"Two high! "<<endl;
    goto again;
    
  }else{
    
    cout<<"Congratulation! You win.";
    
  }
  
  return 0;
}

