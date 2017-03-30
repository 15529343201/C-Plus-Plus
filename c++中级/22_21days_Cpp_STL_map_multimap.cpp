//STL map�� multimap
/*
map(ӳ��),multimap(��ӳ��)
�����(���ݽṹ)
��������
  insert:4�ַ���
  count��find
  erase:3�ַ���
ע��:����ͨ��find�����޸�
*/
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<int,string> a;
	map<string,int> grade;
	multimap<int,string> ma;
	
	a.insert(map<int,string>::value_type(1,"One"));
	a.insert(map<int,string>::value_type(2,"Two"));
	a.insert(map<int,string>::value_type(3,"Three"));
	a.insert(make_pair(-1,"Minus One"));
	a.insert(pair<int,string>(1000,"One Thousand"));
	a[1000000]="One Million";
	
	grade.insert(make_pair("�ŷ�",99));
	grade.insert(make_pair("����",56));
	grade["����"]=87;
	
	
	cout<<"��򵥵Ĳ���: "<<endl;
	cout<<grade["����"]<<endl;
	cout<<a[3]<<endl;
	
	cout<<"map��һ����: "<<a.size()<<"��key-value��ֵ��"<<endl;
	cout<<"��Щ������: "<<endl;
	map<int,string>::const_iterator i;
	for(i=a.begin();i!=a.end();++i)
	{
		cout<<"Key: "<<i->first<<" ";
		cout<<"Value: "<<i->second.c_str();
		cout<<endl;
	}
	
	ma.insert(multimap<int,string>::value_type(3,"Three"));
	ma.insert(multimap<int,string>::value_type(45,"Forty five"));
	ma.insert(make_pair(-1,"Minus One"));
	ma.insert(pair<int,string>(1000,"One Thousand"));
	ma.insert(pair<int,string>(1000,"One Thousand"));
	
	cout<<endl<<"multimap����"<<ma.size()<<"������."<<endl;
	multimap<int,string>::const_iterator im;
	for(im=ma.begin();im!=ma.end();++im)
	{
		cout<<"Key: "<<im->first<<" ";
		cout<<"Value: "<<im->second.c_str();
		cout<<endl; 
	}
	cout<<"multimap����"<<ma.count(1000)<<"��1000"<<endl;
	
	multimap<int,string>::const_iterator fi;
	fi=ma.find(45);
	if(fi!=ma.end())
	{
		cout<<"�ҵ���: "<<fi->first<<"="<<fi->second;
	}else{
		cout<<"û�ҵ�!"<<endl; 
	}
	cout<<endl;
	
	fi=ma.find(1000);
	if(fi!=ma.end())
	{
		cout<<"�ҵ���1000��"<<endl;
		size_t n=ma.count(1000);
		for(size_t i=0;i<n;++i)
		{
			cout<<"\t Key: "<<fi->first;
			cout<<",Value["<<i<<"]=";
			cout<<fi->second<<endl;
			++fi;
		}
	}else{
		cout<<"û�ҵ�1000!"<<endl; 
	}
	
	if(ma.erase(-1)>0)
	  cout<<"ɾ��-1�ɹ�! "<<endl;
	  
	multimap<int,string>::iterator iElementFound=ma.find(45);
	if(iElementFound!=ma.end())
	{
		ma.erase(iElementFound);
		cout<<"ɾ��45�ɹ�!"<<endl;
	}
	
	ma.erase(ma.lower_bound(1000),ma.upper_bound(1000));
	
	return 0;
} 
/*
��Щ������:
Key: -1 Value: Minus One
Key: 1 Value: One
Key: 2 Value: Two
Key: 3 Value: Three
Key: 1000 Value: One Thousand
Key: 1000000 Value: One Million

multimap����5������.
Key: -1 Value: Minus One
Key: 3 Value: Three
Key: 45 Value: Forty five
Key: 1000 Value: One Thousand
Key: 1000 Value: One Thousand
multimap����2��1000
�ҵ���: 45=Forty five
�ҵ���1000��
         Key: 1000,Value[0]=One Thousand
         Key: 1000,Value[1]=One Thousand
ɾ��-1�ɹ�!
ɾ��45�ɹ�!
*/ 
