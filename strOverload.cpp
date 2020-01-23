#include<iostream>
#include<string.h>
using namespace std;

class String
{
            char *str;
            int len;
            public :
            String()
            {}
            String(char nm[])
            {
                        len=strlen(nm);
                        str=new char[len+1];
                        strcpy(str,nm);

            }
            void display()
            {
                        cout<<"String = "<<str<<endl;
            }
            String operator+(String ob)
            {
                        String temp;
                        temp.len=len+ob.len;
                        temp.str = new char[temp.len+1];
                        strcpy(temp.str,str);
                        strcat(temp.str,ob.str);
                        return temp;
            }

            
            
};

main()
{
            char s1[20],s2[30];
            cout<<"Enter 1st string : ";        
            cin>>s1;
            cout<<"Enter 2nd string : ";
            cin>>s2;
            String ob1(s1),ob2(s2);
            cout<<"1st string is ";
            ob1.display();
            cout<<"2nd string is ";
            ob2.display();

            cout<<"After concatinated String : ";
            String ob3;
            ob3=ob1+ob2;
            ob3.display();

            
            
        

}
