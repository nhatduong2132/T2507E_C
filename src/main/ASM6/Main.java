package main.ASM6;

public class Main {
    public static void main(String[] args) {

        PhoneBook pb = new PhoneBook();

        pb.insertPhone("DQN", "0945032000");
        pb.insertPhone("DQN", "0888888888");
        pb.insertPhone("Alex", "0801");

        pb.showAll();

        pb.updatePhone("DQN", "9999999999");
        pb.searchPhone("DQN");

        pb.sort();
        pb.showAll();

        pb.removePhone("Alex");
        pb.showAll();
    }
}
