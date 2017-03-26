#include<iostream>
#include<list>
using namespace std;

class Vertex
{
	public:
		char Label;
		Vertex(char lab){
			Label=lab;
		}
};

ostream& operator<<(ostream& out,const Vertex& v)
{
	cout<<v.Label;
	return out;
}

template<class T>
class Graph
{
	public:
	//n=5;
	Graph(const int vertices):n(vertices)//保存到变量n里
	{
		VertexList=new T*[n];//保存5个顶点 
		HeadNodes=new list<int>[n];//保存5个链表
		nVerts=0; 
	}
	~Graph()
	{
		delete[] VertexList;
		delete[] HeadNodes;
	}
	void addVertex(T* v);
	void addEdge(int start,int end);
	void printVertice();
	void printAdjList();
	private:
		T** VertexList;//数组
		list<int>* HeadNodes;
		int n;//顶点总数 
		int nVerts;//计数 
};

template<class T>
void Graph<T>::addVertex(T* v)
{
	VertexList[nVerts++]=v;
}

template<class T>
void Graph<T>::addEdge(int start,int end)
{
	HeadNodes[start].push_back(end);
} 

template<class T>
void Graph<T>::printVertice()
{
	for(int i=0;i<nVerts;i++)
	  cout<<*VertexList[i]<<" ";
	cout<<endl;
}

template<class T>
void Graph<T>::printAdjList()
{
	for(int i=0;i<nVerts;i++)
	{
		cout<<i<<" -> ";
		for(list<int>::iterator iter=HeadNodes[i].begin();iter!=HeadNodes[i].end();++iter)
		{
			cout<<*iter<<" -> ";
		}
		cout<<"end"<<endl;
	}
}

int main()
{
//	Graph<char> g(5);
//	char a='A';
//	char b='B';
//	char c='C';
//	char d='D';
//	char e='E';
    Graph<Vertex> g(5);
    Vertex a('A');
    Vertex b('B');
    Vertex c('C');
    Vertex d('D');
    Vertex e('E');
    
	g.addVertex(&a);
	g.addVertex(&b);
	g.addVertex(&c);
	g.addVertex(&d);
	g.addVertex(&e);
	
	g.printVertice();
	
	g.addEdge(0,1);
	g.addEdge(0,3);
	g.addEdge(1,0);
	g.addEdge(1,4);
	g.addEdge(2,4);
	g.addEdge(3,0);
	g.addEdge(3,4);
	g.addEdge(4,1);
	g.addEdge(4,2);
	g.addEdge(4,3);
	
	g.printAdjList();
	
	system("pause");
	return 0;
}

/*
A B C D E
0 -> 1 -> 3 -> end
1 -> 0 -> 4 -> end
2 -> 4 -> end
3 -> 0 -> 4 -> end
4 -> 1 -> 2 -> 3 -> end
*/

