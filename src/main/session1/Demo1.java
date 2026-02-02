package main.session1;

import java.util.Scanner;

public class Demo1 {
    public static void main(String[] args) {
        int x = 10;
        float y = 3.14f;
        double z = 3.14159;
        boolean t = true;
        char c = 'h';
        String s = "Hello World!";

        System.out.println(s + x);

        int u = 20;
        int v = 30;
        System.out.println(u + "+" + v + "=" + add(u, v));
        System.out.println(u + "/" + v + "=" + div(u, v));

        // Nhap vao 1 so tu ban phim
        Scanner sc = new Scanner(System.in);
        System.out.println("Input n = ");
        int n = sc.nextInt();

        if (isPrime(n)) {
            System.out.println(n + " is a prime number!");
        } else {
            System.out.println(n + " is not a prime number!");
        }

        sc.close();

        double p;
        p = sc.nextDouble();
    }




    public static int add(int a, int b) {
        return a + b;
    }

    public static double div(int a, int b) {
        if (b == 0) return 0;
        return (double) a / b;
    }

    public static boolean isPrime(int n) {
        if (n < 2) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;

        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }
}
