//Ankita Saha
//19HCS4069
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	while(b!=0)
	{
		int temp;
        temp=a;
	    a=b;
	    b=temp%b;
	
		
	}
	return a;

}
int GCD(int a,int b)
{
	if(b%a==0)
	return a;
	else
	return GCD(b,a%b);
	
}

int factorial(int num)
{
	int fact=1;
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
		
	}
	return fact;
}

int fact(int num)
{
	if(num==1)
	return 1;
	else
	return(num*fact(num-1));
}

int fib(int x)
{
	if(x<=1)
		return x;
		
	return(fib(x-1)+fib(x-2));
	
}

int fibonacci(int x)
{
	int a=0;
	int b=1;
	cout<<a<<" "<<b<<" ";
	for(int i=1;i<=x;i++)
	{
		int c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;		
	}
}
int power(int m,int n)
{
	int result=1;
	for(int i=1;i<=n;i++)
	{
		result=result*m;
		

	}
	return result;
	
}
int pow(int m,int n)
{
	if(n==0)
	return 1;
	while(n>0)
	return m*pow(m,n-1);
}


int main()
{
	char ch;
	
  do{
	cout<<"1.Greatest common denominator by iteration."<<endl;
	cout<<"2.Greatest common denominator by recursion."<<endl;
	cout<<"3.Power by iteration."<<endl;
	cout<<"4.Power by recursion."<<endl;
	cout<<"5.Fibonacci by recursion."<<endl;
	cout<<"6.Fibonacci by iteration."<<endl;
	cout<<"7.Factorial by recursion"<<endl;
	cout<<"8.Factorial by iteration."<<endl;
	
	int c,b,g;
	cout<<"Enter ur choice : ";
	cin >>g;
	switch (g)
	{
	 case 1:
	     {
		    cout<<"Enter first number::";
	           cin>>c;
	        cout<<"Enter second number::";
	           cin>>b;
	        cout<<"gcd value by iteration::"<<gcd(c,b)<<endl;
	        
	    }
	    break;
	 case 2:
	 	{
	 	    cout<<"Enter first number::";
	           cin>>c;
	        cout<<"Enter second number::";
	           cin>>b;
	        cout<<"gcd value by rec::"<<GCD(c,b)<<endl;
	        	
		 }
		 break;
	 case 3:
	   {
	   	int m,n;
	    cout<<"Enter the number::"<<endl;
	     cin>>m;
	    cout<<"Enter the power::"<<endl;
	     cin>>n;
	    cout<<"By recursion::"<<pow(m,n)<<endl;
	   	
		}
		break;	 
	 case 4:
	   {
	   	int m,n;
	    cout<<"Enter the number::"<<endl;
	     cin>>m;
	    cout<<"Enter the power::"<<endl;
	     cin>>n;
		cout<<"By iteration::"<<power(m,n)<<endl;
		}
		break;
	 case 5:
	   {
	   	cout<<"Fibonacci by reccursion::"<<endl;
	   	int a, i =0;
	   	cout<<"Enter the series number::"<<endl;
	    cin>>a;
	    while(i < a) 
	    {
         cout << " " << fib(i);
         i++;
        }
       }
	   break;
	 case 6:
	   {
	   	cout<<"Fibonacci by iteration"<<endl;
	   	int x;
	    cout<<"Enter the series number::";
	    cin>>x;
	    fibonacci(x);
		} 
		break; 	
	 case 7:
	 	{
	 		int num;
	        cout<<"Factorial num by recursion is::"<<endl;
	        cin>>num;
	        cout<<fact(num);
		 }
		 break;
	 case 8:
	    {
	    	int num;
	        cout<<"Factorial num by iteration is::"<<endl;
	        cin>>num;
	        cout<<factorial(num);
		}	 
		break;
	 		
	}
		cout<<"Do you wanna continue(y/n) : ";
	      cin >>ch;
	}while(ch=='y'||ch=='Y');

	return 0;
}
