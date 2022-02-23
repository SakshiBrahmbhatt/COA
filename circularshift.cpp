#include<iostream>
using namespace std;
#define MAX 50
class Countershift
{
    public:
    int a[MAX],b[MAX],i,j,n,m,temp,t;
    int left()
    {
        cout<<"How much bit of binary no. you want to enter?:";
        cin>>n;
        cout<<"Enter "<<n<<" bit binary one by one:";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"counter shift left of ";
        for(i=0;i<n;i++)
        {
            cout<<a[i];
        }
        cout<<" will be ";
        temp=a[0];
        for(i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
        for(i=0;i<n;i++)
        {
            cout<<a[i];
        }
        return 0;
    }
    int right()
    {
     cout<<"How much bit of binary no. you want to enter?:";
        cin>>m;
        cout<<"Enter "<<m<<" bit binary one by one:";
        for(j=0;j<m;j++)
        {
            cin>>b[j];
        }
        cout<<"counter shift right of ";
        for(j=0;j<m;j++)
        {
            cout<<b[j];
        }
        cout<<" will be ";
        t=b[m-1];
        for(j=m-1;j>=0;j--)
        {
            b[j]=b[j-1];
        }
        b[0]=t;
        for(j=0;j<m;j++)
        {
            cout<<b[j];
        }
        return 0;   
    }
};
int main()
{
    Countershift c;
    int op;
    while(op!=3)
    {
    cout<<endl<<"Enter the no to get counter shift of that no.";
    cout<<endl<<"1. left"<<endl;
    cout<<"2. right"<<endl;
    cout<<"3. exit"<<endl;
    cin>>op;
    switch(op)
    {
        case 1:
        c.left();
        break;
        case 2:
        c.right();
        break;
        case 3:
        cout<<"Have a nice day";
        break;
        default:
        cout<<"Select proper option";
        break;
    }
    }
    return 0;
}