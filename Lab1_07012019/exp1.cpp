#include<iostream>
using namespace std;

int pow(int n, int m)
{
	int p=1;
	
	if(m==0)
		return 1;
	
	for(int i=0;i<m;i++)
		p=p*n;
	
	return p;
	}

int dec_2_bin(int dec)
{
	int bin,temp,rem,i=0;
	
	bin=0;
	temp=0;
	
	while(dec>0)
	{   
		i++;
		rem=dec%2;
		temp=temp*10+rem;
		dec=dec/2;
		}
	
	while(i>0)
	{
		
		}
	
	return bin;
	}

int bin_2_dec(int bin)
{
	int rem,dec,p;
	
	p=0;
	dec=0;
	
	while(bin>0)
	{
		rem=bin%10;
		dec=dec+rem*pow(2,p);
		p++;
		bin=bin/10;
		}
	return dec;
	}

int main()
{
	int n,cnvrt,c;
	do{
		cout<<"Enter 1 to convert decimal to binary"<<endl;
		cout<<"Enter 2 to convert binary to decimal"<<endl;
		cout<<"Enter 0 to quit"<<endl<<endl; 
		
		cout<<"Enter choice:";
		cin>>c;
		cout<<"Enter number to be convertd:";
		cin>>n;
		
		switch(c)
		{
			case 1: cnvrt=dec_2_bin(n);
					cout<<"Binary equivalent is:"<<cnvrt<<endl;
					break;
			case 2: cnvrt=bin_2_dec(n);
					cout<<"Decimal equivalent is:"<<cnvrt<<endl;
					break;
			}
		}while(c!=0);
	cout<<"test";
	cout<<"test";
	
	
	return 0;
	}
