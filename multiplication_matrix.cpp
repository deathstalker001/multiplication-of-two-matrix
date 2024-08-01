#include<iostream>
using namespace std;
class Test
{
	private: int a[5][5],b[5][5],c[5][5],m,n,p,q,i,j,k;
	public: void input();
			void display();
};
void Test::input()
{
	char ch;
	label:cout<<"\nEnter the rows and coloumns of 1st matrix:";
	cin>>m>>n;
	cout<<"\nEnter the rows and coloumns of 2nd matrix:";
	cin>>p>>q;
	if(n==p)
	{
		cout<<"Enter the values of the 1st matrix:";
		for(i=0;i<m;++i)
			for(j=0;j<n;++j)
				cin>>a[i][j];
		cout<<"\nEnter the value of the 2nd matrix:";
		for(i=0;i<p;++i)
			for(j=0;j<q;++j)
				cin>>b[i][j];
	}
	else
	{
		cout<<"\nWrong Input!!!!Coloumn no. of 1st matrix is not equal to Row no. of 2nd matrix";
		cout<<"\nIf you want to continue Press 'y' and if you don't then Press 'n':";
		cin>>ch;
		if(ch=='y')
			goto label;
		else
			exit(0);
	}
}
void Test::display()
{
	cout<<"\nThe new matrix is:\n";
	for(i=0;i<m;++i)
	{
		for(j=0;j<q;++j)
		{
			c[i][j]=0;
			for(k=0;k<n;++k)
				c[i][j]=c[i][j]+(a[i][j]*b[k][j]);
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	Test t;
	t.input();
	t.display();
	return 0;
}
