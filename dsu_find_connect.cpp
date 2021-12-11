vector<int> parent(100005);

int findparent(int u) {
    if(u == parent[u]) return u;
    return parent[u] = findparent(parent[u]);
}

void connect(int u, int v) {
    u = findparent(u);
    v = findparent(v);

    if(u != v) parent[u] = v;
}
