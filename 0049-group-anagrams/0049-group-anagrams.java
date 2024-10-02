class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> map = new HashMap<>();
        
        // Traverse each string in the input array
        for (String s : strs) {
            // Convert the string to a char array and sort it
            char[] chars = s.toCharArray();
            Arrays.sort(chars);
            String sorted = new String(chars);
            
            // If the sorted string is not present in the map, add it
            if (!map.containsKey(sorted)) {
                map.put(sorted, new ArrayList<>());
            }
            
            // Append the original string to the corresponding group
            map.get(sorted).add(s);
        }
        
        // Return all the values (grouped anagrams)
        return new ArrayList<>(map.values());
    }
}