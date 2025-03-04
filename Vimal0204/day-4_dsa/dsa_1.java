class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> set = new HashSet<>();
        Queue<Character> queue = new LinkedList<>();
        
        int n = s.length();
        int len = 0;
        for (int i = 0; i < n; i++) { // O(n)
            char c = s.charAt(i);
            while (set.contains(c)) {
                char head = queue.poll(); // O(1)
                set.remove(head); // O(1)
            }
            set.add(c); // O(1)
            queue.offer(c); // O(1)
            len = Math.max(len, queue.size());
        }
        return len;
    }
}
