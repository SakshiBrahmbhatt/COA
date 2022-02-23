#include<iostream>
using namespace std;
#define MAX 50
class Convertor
{
    int a[MAX],temp=0,i=0,n,m,j,t,lb,sum=0,s=1,z;
    char b[MAX];
    public:
    int dectobi()
    {
      cout<<"Enter the decimal no. to convert to binary no.:";
      cin>>n;
      for(i=0;n>0;i++)
      {
          a[i]=n%2;
          n=n/2;
      }
      cout<<"Output:- ";
      for(j=i-1;j>=0;j--)
      {
          cout<<a[j];
      }
      return 0;
    }
    int dectohex()
    {
      cout<<"Enter the decimal no. to convert to hexadecimal no.:";
      cin>>m;
         while (m != 0)
         {
        temp = m % 16;
        if (temp < 10) {
            b[i] = temp + 48;
            i++;
        }
        else {
            b[i] = temp + 55;
            i++;
        }
        m = m / 16;
         }
         cout<<"Output:- ";
    for(j=i-1;j>=0;j--)
    {
        cout<<b[j];
    }
      return 0;
    }
    int bitodec()
    {
        cout<<"How much bit of binary no. you want to enter?:";
        cin>>z;
        cout<<"Enter "<<z<<" bit of binary no. to convert to decimal no.:";
        cin>>t;
        while(t>0)
        {
            lb=t%10;
            sum=sum+(lb*s);
            s=s*2;
            t=t/10;            
        }
        cout<<"Output:- "<<sum;
        return 0;
    }
};
int main()
{
    Convertor c;
    int op;
    while(op!=4)
    {
    cout<<endl<<"Select from option:"<<endl;
    cout<<"1. decimal-to-binary"<<endl;
    cout<<"2. decimal-to-hexadecimal"<<endl;
    cout<<"3. binary-to-decimal"<<endl;
    cout<<"4. exit"<<endl;
    cin>>op;
    switch(op)
    {
        case 1:
        c.dectobi();
        break;
        case 2:
        c.dectohex();
        break;
        case 3:
        c.bitodec();
        break;
        case 4:
        cout<<"Have a nice day";
        break;
        default:
        cout<<"select proper option";
        break;
    }
    }
    return 0;
}