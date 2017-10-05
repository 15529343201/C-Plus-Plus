#include<iostream>  
#include<set>  
#include<string>
#include<algorithm>  
  
using namespace std;  
  
class CCompareStringNoCase  // 这是一个不分大小写的二元谓词的类，  
{  
public:  
    bool operator() (const string& str1,const string& str2) const  
    {  
        string str1LowerCase;  
        str1LowerCase.resize(str1.size());  
        transform(str1.begin(),str1.end(),str1LowerCase.begin(),::tolower);  
  
        string str2LowerCase;  
        str2LowerCase.resize(str2.size());  
        transform(str2.begin(),str2.end(),str2LowerCase.begin(),::tolower);  
  
        return (str1LowerCase<str2LowerCase);  
    }  
};  
  
int main()  
{  
    //         二元谓词  
    set<string,CCompareStringNoCase> names;  
    names.insert("xiao");  
    names.insert("Xiao");  
    names.insert("xIao");  
    names.insert("cui");  
    set<string,CCompareStringNoCase>::iterator iNameFound = names.find("Cui");  
    if(iNameFound != names.end())  
    {  
        cout << "找到了，" << *iNameFound << endl;  
    }  
    else  
    {  
        cout << "没有找到了，" << endl;  
    }  
  
  
    return 0;  
}  
/*输出结果
找到了，cui
*/ 
