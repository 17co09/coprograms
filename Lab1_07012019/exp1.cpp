#include<iostream>
using namespace std;

float pow(int n, int m)
{
	float p=1;
	
	if(m==0)
		return 1;
	
	if(m>0)
		for(int i=0;i<m;i++)
			{
				//cout<<"test1"<<endl;
				p=p*n;
			}
	
	if(m<0)
		for(int i=m;i<0;i++)
			{
				//cout<<"test2"<<endl;
				p=p/n;
			}
	return p;
	}

int dec_2_bin(int dec)
{
	int bin,temp,rem,i;
	
	i=0;
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
		bin=bin*10+temp%10;
		temp=temp/10;
		i--;
		}
	
	return bin;
	}

float bin_2_dec(float bin)
{

	int rem,p,temp;
	float dec;
	p=0;
	dec=0;
	temp=bin;
	while(temp>0)
	{
		rem=temp%10;
		dec=dec+rem*pow(2,p);
		p++;
		temp=temp/10;
		}
	
	temp=bin;
	bin=bin-temp;
	
	p=-1;
	
	while(bin>0)
	{
		bin=bin*10;
		rem=bin;
		cout<<pow(2,p)<<endl;
		dec=dec+rem*pow(2,p);
		cout<<dec<<endl;
		p--;
		temp=bin;
		bin=bin-temp;
		if(bin>0.09)
		bin=0.1;
		}
	return dec;
	}

int main()
{
	int c;
	float n,cnvrt;
	do{
		cout<<"ifEnter 1 to convert decimal to binary"<<endl;
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
	
	
	return 0;
	}
