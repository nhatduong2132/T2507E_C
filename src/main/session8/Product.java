package main.session8;

public class Product {
    private String productId;
    private String name;
    private Double price;

    public Product(String productId, String name, Double price){
        this.productId = productId;
        this.name = name;
        this.price = price;
    }

    // Getter/Setter
    public String getProductId() {
        return productId;
    }

    public void setProductId(String productId) {
        this.productId = productId;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }



    public String getInfo() {
        return "Product ID: " + getProductId()
                + ", Name: " + getName()
                + ", Price: " + calculateDiscountedPrice();
    }

    public Double calculateDiscountedPrice() {
        return price;
    }

}
