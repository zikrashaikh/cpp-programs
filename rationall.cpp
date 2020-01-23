#include<iostream>
using namespace std;
class rational
{
	public:
	int numerator,denominator;
	public:
		void getdata()
		{
			cout<<"Enter the numerator :";
			cin>>numerator;
			cout<<"\n Enter the denominator:";
			cin>>denominator;
		}
		void operator+(rational);
		void operator-(rational);
  		void operator/(rational);
		void operator*(rational);
};
void rational::operator+(rational r1)
{
	rational temp;

	 temp.numerator=(numerator*r1.denominator)+(r1.numerator*denominator);
	 temp.denominator=denominator*r1.denominator;
	
	 cout<<"\nrational no. after addition";
	 cout<<"\n numerator="<<temp.numerator<<"\n denominator ="<<temp.denominator;
}
void rational::operator-(rational r1)
{
	rational temp;

	 temp.numerator=(numerator*r1.denominator)-(r1.numerator*denominator);
	 temp.denominator=denominator*r1.denominator;
	
	 cout<<"\nrational no. after subtraction";
	 cout<<"\n numerator="<<temp.numerator<<"\n denominator ="<<temp.denominator;
}
void rational::operator*(rational r1)
{
	rational temp;

	 temp.numerator=numerator*r1.numerator;
	 temp.denominator=denominator*r1.denominator;
	
	 cout<<"\nrational no. after multiplication";
	 cout<<"\n numerator="<<temp.numerator<<"\n denominator ="<<temp.denominator;
}
void rational::operator/(rational r1)
{
	rational temp;

	 temp.numerator= numerator/r1.denominator;
	 temp.denominator=r1.numerator/denominator;
	
	 cout<<"\nrational no. after division";
	 cout<<"\n numerator="<<temp.numerator<<"\n denominator ="<<temp.denominator;
}
int main()
{
		rational r1,r2;
		r1.getdata();
		r2.getdata();
		r1+r2;
		r1-r2;
		r1*r2;
		r1/r2;
}
