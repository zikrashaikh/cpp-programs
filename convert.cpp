#include<iostream>
using namespace std;
class conversion
{
public:

virtual void accept1()=0;
virtual void accept2()=0;
virtual void convert1()=0;
virtual void convert2()=0;
};
class weight :public conversion
{
public:
float gm,kgm;
void accept1()
{
	cout<<"ENTER grams to convert";
	cin>>gm;
}
void accept2()
{
	cout<<"enter kilogram";
	cin>>kgm;
}
void convert1()
{
	cout<<"after conversion="<<gm/1000<<"kgm\n";
}
void convert2()
{
	cout<<"after conversion kgm="<<kgm*1000<<"gm\n";
}
};
class volume :public conversion
{
	public:
	public:
float ml,l;
void accept1()
{
	cout<<"ENTER ml to convert";
	cin>>ml;
}
void accept2()
{
	cout<<"enter litre";
	cin>>l;
}
void convert1()
{
	cout<<"after conversion="<<ml/1000<<"l\n";
}
void convert2()
{
	cout<<"after conversion kgm="<<l*1000<<"ml\n";
}
};
class currency :public conversion
{
	public:
	public:
float r,p;
void accept1()
{
	cout<<"ENTER rupee to convert";
	cin>>r;
}
void accept2()
{
	cout<<"enter paise";
	cin>>p;
}
void convert1()
{
	cout<<"after conversion="<<p/100<<"r\n";
}
void convert2()
{
	cout<<"after conversion ="<<r*100<<"p\n";
}
};
int main()
{
	int ch,ch1,ch2;
	weight w;
	volume v;
	currency c;
		cout<<"enter choice 1 weight 2 volume\n";
		cin>>ch;
		switch(ch)
		{
		 case 1:
		 	cout<<"enter choice 1 for g to kg 2 for kg to g  \n";
			cin>>ch1;
		 	if(ch1=0)
		 	{
				w.accept1();
				w.convert1();
			}
			else
			{
				w.accept2();
				w.convert2();
			}
			break;
		case 2:
			cout<<"enter choice 1 for ml to l 2 for ml to l  \n";
			cin>>ch1;
		 	if(ch1=0)
		 	{
				v.accept1();
				v.convert1();
			}
			else
			{
				v.accept2();
				v.convert2();
			}
			break;
		
		case 3:
			cout<<"enter choice 1 for p to r 2 for r to p  \n";
			cin>>ch1;
		 	if(ch1=0)
		 	{
				c.accept1();
				c.convert1();
			}
			else
			{
				c.accept2();
				c.convert2();
			}
			break;
			
		case 4:exit(0);
	}
}


