package main.ASM6;

import java.util.ArrayList;

public class PhoneNumber {
    private String name;
    private ArrayList<String> Phone = new ArrayList<>();

    public PhoneNumber(String name, String phone){
        this.name = name;
        this.Phone.add(phone);
    }

    public String getName(){
        return name;
    }
    public ArrayList<String> getPhoneList(){
        return Phone;
    }

    public void addPhone(String phone){
        if(!getPhoneList().contains(phone)){
            Phone.add(phone);
        }
    }

    public void setPhone(String newPhone){
        Phone.clear();
        Phone.add(newPhone);
    }


}
