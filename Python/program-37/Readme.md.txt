A graph is a pictorial representation of a set of objects where some pairs of objects are connected by links. The interconnected objects are represented by points termed as vertices, and the links that connect the vertices are called edges.

From the above definition it is clear that graphs are a set of vertices that are connected using edges and can be directed or undirected.
So what are the best data structures that we can use to implement graphs in python.
They are none other than dictionaries and lists.
We would be using a combination of both to show a node and their neighbouring vertices.
For eg the representation of above graph would look something just like this -
{
    1:[2,3],
    2:[1,3],
    3:[1,2,4],
    4:[3]
}
As simple as that.
Now coming on how to write a program to implement the same.
Well that’s also very easy the program below implements the above graph using two functions namely add_edge to add edges to the graph and show_graph to show all the edges in the graph

Let’s find the path between two nodes
Just add this function to your existing class to find a path between any two nodes.

And at the end of your file remove the last line and add this line -
print(g.find_path(‘4’, ‘1’))
Finally after running the program you should get the following result -
[‘4’, ‘3’, ‘1’]
So what’s happening here,

Let’s break the code into smaller pieces to understand it more properly.
So first things first, our function takes 3 arguments namely start, end and path. The first two variables, as the name suggests, store the start and end nodes. The third variable stores the current path while the function recursively calls itself to update that path.
Initially the path is set to an empty list and then we append the start node to it, after that we check if start==end , if yes then we return the path i.e. only the start node.
Then comes this -
for node in self.graph_dict[start]:
    if node not in path:
        newPath=self.find_path(node,end,path)
        if newPath:
            return newPath
        return None
This loop traverses all the neighbouring nodes of the start node and then recursively calls itself again until it finds a path from one of the neighbouring nodes to end node, if it finds a path it returns the path.
And remember that it does not return the shortest, it just returns the first path it finds.
