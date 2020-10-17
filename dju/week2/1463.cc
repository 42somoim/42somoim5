#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int bfs(int x) {
	int cnt = 0;
	queue<int> q, nq;
	vector<bool> visit(1000001, 0);
	q.push(x);
	while (q.size()) {
		int f = q.front();
		visit[f] = 1;
		if (f == 1) break;
		q.pop();
		if (!visit[f - 1]) nq.push(f - 1);
		if (!visit[f / 2] && f % 2 == 0) nq.push(f / 2);
		if (!visit[f / 3] && f % 3 == 0) nq.push(f / 3);
		if (q.empty()) {
			cnt++;
			swap(q, nq);
		}
	}
	return cnt;
}

int main() {
	int n;
	cin >> n;
	cout << bfs(n);
	return 0;
}
