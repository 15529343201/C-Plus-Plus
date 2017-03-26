#include<iostream>
using namespace std;
#define MAX_VERTS 20
class Vertex//顶点
{
	public:
		
		Vertex(char lab){
			Label=lab;
		}
	private:
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
	private:
		Vertex* vertexList[MAX_VERTS];
		int nVerts;
		int adjMat[MAX_VERTS][MAX_VERTS];
		
};

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
	return 0;
}
