package main.session4;

import java.util.Scanner;

public class Fraction {
    private int numerator;   // tu so
    private int denominator; // mau so

    // Constructor mặc định
    public Fraction() {
        this.numerator = 0;
        this.denominator = 1;
    }

    // Constructor có tham số
    public Fraction(int numerator, int denominator) {
        if (denominator == 0) {
            System.out.println("Mau so khong duoc bang 0! Dat mau so = 1.");
            denominator = 1;
        }
        this.numerator = numerator;
        this.denominator = denominator;
        simplify(); // rút gọn
    }

    // Getter / Setter
    public int getNumerator() {
        return numerator;
    }

    public void setNumerator(int numerator) {
        this.numerator = numerator;
        simplify();
    }

    public int getDenominator() {
        return denominator;
    }

    public void setDenominator(int denominator) {
        if (denominator == 0) {
            System.out.println("Mau so khong duoc bang 0! Khong cap nhat.");
            return;
        }
        this.denominator = denominator;
        simplify();
    }

    // Nhap phan so
    public void input() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Nhap tu so: ");
        numerator = sc.nextInt();

        do {
            System.out.print("Nhap mau so (khac 0): ");
            denominator = sc.nextInt();
            if (denominator == 0) {
                System.out.println("Mau so khong duoc bang 0. Nhap lai!");
            }
        } while (denominator == 0);

        simplify();
    }

    // In phan so
    public void print() {
        if (denominator == 1) {
            System.out.println(numerator);
        } else {
            System.out.println(numerator + "/" + denominator);
        }
    }

    // Rút gọn phân số
    public void simplify() {
        if (numerator == 0) {
            denominator = 1;
            return;
        }

        // đưa dấu âm lên tử
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }

        int g = gcd(Math.abs(numerator), Math.abs(denominator));
        numerator /= g;
        denominator /= g;
    }

    // Nghịch đảo phân số
    public Fraction inverse() {
        if (numerator == 0) {
            System.out.println("Khong the nghich dao phan so co tu so = 0!");
            return new Fraction(0, 1);
        }
        return new Fraction(denominator, numerator);
    }

    // Cộng 2 phân số
    public Fraction add(Fraction other) {
        int tu = this.numerator * other.denominator + other.numerator * this.denominator;
        int mau = this.denominator * other.denominator;
        return new Fraction(tu, mau);
    }

    // Trừ 2 phân số
    public Fraction sub(Fraction other) {
        int tu = this.numerator * other.denominator - other.numerator * this.denominator;
        int mau = this.denominator * other.denominator;
        return new Fraction(tu, mau);
    }

    // Nhân 2 phân số
    public Fraction mul(Fraction other) {
        int tu = this.numerator * other.numerator;
        int mau = this.denominator * other.denominator;
        return new Fraction(tu, mau);
    }

    // Chia 2 phân số
    public Fraction div(Fraction other) {
        if (other.numerator == 0) {
            System.out.println("Khong the chia cho phan so = 0!");
            return new Fraction(0, 1);
        }
        int tu = this.numerator * other.denominator;
        int mau = this.denominator * other.numerator;
        return new Fraction(tu, mau);
    }

    // UCLN
    private int gcd(int a, int b) {
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }
}
