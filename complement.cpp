#include<iostream>
using namespace std;
#define MAX 50
class Complement
{
    public:
    int a[MAX],b[MAX],i,j,n,m,t,lb,sum=0,s=1,temp=0,z=2;
    int onecomp()
    {
        cout<<"How much bit of binary no. you want to enter?:";
        cin>>n;
        cout<<"Enter "<<n<<" bit of binary no. one by one:";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"1's complement of ";
        for(i=0;i<n;i++)
        {
            cout<<a[i];
        }
        cout<<" is ";
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            a[i]=1;
            else
            a[i]=0;
        }
        cout<<"output:-";
        for(i=0;i<n;i++)
        cout<<a[i];
        return 0;
    }
    int twocomp()
    {
        cout<<"How much bit of binary no. you want to enter?:";
        cin>>m;
        cout<<"Enter "<<m<<" bit of binary no.:";
        cin>>t;
        while(t>0)
        {
            lb=t%10;
            sum=sum+(lb*s);
            s=s*2;
            t=t/10;            
        }
        while(m!=0)
        {
            temp=z;
            z=z*2;
            m--;
        }
        temp=temp-sum;
        for(i=0;temp>0;i++)
      {
          b[i]=temp%2;
          temp=temp/2;
      }
      cout<<"output:-";
      for(j=i-1;j>=0;j--)
      {
          cout<<b[j];
      }
        return 0;
    }
};
int main()
{
    Complement c;
    int op;
    while(op!=3)
    {
    cout<<endl<<"Enter the no to get complement of that no.";
    cout<<endl<<"1. 1's complement"<<endl;
    cout<<"2. 2's complement"<<endl;
    cout<<"3. exit"<<endl;
    cin>>op;
    switch(op)
    {
        case 1:
        c.onecomp();
        break;
        case 2:
        c.twocomp();
        break;
        case 3:
        cout<<"Have a nice day";
        break;
        default:
        cout<<"select proper option";
        break;
    }
    }
    return 0;
}