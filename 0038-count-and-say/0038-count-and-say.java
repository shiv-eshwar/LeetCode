class Solution {
    public String countAndSay(int n) {
        if (n == 1) {
            return "1";
        }

        String previousTerm = "1";

        for (int i = 2; i <= n; i++) {
            StringBuilder currentTerm = new StringBuilder();
            int count = 1;

            for (int j = 1; j < previousTerm.length(); j++) {
                if (previousTerm.charAt(j) == previousTerm.charAt(j - 1)) {
                    count++;
                } else {
                    currentTerm.append(count).append(previousTerm.charAt(j - 1));
                    count = 1; 
                }
            }

            currentTerm.append(count).append(previousTerm.charAt(previousTerm.length() - 1));

            previousTerm = currentTerm.toString(); 
        }

        return previousTerm;
    }

}

    
