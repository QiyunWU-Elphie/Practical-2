#include<iostream>
using namespace std;

int swap(int *x, int *y){
  int t;
  t=*x;
  *x=*y;
  *y=t;
}

int main(){
int x,y;
cout<<"x:";
cin>>x;
cout<<"y:";
cin>>y;
swap(&x, &y);

cout<<"x is "<<x<<endl;
cout<<"y is "<<y<<endl;
return 0;
}
