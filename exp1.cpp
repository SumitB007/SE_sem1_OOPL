#include<iostream> 
#include<stdio.h> 
#include<conio.h> 
using namespace std; 
class complex 
{ 
  float x; 
  float y; 
  public: 
  complex operator+(complex); 
  complex operator-(complex); 
  complex operator*(complex); 
  complex operator/(complex); 
  complex(); 
  complex(float,float); 
  void display(); 
  void getdata(); 
}; 
complex::complex() 
{ 
  x=0; 
  y=0; 
} 
complex::complex(float a, float b) 
{ 
  x=a; 
  y=b; 
} 
complex complex::operator+(complex c) 
{ 
  complex temp; 
  temp.x=x+c.x; 
  temp.y=y+c.y; 
  return(temp); 
} 
complex complex::operator-(complex c) 
{ 
  complex temp1; 
  temp1.x=x-c.x; 
  temp1.y=y-c.y; 
  return(temp1); 
} 
complex complex::operator*(complex c) 
{ 
  complex temp2; 
  temp2.x=(x*c.x)-(y*c.y); 
  temp2.y=(y*c.x)+(x*c.y); 
  return(temp2); 
} 
complex complex::operator/(complex c) 
{ 
  complex temp3; 
  temp3.x=((x*c.x)+(y*c.y))/((c.x*c.x)+(c.y*c.y)); 
  temp3.y=((y*c.x)-(x*c.y))/((c.x*c.x)+(c.y*c.y)); 
  return(temp3); 
} 
void complex::getdata() 
{ 
  cout<<" Enter real part : "; 
  cin>>x; 
  cout<<" Enter imaginary part : "; 
  cin>>y; 
} 
void complex::display() 
{ 
  cout<<x<<"+"<<y<<"i\n"; 
} 
int main()
{  
  complex c1, c2, c3, c4, c5, c6; 
  cout<<"\n Enter first number"<<endl;
  c1.getdata(); 
  cout<<"\n Enter second number"<<endl; 
  c2.getdata(); 
  c3=c1+c2; 
  c4=c1-c2; 
  c5=c1*c2; 
  c6=c1/c2; 
  cout<<"\n The first number is : "; 
  c1.display(); 
  cout<<"\n The second number is : "; 
  c2.display(); 
  cout<<"\n The addition is : "; 
  c3.display(); 
  cout<<"\n The subtraction is : "; 
  c4.display(); 
  cout<<"\n The multiplication is : "; 
  c5.display(); 
  cout<<"\n The division is : "; 
  c6.display(); 
}
