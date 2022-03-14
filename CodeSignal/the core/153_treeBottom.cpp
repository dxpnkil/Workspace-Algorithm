/*
  You are given a recursive notation of a binary tree: each node of a tree is represented as a set of three elements:
    value of the node;
    left subtree;
    right subtree.
  So, a tree can be written as (value left_subtree right_subtree). It is guaranteed that 1 ≤ value ≤ 109. If a node doesn't exist then it is represented as an empty set: ().
  Your task is to obtain a list of nodes, that are the most distant from the tree root, in the order from left to right.
  
  input:  tree = "(2 (7 (2 () ()) (6 (5 () ()) (11 () ()))) (5 () (9 (4 () ()) ())))"
  output: solution(tree) = [5, 11, 4]
*/

vector<int> solution(string tree) {
    vector<int> res;
	int depth = 0, maxDepth = 0, n = 0;
    
	for (auto c : tree) {
		if (c == '(') ++depth;  
		else if (c == ')')  --depth;
		else if (c != ' ')  n = 10 * n + (c - '0');
		else {
			if (depth > maxDepth) {
				res.clear();
				maxDepth = depth;
			}
			if (n && depth == maxDepth)
				res.push_back(n);
			n = 0;
		}
	}
	return res;
}

