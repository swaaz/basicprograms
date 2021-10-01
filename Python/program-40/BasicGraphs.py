# the program below implements the above graph using two functions namely add_edge to add edges to the graph and show_graph to show all the edges in the graph.
class Graph:
    
    graph_dict={}
    
    def addEdge(self,node,neighbour):  
        if node not in self.graph_dict:
            self.graph_dict[node]=[neighbour]
        else:
            self.graph_dict[node].append(neighbour)
            
    def show_edges(self):
        for node in self.graph_dict:
            for neighbour in self.graph_dict[node]:
                print("(",node,", ",neighbour,")")
# paths between two nodes.
    def find_path(self,start,end,path=[]):
        path = path + [start]    
        if start==end:
            return path
        '''Loop for transversing all neighbouring nodes of the start node and then recursively calls itself again untill finds a path from one node to the end node.  '''
        for node in self.graph_dict[start]:
            if node not in path:
                newPath=self.find_path(node,end,path)
                if newPath:
                    return newPath
                return None       

g= Graph()
#inputs for the graphs nodes. i took pre defined nodes for easy observation of adjacent nodes.
g.addEdge('1', '2')
g.addEdge('1', '3')
g.addEdge('2', '3')
g.addEdge('2', '1')
g.addEdge('3', '1')
g.addEdge('3', '2')
g.addEdge('3', '4')
g.addEdge('4', '3')
g.show_edges()
print(g.find_path('4', '1'))

''' 
The output of the graph will be the same as the input we provided it -
( 1 ,  2 )
( 1 ,  3 )
( 2 ,  3 )
( 2 ,  1 )
( 3 ,  1 )
( 3 ,  2 )
( 3 ,  4 )
( 4 ,  3 )
#path of the nodes transversal
[‘4’, ‘3’, ‘1’]
'''
