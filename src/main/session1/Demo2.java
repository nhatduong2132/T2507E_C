package main.session1;

import java.util.ArrayList;

public class Demo2 {
    public static void main(String[] args){

        int[] arr = new int[]{3}; // Khai bao 1 int array
        // list - collection

        // int float double. char , boolean dung cho phan rieng
        Integer n = 10;
        Float b = 3.14f;
        Double c = 3.14159;
        Character h = 'x';
        Boolean t = true;


        ArrayList ar = new ArrayList(); // chua nen dung
        ar.add(5);
        ar.add("hello");

        ArrayList <Integer> intArr = new ArrayList<>(); // mang so nguyen
        intArr.add(1);
        intArr.add(6);
        intArr.add(5);

        ArrayList<Double> dbArr = new ArrayList<>(); // mang so thuc
        dbArr.add(3.14);
        dbArr.add(21.3);

        for (int i = 0 ; i < intArr.size(); i ++){
            System.out.println(intArr.get(i));
        }

        for (Double d : dbArr){
            System.out.println(d);
        }



    }
}
