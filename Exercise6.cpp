#include<iostream>
using namespace std;
int count=0;

void Fibonacci(int n,int n1,int n2 ){
  if(count<n){
    cout<<n1<<" ";
    count+=1;
    Fibonacci(n,n2,n1+n2);
  }
  else cout<<endl;
}
int main() {
  int n;
   cout<<"n: ";
   cin>>n;
   Fibonacci(n,0,1);
   return 0;
}