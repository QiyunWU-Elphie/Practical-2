#include<iostream>
using namespace std;

int power(int a,int n){
  if(n==0) return 1;
  if(n%2==0) return power(a,n/2)*power(a,n/2);
  if(n%2!=0) return a*power(a,n/2)*power(a,n/2);
}

int main(){
  int a,n;
  cout<<"a: ";
  cin>>a;
  cout<<"n: ";
  cin>>n;
  cout<<power(a,n)<<endl;
}