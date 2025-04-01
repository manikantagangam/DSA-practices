"""
https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
"""

class Solution:
    def dfs(self, adj):
        
        def dfs(node, adj, vis, ans):
            vis[node] = 1
            
            ans.append(node)
            
            for i in adj[node]:
                if(not vis[i]):
                    dfs(i, adj, vis, ans)
        
        vis = [0 for _ in range(len(adj))]
        start = 0
        ans = []
        
        dfs(start, adj, vis, ans)
        return ans