"""
Question Link:

https://www.geeksforgeeks.org/problems/lru-cache/1

""" 

class Node:
    def __init__(self, key=0, value=0):
        self.key = key
        self.value = value
        self.prev = None
        self.next = None

class LRUCache:
    def __init__(self, cap: int):
        self.capacity = cap
        self.cache = {}  # key to node mapping
        # Create dummy head and tail nodes for easy management
        self.head = Node()
        self.tail = Node()
        self.head.next = self.tail
        self.tail.prev = self.head
    
    def _remove(self, node: Node):
        """Remove a node from the doubly linked list."""
        prev_node = node.prev
        next_node = node.next
        prev_node.next = next_node
        next_node.prev = prev_node

    def _add(self, node: Node):
        """Add a node right after the head (most recently used)."""
        next_node = self.head.next
        self.head.next = node
        node.prev = self.head
        node.next = next_node
        next_node.prev = node

    def get(self, key: int) -> int:
        """Return the value of the key if it exists in the cache, otherwise return -1."""
        if key in self.cache:
            node = self.cache[key]
            self._remove(node)
            self._add(node)  # Move the node to the front
            return node.value
        return -1
    
    def put(self, key: int, value: int):
        """Insert the key-value pair into the cache. If the cache exceeds capacity, remove the LRU item."""
        if key in self.cache:
            node = self.cache[key]
            node.value = value  # Update the value
            self._remove(node)
            self._add(node)  # Move the updated node to the front
        else:
            if len(self.cache) >= self.capacity:
                # Cache is full, remove the LRU item (from the tail)
                lru_node = self.tail.prev
                self._remove(lru_node)
                del self.cache[lru_node.key]  # Remove from hash map
            
            # Add new node to the cache
            new_node = Node(key, value)
            self.cache[key] = new_node
            self._add(new_node)  # Add it to the front (most recent)
