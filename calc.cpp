#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
    int a,b,num1,num2;
    cout<<"WHAT FUNCTION DO YOU WANNA PERFORM:";
    cout<<"1: ARITHMETIC FUNCTIONS\n 2: TRIGNOMETRIC FUNCTIONS \n 3: LOG FUNCTIONS\n 4: REVERSE TRIGNOMETRIC FUNCTIONS";
    cin>>a;
    if(a==1)
    {
        while(b!=0)
        {
            cout<<"WHAT ARITHMETIC OPEARTION DO YOU WANNA USE TODAY:";
            cout<<"1: Addition\n 2: Substraction\n 3: Multiplication\n 4: Division";
            cin>>b;
             switch (b)
             {
                case 1: 
                cout<<"Enter two numbers:";
                cin>>num1>>num2;
                cout<<"Sum is:"<<num1+num2;
                break;

                case 2:
                cout<<"Enter two numbers:";
                cin>>num1>>num2;
                cout<<"Difference is :"<<num1-num2;
                break;

                case 3:
                cout<<"Enter two numbers:";
                cin>>num1>>num2;
                cout<<"Product is"<<num1*num2;
                break;

                case 4:
                cout<<"Enter two numbers:";
                cin>>num1>>num2;
                cout<<"On dividing we get:"<<num1/num2;
                break;


             }
        }
    }
    else
    if(a==2)
    {
        while(b!=0)
        {
        cout<<"WHICH TRIGNOMETRIC FUNCTION DO YOU WANNA USE TODAY";
        cout<<"1: SIN\n 2: COS\n 3: TAN\n 4: COSEC\n 5: SEC\n 6:COT\n";
        cin>>b;
        switch(b)
        {
            case 1:
            cout<<"Enter a number";
            cin>>num1;
            cout<<"SIN value is:"<<sin(num1);
            break;

            case 2:
            cout<<"Enter a number:";
            cin>>num1;
            cout<<"COS value is:"<<cos(num1);
            break;

            case 3:
            cout<<"Enter a number:";
            cin>>num1;
            cout<<"TAN value is:"<<tan(num1);
            break;

            case 4:
            cout<<"Enter a number:";
            cin>>num1;
            cout<<"COSEC value is:"<<1/(sin(num1));
            break;

            case 5:
            cout<<"Enter a number:";
            cin>>num1;
            cout<<"SEC value is:"<<1/(cos(num1));
            break;

            case 6:
            cout<<"Enter a number:";
            cin>>num1;
            cout<<"COT value is:"<<1/(tan(num1));
            break;
        }
    }   
}
}