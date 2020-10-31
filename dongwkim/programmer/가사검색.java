import java.util.Scanner;
import java.util.Arrays;
import java.util.HashMap;

public class lyrics_search {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String[] words = {"frodo", "front", "frost", "frozen", "frame", "kakao"};
		String[] queries = {"fro??", "????o", "fr???", "fro???", "pro?"};
		System.out.println(Arrays.toString(solution(words,queries)));
	}
	public static int[] solution(String[] words, String[] queries) {
		Trie[] tries = new Trie[100001];
		for(int i = 0;i < words.length;i++) {
			int len = words[i].length();
			if(tries[len] == null)
				tries[len] = new Trie();
			tries[len].insert(words[i]);
		}
		int[] answer = new int[queries.length];
		for(int i = 0;i < queries.length;i++) {
			int len = queries[i].length();
			if(tries[len] == null)
				answer[i] = 0;
			else
				answer[i] = tries[len].Count(queries[i]);
		}
		return answer;
	}
	static class Trie{
		Node front;
		Node back;
		public Trie() {
			this.front = new Node();
			this.back = new Node();
		}
		public void insert(String word) {
			insertFront(word);
			insertBack(word);
		}
		private void insertFront(String word) {
			Node node = front;
			for(int i = 0;i < word.length();i++) {
				node.count++;
				node = node.child.computeIfAbsent(word.charAt(i), key -> new Node());
			}
		}
		private void insertBack(String word) {
			Node node = back;
			for(int i = word.length() - 1;i > -1;i--) {
				node.count++;
				node = node.child.computeIfAbsent(word.charAt(i), key -> new Node());
			}
		}
		public int Count(String query) {
			if(query.charAt(0) == '?')
				return CountBack(query);
			else
				return CountFront(query);
		}
		private int CountFront(String query) {
			Node node = front;
			for(int i = 0;i < query.length();i++) {
				if(query.charAt(i) == '?')
					break;
				if(!node.child.containsKey(query.charAt(i)))
					return 0;
				node = node.child.get(query.charAt(i));
			}
			return node.count;
		}
		private int CountBack(String query) {
			Node node = back;
			for(int i = query.length() - 1;i > -1;i--) {
				if(query.charAt(i) == '?')
					break;
				if(!node.child.containsKey(query.charAt(i)))
					return 0;
				node = node.child.get(query.charAt(i));
			}
			return node.count;
		}
	}
	static class Node{
		HashMap<Character, Node> child;
		int count;
		public Node() {
			this.child = new HashMap();
			this.count = 0;
		}
	}
}
