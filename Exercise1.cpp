#include<iostream>
#include<cmath>
using namespace std;

bool check_point(double x, double y, double r, double a, double b){
  double d=(x-a)*(x-a)+(y-b)*(y-b)-(r*r);
  if(d<=0)
    return true;
  return false;
}

int main(){
  double x,y,a,b,r;
  cout<<"Point(x,y)=";
  cin>>x>>y;
  cout<<"Center(a,b)=";
  cin>>a>>b;
  cout<<"Radium=";
  cin>>r;
  if (check_point(x,y,r,a,b))
    cout<<"The point ("<<x<<","<<y<<") is in the circle.";
  else
    cout<<"The point ("<<x<<","<<y<<") is not in the circle."<<endl;
  return 0;
}