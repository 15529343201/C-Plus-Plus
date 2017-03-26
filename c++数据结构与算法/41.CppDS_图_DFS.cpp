#include<iostream>
#include<stack>
using namespace std;
#define MAX_VERTS 20
class Vertex//顶点
{
	public:
		
		Vertex(char lab){
			Label=lab;
			wasVisited=false;
		}
        bool wasVisited;
		char Label;
};

//图 
class Graph
{
	public:
		Graph();
		~Graph();
		void addVertex(char lab);
		void addEdge(int start,int end);
		void printMatrix();
		void showVertex(int v);
		void DFS();
	private:
		Vertex* vertexList[MAX_VERTS];
		int nVerts;
		int adjMat[MAX_VERTS][MAX_VERTS];
		int getAdjUnivisitedVertex(int v);//获得下一个节点 
};

void Graph::DFS()
{
	stack<int> gStack;
	vertexList[0]->wasVisited=true;
	showVertex(0);
	gStack.push(0);
	int v;
	while(gStack.size()>0)
	{
		v=getAdjUnivisitedVertex(gStack.top());
		if(v==-1)//如果没有下一个节点 
		  gStack.pop();
		else
		{
            vertexList[v]->wasVisited=true;		  
		    showVertex(v);
		    gStack.push(v);
	    }
	}
	cout<<endl;
	for(int j=0;j<nVerts;j++)
	  vertexList[j]->wasVisited=false;
}

int Graph::getAdjUnivisitedVertex(int v)
{
	for(int j=0;j<nVerts;j++)
	{
		if((adjMat[v][j]==1)&&(vertexList[j]->wasVisited==false))
		{
			return j;
		}
	}
	return -1;
}

void Graph::showVertex(int v)
{
	cout<<vertexList[v]->Label<<" ";
}

//构造函数
Graph::Graph()
{
	nVerts=0;
	for(int i=0;i<MAX_VERTS;i++)
	for(int j=0;j<MAX_VERTS;j++)
	{
		adjMat[i][j]=0;
	}
}

//增加一个顶点
void Graph::addVertex(char lab)
{
	vertexList[nVerts++]=new Vertex(lab);
}

//增加一条边
void Graph::addEdge(int start,int end)
{
	adjMat[start][end]=1;
	adjMat[end][start]=1;
}

void Graph::printMatrix()
{
	for(int i=0;i<nVerts;i++)
	{
		for(int j=0;j<nVerts;j++)
		  cout<<adjMat[i][j]<<" ";
		cout<<endl;
	}
}

Graph::~Graph()
{
	for(int i=0;i<nVerts;i++)
	  delete vertexList[i];
}
 
int main()
{
	Graph g;
	g.addVertex('A');
	g.addVertex('B');
	g.addVertex('C');
	g.addVertex('D');
	g.addVertex('E');
	
	g.addEdge(0,1);//A-B
	g.addEdge(0,3);//A-D
	g.addEdge(1,0);//B-A
	g.addEdge(1,4);//B-E
	g.addEdge(2,4);//C-E
	g.addEdge(3,0);//D-A
	g.addEdge(3,4);//D-E
	g.addEdge(4,1);
	g.addEdge(4,2);
	g.addEdge(4,3);
	
	g.printMatrix();
	
	cout<<"深度优先搜索的结果:"<<endl;
	g.DFS();
	return 0;
}
