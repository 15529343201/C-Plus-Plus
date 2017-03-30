//STL map与 multimap
/*
map(映射),multimap(多映射)
红黑树(数据结构)
基本操作
  insert:4种方法
  count和find
  erase:3种方法
注意:不能通过find进行修改
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
	
	grade.insert(make_pair("张飞",99));
	grade.insert(make_pair("刘备",56));
	grade["关羽"]=87;
	
	
	cout<<"最简单的查找: "<<endl;
	cout<<grade["刘备"]<<endl;
	cout<<a[3]<<endl;
	
	cout<<"map里一共有: "<<a.size()<<"个key-value键值对"<<endl;
	cout<<"这些数据是: "<<endl;
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
	
	cout<<endl<<"multimap里有"<<ma.size()<<"个数据."<<endl;
	multimap<int,string>::const_iterator im;
	for(im=ma.begin();im!=ma.end();++im)
	{
		cout<<"Key: "<<im->first<<" ";
		cout<<"Value: "<<im->second.c_str();
		cout<<endl; 
	}
	cout<<"multimap里有"<<ma.count(1000)<<"个1000"<<endl;
	
	multimap<int,string>::const_iterator fi;
	fi=ma.find(45);
	if(fi!=ma.end())
	{
		cout<<"找到了: "<<fi->first<<"="<<fi->second;
	}else{
		cout<<"没找到!"<<endl; 
	}
	cout<<endl;
	
	fi=ma.find(1000);
	if(fi!=ma.end())
	{
		cout<<"找到了1000！"<<endl;
		size_t n=ma.count(1000);
		for(size_t i=0;i<n;++i)
		{
			cout<<"\t Key: "<<fi->first;
			cout<<",Value["<<i<<"]=";
			cout<<fi->second<<endl;
			++fi;
		}
	}else{
		cout<<"没找到1000!"<<endl; 
	}
	
	if(ma.erase(-1)>0)
	  cout<<"删除-1成功! "<<endl;
	  
	multimap<int,string>::iterator iElementFound=ma.find(45);
	if(iElementFound!=ma.end())
	{
		ma.erase(iElementFound);
		cout<<"删除45成功!"<<endl;
	}
	
	ma.erase(ma.lower_bound(1000),ma.upper_bound(1000));
	
	return 0;
} 
/*
这些数据是:
Key: -1 Value: Minus One
Key: 1 Value: One
Key: 2 Value: Two
Key: 3 Value: Three
Key: 1000 Value: One Thousand
Key: 1000000 Value: One Million

multimap里有5个数据.
Key: -1 Value: Minus One
Key: 3 Value: Three
Key: 45 Value: Forty five
Key: 1000 Value: One Thousand
Key: 1000 Value: One Thousand
multimap里有2个1000
找到了: 45=Forty five
找到了1000！
         Key: 1000,Value[0]=One Thousand
         Key: 1000,Value[1]=One Thousand
删除-1成功!
删除45成功!
*/ 
