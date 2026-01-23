package main.session5;

public class Main {
    public static void main(String[] args) {

        // 3) HocSinh
        System.out.println("\n===== HOC SINH =====");
        HocSinh hs = new HocSinh("DQN", 10.0, 10.0, 10.0);
        hs.inThongTin();


        // 1) SinhVien
        System.out.println("\n===== SINH VIEN =====");
        SinhVien sv = new SinhVien("SV001", hs.getHoTen(), 25, hs.tinhDiemTB());
        sv.inThongTin();

        // 2) TaiKhoan
        System.out.println("\n===== TAI KHOAN =====");
        TaiKhoan tk = new TaiKhoan("123456789", "DQN", 9999999999.0);
        tk.hienThiSoDu();

        tk.napTien(88888888888.0);
        tk.rutTien(222222.0);
        tk.hienThiSoDu();
    }
}
