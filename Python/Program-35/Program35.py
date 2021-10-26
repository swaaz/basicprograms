class Node:    
        def _init_(self,data):    
            self.data = data;    
            self.next = None;    
         
    class CreateList:    
        #Declaring head and tail pointer as null.    
        def _init_(self):    
            self.head = Node(None);    
            self.tail = Node(None);    
            self.head.next = self.tail;    
            self.tail.next = self.head;    
            
        #This function will add the new node at the end of the list.    
        def add(self,data):    
            newNode = Node(data);    
            #Checks if the list is empty.    
            if self.head.data is None:    
                #If list is empty, both head and tail would point to new node.    
                self.head = newNode;    
                self.tail = newNode;    
                newNode.next = self.head;    
            else:    
                #tail will point to new node.    
                self.tail.next = newNode;    
                #New node will become new tail.    
                self.tail = newNode;    
                #Since, it is circular linked list tail will point to head.    
                self.tail.next = self.head;    
                    
        #Searches for a node in the list    
        def search(self,element):    
            current = self.head;    
            i = 1;    
            flag = False;    
            #Checks whether list is empty    
            if(self.head == None):    
                print("List is empty");    
            else:    
                while(True):     
                    #Compares element to be found with each node present in the list    
                    if(current.data ==  element):    
                        flag = True;    
                        break;    
                    current = current.next;    
                    i = i + 1;    
                    if(current == self.head):    
                        break;    
                if(flag):    
                    print("Element is present in the list at the position :  " + str(i));    
                else:    
                    print("Element is not present in the list");    
         
    class CircularLinkedList:    
        cl = CreateList();    
        #Adds data to the list    
        cl.add(1);    
        cl.add(2);    
        cl.add(3);    
        cl.add(4);    
        #Search for node 2 in the list    
        cl.search(2);    
        #Search for node in the list    
        cl.search(7);