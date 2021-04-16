#include <iostream>

using namespace std;
class Calculator
{
    float x,y;
    int w,z;
public:
    Calculator(float a,float b)
    {
        x=a;
        y=b;
    }
    void add()
    {
        cout<<"\nSum of "<<x<<" and "<<y<<" is "<<x+y;
    }
    void sub()
    {
        cout<<"\nDifference of "<<x<<" and "<<y<<" is "<<x-y;
    }
    void mul()
    {
        cout<<"\nMultiplication of "<<x<<" and "<<y<<" is "<<x*y;
    }
    void div()
    {
        cout<<"\nDivision of "<<x<<" and "<<y<<" is "<<x/y;
    }
    void mod()
    {
        w=x;
        z=y;
        cout<<"\nModulus of "<<w<<" and "<<z<<" is "<<w%z;
    }
    ~Calculator()
    {
        cout<<"\nDestructor is called... ";

    }

};


int main()
{
    float n1,n2;
    int selection;
    char q;
    Calculator ob(n1,n2
                  );
oncemore:
    cout<<"\nEnter the selection for required operation(Addition(1),Subtraction(2),Multiplication(3),Division(4),Modulus(5)): ";
    cin>>selection;
    cout<<"\nEnter first number : ";
    cin>>n1;
    cout<<"\nEnter second number : ";
    cin>>n2;
    switch(selection)
    {
    case 1:
        {
        Calculator ob1(n1,n2);
        ob1.add();
        break;
        }
    case 2:
        {
        Calculator ob2(n1,n2);
        ob2.sub();
        break;
        }
    case 3:
        {
        Calculator ob3(n1,n2);
        ob3.mul();
        break;
        }
    case 4:
        {
        Calculator ob4(n1,n2);
        ob4.div();
        break;
        }
    case 5:
        {
        Calculator ob5(n1,n2);
        ob5.mod();
        break;
        }
    default:
        {
        cout<<"Enter valid selection !!!";
        }
    };
    cout<<"Do you want to perform calculations once again(Yes(y)/No(n))? ";
    cin>>q;
    if(q=='y')
    {
        system("CLS");
        goto oncemore;
    }
    else
    {
        ob.~Calculator();
    }


    return 0;
}
