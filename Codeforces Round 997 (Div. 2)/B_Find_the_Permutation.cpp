#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // Step 1: Build the graph and calculate in-degrees
    vector<vector<int>> graph(n);
    vector<int> in_degree(n, 0);  // in-degree of each vertex
    
    // Reading the adjacency matrix and constructing the graph
    for (int i = 0; i < n; i++) {
        string g;
        cin >> g;
        for (int j = 0; j < n; j++) {
            if (g[j] == '1') {
                graph[i].push_back(j);  // Add edge from i to j
                in_degree[j]++;  // Increment in-degree of vertex j
            }
        }
    }

    // Step 2: Topological sort using BFS (Kahn's algorithm)
    queue<int> q;
    // Add all vertices with in-degree 0 to the queue
    for (int i = 0; i < n; i++) {
        if (in_degree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> result;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);

        // Decrease the in-degree of all neighbors
        for (int neighbor : graph[node]) {
            in_degree[neighbor]--;
            if (in_degree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    // Step 3: Output the result as the permutation (convert to 1-indexed)
    for (int i = 0; i < n; i++) {
        cout << result[i] + 1 << " ";  // Convert to 1-based index
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        solve();
    }
    return 0;
}
