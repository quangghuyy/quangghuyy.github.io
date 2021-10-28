#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int i,a,pw;
	int huy;
	do{
		printf("Ai dep trai nhat 12c3k42 ? \n Nguoi dep trai nhat 12c3 : ");
		scanf("%d", &pw);
		if(pw!=huy)
		printf("Sai roi nhap lai di cu \n");
	}
	while(pw!=huy);
	printf("Dung roiiiiii \n");
	Sleep(1000);
	system("cls");
	char j=177 , k=209;
	printf("\n");
	std::cout<<"\t\t\t\t\t\t\t\t\t\t\t\tloading...\n";
	std::cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	for(int i=0;i<26;i++)
	{
		std::cout<<j;
	}
	std::cout<<"\r";
	std::cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	for(int i=0;i<26;i++)
	{
		std::cout<<k;
		Sleep(100);
	}
	printf("\n");
	Sleep(1000);
	string line;
	getline(cin,line);
	ifstream file("E:\\huy.txt");
	while(!file.eof())
	{
	getline(file,line);
	cout<<line<<endl;;
	Sleep(20);
	}
	}	
