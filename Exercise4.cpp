#include<iostream>
using namespace std;

void floyd_triangle(int n){
  int i,j,count=1;
  for(i=0;i<n;i+=1){
    for(j=0;j<=i;j+=1){
      cout<<count<<" ";
      count+=1;
    }
    cout<<endl;
  }
}
int main(){
  int n;
  cout<<"n: ";
  cin>>n;
  floyd_triangle(n);
  return 0;
}