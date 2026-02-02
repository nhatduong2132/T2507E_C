package main.session9;

import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        Asian a = new Asian();
        Euro e = new Euro();

        ArrayList<Person> arr = new ArrayList<>();
        arr.add(a);
        arr.add(e);

        for (int i = 0; i < arr.size(); i++) {

            arr.get(i).eat();
            arr.get(i).sleep();

            if (arr.get(i) instanceof Asian) {
                ((Asian) arr.get(i)).fly();
            }

            if (arr.get(i) instanceof Euro) {
                ((Euro) arr.get(i)).jump();
            }
        }
    }
}
