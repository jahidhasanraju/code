//#include<bits/stdc++.h>
//using namespace std;
//#define mx 10
//int graph[mx][mx];
//int m;
//int vertext;
//int x[mx];
//void next_value(int k){
//    int j;
//    cout<<"k:"<<k<<endl;
//    x[k]=(x[k]+1)%(m+1);
//    cout<<"x[k]:"<<x[k]<<endl;
//    if(x[k]==0) return;
//    for(j=1;j<=vertext;j++){
//        if(graph[k][j] && x[k]==x[j])
//            break;
//    }
//    if(j==vertext+1) return;
//}
//void graphcolouring(int k){
//    next_value(k);
//    if(x[k]==0)return;
//    if(k==vertext)
//    for(int i=0;i<vertext;i++){
//        cout<<x[i]<<' ';
//    }
//    else graphcolouring(k+1);
//}
//int main(){
//        cout<<"num of vertext: ";
//       //int vertext;
//       cin>>vertext;
//       cout<<"relation of vertext: "<<endl;
//       for(int i=0;i<vertext;i++){
//        for(int j=0;j<vertext;j++){
//            int x;cin>>x;
//            graph[i][j]=x;
//        }
//       }
//       cout<<"num of colour: ";
//        cin>>m;
////       for(int i=0;i<vertext;i++){
////        for(int j=0;j<vertext;j++){
////            cout<<graph[i][j]<<' ';
////        }
////        cout<<endl;
////       }
//        graphcolouring(0);
//}
//*******//
#include <stdbool.h>
#include <stdio.h>
#define V 4
void printSolution(int color[]);
bool isSafe(int v, bool graph[V][V],int color[], int c)
{
    for (int i = 0; i < V; i++)
        if (graph[v][i] && c == color[i])
            return false;
    return true;
}
bool graphColoringUtil(bool graph[V][V], int m,int color[], int v)
{
    if (v == V)
        return true;
    for (int c = 1; c <= m; c++) {
        if (isSafe(v, graph, color, c)) {

                    color[v] = c;
            if (graphColoringUtil(graph, m, color, v + 1)== true)
                return true;
            color[v] = 0;
        }
    }
    return false;
}

/* This function solves the m Coloring
   problem using Backtracking. It mainly
   uses graphColoringUtil() to solve the
   problem. It returns false if the m
   colors cannot be assigned, otherwise
   return true and prints assignments of
   colors to all vertices. Please note
   that there may be more than one solutions,
   this function prints one of the
   feasible solutions.*/
bool graphColoring(bool graph[V][V], int m)
{
    // Initialize all color values as 0.
    // This initialization is needed
    // correct functioning of isSafe()
    int color[V];
    for (int i = 0; i < V; i++)
        color[i] = 0;

    // Call graphColoringUtil() for vertex 0
    if (graphColoringUtil(graph, m, color, 0)== false) {
        printf("Solution does not exist");
        return false;
    }

    // Print the solution
    printSolution(color);
    return true;
}

/* A utility function to print solution */
void printSolution(int color[])
{
    printf("Solution Exists:" " Following are the assigned colors \n");
    for (int i = 0; i < V; i++)
        printf(" %d ", color[i]);
    printf("\n");
}

// driver program to test above function
int main()
{
    /* Create following graph and test
       whether it is 3 colorable
      (3)---(2)
       |   / |
       |  /  |
       | /   |
      (0)---(1)
    */
    bool graph[V][V] = {
        { 0, 1, 1, 1 },
        { 1, 0, 1, 0 },
        { 1, 1, 0, 1 },
        { 1, 0, 1, 0 },
    };
    int m = 3; // Number of colors
    graphColoring(graph, m);
    return 0;
}
