#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main(int argc,char** argv)
{
	stack<int> s;
	for (int i=0;i<10;i++)
	{
		s.push(i*i);
	}
	cout<<"visit all data:"<<endl;
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}

	return 0;
}



/*#include <deque>
#include <string>
#include <iostream>

using namespace std;

int main(int argc,char** argv)
{
	deque<int> d;
	for (int i=0;i<10;i++)
	{
		d.push_back(i*i);
	}
	cout<<" visit: "<<endl;
	for (deque<int>::iterator it=d.begin();it!=d.end();it++)
	{
		cout<<(*it)<<" ";
	}
	d.push_front(22);
	d.push_front(45);
	cout<<"\n visit as array: "<<endl;
	for (i=0;i<d.size();i++)
	{
		cout<<d[i]<<" ";
	}
	d.clear();
	cout<<"\n visit as array: "<<endl;
	for (i=0;i<d.size();i++)
	{
		cout<<d[i]<<" ";
	}
	d.push_front(1);
	d.push_front(2);
	d.push_front(3);
	d.push_front(4);
	d.push_front(5);
	d.push_front(6);
	d.push_front(7);
	cout<<endl;
	d.pop_front();
	d.pop_back();
	cout<<"\n visit as array: "<<endl;
	for (i=0;i<d.size();i++)
	{
		cout<<d[i]<<" ";
	}
	return 0;
}

*/

/*#include <string>
#include <iostream>
#include <map>
using namespace std;


int main(int argc,char** argv)
{
	multimap<string,double> mm;
	mm.insert(pair<string,double>("liyannfeng",1.234));
	mm.insert(pair<string,double>("liyouxun",2.345));
	mm.insert(pair<string,double>("lirui",3.456));
	mm.insert(pair<string,double>("liqiang",4.567));
	mm.insert(pair<string,double>("wangqian",5.678));


	cout<<"result:"<<endl;
	for (multimap<string,double>::iterator it=mm.begin();it!=mm.end();it++)
	{
		cout<<(*it).first<<" : "<<(*it).second<<endl;
	}
	
	return 0;
}*/
/*int main(int argc,char** argv)
{
	map<char,int> m;
	for (int i=0;i<10;i++)
	{
		m[i+'0']=i*i;
	}
	string s="12345678";
	int result=0;
	for (i=0;i<s.size();i++)
	{
		result*=10;
		result+=(s[i]-'0');
	}
	cout<<"result:"<<result<<endl;
	return 0;
}*/

/*int main(int argc,char** argv)
{
	map<string,double> m;
	m["abc"]=1.23;
	m["def"]=4.56;
	m["ghi"]=7.89;
	for (map<string,double>::iterator it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<" : "<<(*it).second<<endl;
	}
	return 0;
}*/


/*#include <iostream>
#include <set>
using namespace std;

struct Comp
{
    //重载()
    bool operator()(const int &a, const int &b)
    {
        return a > b;
    }
};

int main(int argc,char** argv)
{
	set<int,Comp> s;
	for (int i=0;i<10;i++)
	{
		s.insert(100-i*i);
	}
	cout<<"iterator:"<<endl;
	for (set<int,Comp>::iterator it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"reverse iterator:"<<endl;;
	for (set<int,Comp>::reverse_iterator rit=s.rbegin();rit!=s.rend();rit++)
	{
		cout<<*rit<<" ";
	}
	cout<<endl;
	return 0;
}*/


/*#include <iostream>
#include <string>
#include <cstdio>
#include <sstream>
using namespace std;

//c++ 方法 把数转换为string
 string converToString(double x)
 {
     ostringstream o;
     if( o << x)
     {
         // str()没有'\0' c_str有
         return o.str();
     }
     return "error";
 }
 
 double converFromString(const string &s)
 {
     istringstream i(s);
     double x;
     if( i >> x)
     {
         return x;
    }
     //if error
     return 0.0;
}

int main(int argc,char** argv)
{
	string s="12345";
	int num=converFromString(s);
	cout<<"num:"<<num<<endl;
	return 0;
}*/

/*int main(int argc,char ** argv)
{
	string s1,s2,s3;
	char ss1[20],ss2[20],ss3[20];
	sscanf("liyanfeng linrui liqiang","%s%s%s",ss1,ss2,ss3);
	s1=ss1;
	s2=ss2;
	s3=ss3;
	cout<<"s1:"<<s1<<endl;
	cout<<"s2:"<<s2<<endl;
	cout<<"s3:"<<s3<<endl;

	int a,b,c;
	sscanf("12,24 3","%d,%d%d",&a,&b,&c);
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl;
	cout<<"c:"<<c<<endl;

	return 0;
}*/

/*int main(int argc,char** argv)
{
	string s="liyanfeng";
	cout<<"s : "<<s<<endl;
	s.reserve();
	cout<<"s : "<<s<<endl;
	cout<<s.empty()<<endl;
	for (int i=0;i<s.size();i++)
	{
		cout<<s[i]<<" ";
	}
	cout<<endl;
	return 0;
}
*/
/*int main(int agc,char** argv)
{
	string s="0123456789";
	string::iterator it=s.begin();
	cout<<"s:"<<s<<endl;
	s.erase(it+3);
	cout<<"s:"<<s<<endl;
	s.erase(it+1,it+4);
	cout<<"s:"<<s<<endl;
	cout<<"s:"<<s<<endl;
	return 0;
}*/