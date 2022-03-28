#include<bits/stdc++.h>
using namespace std;

class Box
{
    int length;
    int breadth;
    int height;
public:
    Box()
    {
        length = breadth = height = 0;
    }
    Box(int l,int b,int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    Box(Box &B)
    {
        length = B.length;
        breadth = B.breadth;
        height = B.height;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getHeight()
    {
        return height;
    }
    long long CalculateVolume()
    {
        return (long long)length * breadth * height;
    }


bool operator<(Box& b)
{
    if(length < b.length)
    {
        return true;
    }
	else if(length == b.length)
	{
		if(breadth < b.breadth)
		{
			return true;
		}
		else if(breadth == b.breadth)
		{
			if(height < b.height)
			{
				return true;
			}
		}
	}
	return false;
}
};
//Overload operator << as specified
ostream &operator<<(ostream &out, Box &B)
{
	out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
	return out;
}
void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}