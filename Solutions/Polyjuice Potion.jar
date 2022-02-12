import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Potion {
    public static void main(String... args) {
        Scanner scan = new Scanner(System.in);
        // Read number of potion
        int numberOfPotion = scan.nextInt();

        // Store percentages of Castor oils 
        List<Integer> numberOfBottles = new ArrayList<Integer>();

        // Read percentage
        int number;
        for (int i = 0; i < numberOfPotion; i++) {
            number = scan.nextInt();
            numberOfBottles.add(findNumberOfBottle(number, 100 - number));   
        }

        // Write number of bottles
        for (int n : numberOfBottles) {
            System.out.println(n);
        }

        scan.close();
    }

    public static int findNumberOfBottle(int percOfCastor, int percOfEssential) {
        if (percOfCastor == 100) {
            return 1;
        }
        int gcd = 1;
        int numberOfBottle;
        for (int i = 2; i <= percOfCastor && i <= percOfEssential; i++) {
            if (percOfCastor % i == 0 && percOfEssential % i == 0) {
                gcd = i;
            }
        }
        numberOfBottle = (percOfCastor / gcd) + (percOfEssential / gcd); 
        return numberOfBottle;
    }
}
