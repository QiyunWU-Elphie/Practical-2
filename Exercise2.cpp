#include<iostream>
using namespace std;

double time_pos(double v,double a,double x0,double t0){
  return x0+v*t0+0.5*a*t0*t0;
}

int main(){
  double v,a,x0,delta_t,t0=0;
  int n;
  cout<<"enter the initial position, the speed and the acceleration: ";
  cin>>x0>>v>>a;
  cout<<"how many times you want to display the position of the moving body? ";
  cin>>n;
  cout<<"how often (in seconds) you want to update the position of the moving object? ";
  cin>>delta_t;

  cout<<"Acceleration:"<<a<<"; Initial speed:"<<v<<"; Initial position:"<<x0<<"; Number of times"<<n<<"; Delta t:"<<delta_t<<endl;
  cout<<"At time "<<t0<<" the position is "<<x0<<endl;

  while(n>1){
    t0=t0+delta_t;
    cout<<"At time "<<t0<<" the position is "<<time_pos(v,a,x0,t0)<<endl;
    n-=1;
  }
return 0;
}