#include<iostream>
using namespace std;

void Fibonacci(int n){
  int n1=0, n2=1;
  int i=2,t;
  if(n==1){
    cout<<n1;
  }
  if(n==2){
    cout<<n1<<" "<<n2;
  }
  else
    cout<<n1<<" "<<n2<<" ";
  while(n>2&&i<n){
    t=n2;
    n2=n1+n2;
    n1=t;
    cout<<n2<<" ";
    i+=1;
  }
  cout<<endl;
}
int main() {
  int n;
   cout<<"n: ";
   cin>>n;
   Fibonacci(n);
   return 0;
}