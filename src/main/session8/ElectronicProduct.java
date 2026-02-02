package main.session8;

public class ElectronicProduct extends Product {
    private Integer warrantyMonths;

    public ElectronicProduct(String productId, String name, Double price, Integer warrantyMonths){
        super(productId, name, price);
        this.warrantyMonths = warrantyMonths;
    }

    public int getWarrantyMonths(){
        return warrantyMonths;
    }

    public void setWarrantyMonths(Integer warrantyMonths){
        this.warrantyMonths = warrantyMonths;
    }



    public String getInfo(){
        return super.getInfo() + "Warranty: " + getWarrantyMonths();
    }

    public Double calculateDiscountedPrice() {
        if ( getPrice() > 10000000){
            return getPrice() * 0.9;
        }
        else {
            return getPrice();
        }
    }
}
