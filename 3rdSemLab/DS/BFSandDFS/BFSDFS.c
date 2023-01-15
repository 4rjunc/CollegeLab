#include<stdio.h>
#include<stdlib.h>
int g[10][10],n;

struct node
{
	int data;
	struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;
int dfs_visited[10];

void enqueue(int x)
{
	struct node *new;
	new = (struct node *)malloc(sizeof(struct node));
	new->data = x;
	new->next = NULL;
	if(front == NULL)
	{
		front = rear = new;
		rear = new;
	}

	else
	{
		rear->next = new;
		rear = new;
	}
}

int dequeue()
{
	struct node *temp;
	int d;
	temp = front;
	d = temp->data;
	front = front->next;
	free(temp);
	return d;
}

int isEmpty()
{
	return front == NULL;
}

void bfs()
{
	int i=0,j,visited[10],node;
	for(j=0;j<n;j++)
	{
		visited[j] = 0;
	}
	printf(" %d ",i);
	visited[i] = 1;
	enqueue(i);
	while(!isEmpty())
	{
		node = dequeue();

		for(j=0;j<n;j++)
		{
			if(g[node][j] == 1 && visited [j] == 0)
			{
				printf(" %d ",j);
				visited[j] = 1;
				enqueue(j);
			}
		}
	}
}

int dfs(int i)
{
	int j;
	printf(" %d ",i);
	dfs_visited[i] = 1;
	for(j=0;j < n;j++)
	{
		if(g[i][j] == 1 && dfs_visited[j] == 0)
			dfs(j);
	}
}

int main()
{
	int i,j,invalid = 0;
	printf("Enter the number of node in the graph: ");
	scanf("%d",&n);
	printf("Enter the adjancency matrix of graph\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&g[i][j]);
			if(g[i][j] != 0 && g[i][j] != 1)
			{
				invalid = 1;
			}
		}
	}
	if(invalid == 1)
	{
		printf("Invalid adjacency matrix. Enter only 1 or 0.\n");
		exit(1);
	}

	printf("\n********************\n");
	printf("     BFS TRAVERSAL    \n");
	printf("\n********************\n"); 
	bfs();

	printf("\n********************\n");
	printf("     DFS TRAVERSAL    \n");
	printf("\n********************\n"); 
	dfs(4);
}
