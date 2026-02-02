package main.session3;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Nhap canh a: ");
        double a = sc.nextDouble();

        System.out.print("Nhap canh b: ");
        double b = sc.nextDouble();

        System.out.print("Nhap canh c: ");
        double c = sc.nextDouble();

        Triangle t = new Triangle(a, b, c);

        if (t.isValid()) {
            System.out.println(" Tao thanh tam giac");
            System.out.println("Chu vi = " + t.perimeter());
            System.out.println("Dien tich = " + t.area());
        } else {
            System.out.println("Khong tao thanh tam giac");
        }

        sc.close();
    }
}
