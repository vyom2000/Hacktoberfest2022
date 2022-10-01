#include<iostream>
using namespace std;
class coord
{
int x,y;
public:
coord()
{
x=0;y=0;
}
coord(int i,int j)
{
x=i;
y=j;
}
void get_xy(int &i,int &j)
{
i=x;
j=y;
}
coord operator+(coord ob2);
coord operator=(coord ob2);
};
coord coord :: operator=(coord ob2)
{
x=ob2.x;
y=ob2.y;
return *this;
}
coord coord::operator+(coord ob2)
{
coord temp;
temp.x=x+ob2.x;
temp.y=y+ob2.y;
return temp;
}
int main()
{
coord ob1(10,20),ob2(90,30),o3,o4;
int x1,y1;
o3=ob1+ob2;
o3.get_xy(x1,y1);
cout<<x1<<y1;
o4=ob1;
o4.get_xy(x1,y1);
cout<<x1<<y1;
return 0;
}
