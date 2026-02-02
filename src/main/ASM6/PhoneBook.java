package main.ASM6;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class PhoneBook extends Phone{
    private ArrayList<PhoneNumber> PhoneList = new ArrayList<>();

    public void insertPhone(String name, String phone){
        for (PhoneNumber pn : PhoneList){
            if(pn.getName().equalsIgnoreCase(name)){
                pn.addPhone(phone);
                return;
            }
        }
        PhoneList.add(new PhoneNumber(name,phone));
    }

    public void removePhone(String name){
        PhoneList.removeIf(pn -> pn.getName().equalsIgnoreCase(name));
    }

    @Override
    public void updatePhone(String name, String newPhone){
        for (PhoneNumber pn : PhoneList){
            if(pn.getName().equalsIgnoreCase(name)){
                pn.setPhone(newPhone);
                return;
            }
        }
    }

    @Override
    public void searchPhone(String name){
        for (PhoneNumber pn : PhoneList){
            if(pn.getName().equalsIgnoreCase(name)){
                System.out.println("Name" + name);
                System.out.println("Phone" + pn.getPhoneList());
                return;
            }
        }
        System.out.println("Not found!");
    }
    @Override
    public void sort(){
        Collections.sort(PhoneList, Comparator.comparing(PhoneNumber::getName));
    }

    public void showAll(){
        for(PhoneNumber pn : PhoneList){
            System.out.println(pn.getName() + " : " + pn.getPhoneList());
        }
    }


}
