import java.util.*;

public class Beecrowd1255 {
    public static void main(String[] args) {
        HashMap<Character, Integer> map = new HashMap<>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        while (n-- > 0) {
            String line = sc.nextLine();
            line = line.toLowerCase();
            for (int i = 0; i < line.length(); i++) {
                boolean b = Character.isAlphabetic(line.charAt(i));
                if (b) {
                    map.put(line.charAt(i), map.getOrDefault(line.charAt(i), 0) + 1);
                }
            }

            List<Character> ch = getCharacters(map);

            Collections.sort(ch);
            for (Character c : ch){
                System.out.print(c);
            }
            System.out.println();

            map.clear();
        }
    }

    private static List<Character> getCharacters(HashMap<Character, Integer> map) {
        List<Integer> frequency = new ArrayList<>(map.values());

        int data = frequency.get(0);

        for (int i = 1; i < frequency.size(); i++) {

            if (frequency.get(i) > data) {
                data = frequency.get(i);
            }
        }

        List<Character> ch = new ArrayList<>();
        for(Map.Entry<Character, Integer> set : map.entrySet()){
            if (set.getValue() >= data){
                ch.add(set.getKey());
            }
        }
        return ch;
    }


}
