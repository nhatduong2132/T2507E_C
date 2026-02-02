package main.session8;

public class FoodProduct extends Product {
    private Integer expiryDays;
    public FoodProduct(String productId, String name, Double price, Integer expiryDays){
        super(productId, name, price);
        this.expiryDays = expiryDays;
    }

    public int getExpiryDays(){
        return expiryDays;
    }

    public void setExpiryDays(Integer expiryDays){
        this.expiryDays = expiryDays;
    }

    public String getInfo(){
        return super.getInfo() + " ExpiryDays: " + getExpiryDays();
    }

    public Double calculateDiscountedPrice() {
        if (getExpiryDays() <= 3) {
            return getPrice() * 0.7;
        } else if (getExpiryDays() <= 7) {
            return getPrice() * 0.9;
        } else {
            return getPrice();
        }
    }
}
