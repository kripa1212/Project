//Dijkstra's algorithm for shortest path problem

#include<stdio.h>
#include<conio.h>
#define INFINITY 9999
#define MAX 10

void dijkstra(int G[MAX][MAX], int n, int startnode);
main(){
	int G[MAX][MAX],i,j,n,u;
	printf("Enter number of vertices: ");
	scanf("%d",&n);
	printf("\nEnter the cost adjacency matrix with entry 0 for nonadjacent vertices:\n");
	
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	scanf("%d",&G[i][j]);
	
	printf("\nEnter the starting node: ");
	scanf("%d",&u);
	dijkstra(G,n,u);
}
void dijkstra(int G[MAX][MAX], int n, int startnode){
	int cost[MAX][MAX], distance[MAX], pred[MAX];
	int visited[MAX], count, mindistance, nextnode, i,j;
	
	for(i=1; i<=n; i++)
	for(j=1; j<=n; j++)
	if(G[i][j]==0)
	cost[i][j]= INFINITY;
	else
	cost[i][j]= G[i][j];
	
	for(i=1; i<=n; i++){
		distance[i]=cost[startnode][i];
		pred[i]=startnode;
		visited[i]=0;
	}
	distance[startnode]=0;
	visited[startnode]=1;
	count=1;
	while(count<n-1){
		mindistance=INFINITY;
	for(i = 1; i <= n; i++) {
    if (distance[i] < mindistance && !visited[i]) {
        mindistance = distance[i];
        nextnode = i;
    }
}
visited[nextnode] = 1;

for(i = 1; i <= n; i++) {
    if (!visited[i] && mindistance + cost[nextnode][i] < distance[i]) {
        distance[i] = mindistance + cost[nextnode][i];
        pred[i] = nextnode;
    }
}
		count++;
	}
	for(i=1;i<=n; i++)
	if(i!=startnode){
		printf("\nDistance of node %d = %d",i,distance[i]);
		printf("\nPath=%d",i);
		j=i;
		do{
			j=pred[j];
			printf("<-%d",j);
		}while(j!=startnode);
	}
}