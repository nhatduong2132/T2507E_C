package main.session8;

import java.text.DecimalFormat;

public class ProductManager {

    public static void main(String[] arg) {

        // Format money (no scientific notation, no floating noise)
        DecimalFormat df = new DecimalFormat("#,###");

        // ================= PRODUCT =================
        Product p1 = new Product("P001", "Product 1", 1_000_000.0);
        System.out.println("=== PRODUCT ===");
        System.out.println(p1.getInfo());
        System.out.println("Discounted Price: " + df.format(p1.calculateDiscountedPrice()));

        // ================= ELECTRONIC PRODUCT =================
        ElectronicProduct e1 = new ElectronicProduct("E001", "Electronic Product 1", 20_000_000.0, 12);
        ElectronicProduct e2 = new ElectronicProduct("E002", "Electronic Product 2", 30_000_000.0, 24);

        System.out.println("\n=== ELECTRONIC PRODUCT ===");
        System.out.println(e1.getInfo());
        System.out.println("Discounted Price: " + df.format(e1.calculateDiscountedPrice()));

        System.out.println(e2.getInfo());
        System.out.println("Discounted Price: " + df.format(e2.calculateDiscountedPrice()));

        // ================= FOOD PRODUCT =================
        FoodProduct f1 = new FoodProduct("F001", "Food Product 1", 123_456.0, 30);
        FoodProduct f2 = new FoodProduct("F002", "Food Product 2", 321_654.0, 60);

        System.out.println("\n=== FOOD PRODUCT ===");
        System.out.println(f1.getInfo());
        System.out.println("Discounted Price: " + df.format(f1.calculateDiscountedPrice()));

        System.out.println(f2.getInfo());
        System.out.println("Discounted Price: " + df.format(f2.calculateDiscountedPrice()));

        // ================= CLOTHING PRODUCT =================
        ClothingProduct c1 = new ClothingProduct("C001", "Clothing Product 1", 99_999_999.0, "L");
        ClothingProduct c2 = new ClothingProduct("C002", "Clothing Product 2", 88_888_888.0, "X");

        System.out.println("\n=== CLOTHING PRODUCT ===");
        System.out.println(c1.getInfo());
        System.out.println("Discounted Price: " + df.format(c1.calculateDiscountedPrice()));

        System.out.println(c2.getInfo());
        System.out.println("Discounted Price: " + df.format(c2.calculateDiscountedPrice()));
    }
}
